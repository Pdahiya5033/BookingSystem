#include<stdio.h>
#include<conio.h>
main()
{
	int i=0,choice,timing,ch_payment,card_num,cvv,otp,sent_otp=12345,flag=0;
	char confirm,pr,feed,feedback[100],respond[100],pay_confirm;
	struct trip_vacancy
	{
	    int vacancy1,vacancy2,vacancy3;
	};
	struct trip_timing
	{
	    char choice1[30],choice2[30],choice3[30];
	    struct trip_vacancy vac;
	};
	struct booking
	{
        int days;
        char trip[50];
        float price;
        struct trip_timing tc;
	};
	struct booking t1 = {2,"SONIPAT to HARIDWAR",5000,"8th March 2021","12th March 2021","16th March 2021",4,4,4};
	struct booking t2 = {2,"SONIPAT to JAIPUR",6000,"9th March 2021","13th March 2021","17th March 2021",5,5,5};
	struct booking t3 = {3,"SONIPAT to AGRA",5500,"10th March 2021","14th March 2021","18th March 2021",4,4,4};

	struct customer
	{
	    long unsigned int mobile;
	    char name[50],address[50];
	} c[20];

	while(t1.tc.vac.vacancy1!=0||t1.tc.vac.vacancy2!=0||t1.tc.vac.vacancy3!=0||t2.tc.vac.vacancy1!=0||t2.tc.vac.vacancy2!=0||t2.tc.vac.vacancy3!=0||
	t3.tc.vac.vacancy1!=0||t3.tc.vac.vacancy2!=0||t3.tc.vac.vacancy3!=0)
    {
        printf("WELCOME to DAHIYA TRAVEL AGENCY\n");
        printf("enter your name,address and mobile no. :");
        getchar();
        gets(c[i].name);
        gets(c[i].address);
        scanf("%lu",&c[i].mobile);
        printf("Hello %s\n",c[i].name);
        printf("Where do you want to go:\n");
        printf("There are three trips available to you\n");
        printf("1. SONIPAT to HARIDWAR\n");
        printf("2. SONIPAT to JAIPUR\n");
        printf("3. SONIPAT to AGRA\n");
        printf("enter 1 for first trip, 2 for second trip, 3 for third trip and 4 for not making any choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            if(t1.tc.vac.vacancy1+t1.tc.vac.vacancy2+t1.tc.vac.vacancy3==0)
            {
                puts("oops! no more seats for choice of your trip");
                continue;
            }
            printf("You have opted for %s trip\n%d seats are available for this trip\n",t1.trip,t1.tc.vac.vacancy1+t1.tc.vac.vacancy2+t1.tc.vac.vacancy3);
            printf("Here is the information which you need to know about above trip\n");
            printf("Your trip is going to be for %d days\n",t1.days);
            printf("We will be providing you a guide\n");
            printf("Your dietry charges will be included in trip cost\n");
            printf("this trip will cost you %f\n",t1.price);
            printf("enter y to proceed further:");
            scanf(" %c",&pr);
            if(pr=='y')
            {
                printf("Here are some choices regarding timing of trip:\n");
                printf("First is from %s\nSecond is from %s\nLast one is %s\n",t1.tc.choice1,t1.tc.choice2,t1.tc.choice3);
                printf("Enter your choice of timing, 1 for first date, 2 for second date, 3 for third date and \n4 for not having preferrable timing:");
                scanf("%d",&timing);
                if(timing==1)
                {
                	if(t1.tc.vac.vacancy1==0)
                	{
                		printf("oops! no more seats for your choice\n");
                		continue;
					}
                	printf("%d seats are available for your choice\n",t1.tc.vac.vacancy1);
                    printf("OK You have opted for trip on %s\n",t1.tc.choice1);
                    printf("You have to pay Rs. %f for confirmation of ticket\n",t1.price);
                    printf("Would you like to pay by cash or will use internet banking\n");
                    printf("enter 1 for payment by cash and 2 for using internet banking:");
                    scanf("%d",&ch_payment);
                    if(ch_payment==1)
                    {
                         printf("move to cash counter\n");
                         printf("got payment confirmation ?\nenter y for getting the confirmation\n");
                         scanf(" %c",&pay_confirm);
                         if(pay_confirm=='y')
                         {
                             printf("you are all done\n");
                             printf("you will be informed about the timings in advance\n");
                             t1.tc.vac.vacancy1--;
                         }
                    }

                    else if(ch_payment==2)
                    {
                        do
                        {
                            printf("please enter your account details:\n");
                            printf("enter debit card number and CVV no.");
                            scanf("%d%d",&card_num,&cvv);
                            printf("we have sent an OTP to your registered mobile number\n");
                            printf("enter OTP:");
                            scanf("%d",&otp);
                            if(otp==sent_otp)
                            {
                                printf("your transaction is successful\n");
                                printf("you are all done \n");
                                printf("you will be informed about the timings in advance\n");
                                t1.tc.vac.vacancy1--;
                                flag=1;
                            }
                            else
                                printf("oops! your entered OTP is wrong, please try again\n");
                        }while(flag!=1);

                    }
                }

                else if(timing==2)
                {
                	if(t1.tc.vac.vacancy2==0)
                	{
                		printf("oops! no more seats for your choice\n");
                		continue;
					}
                	printf("%d seats are available for your choice\n",t1.tc.vac.vacancy2);
                    printf("OK You have opted for trip on %s\n",t1.tc.choice2);
                    printf("You have to pay Rs.%f for confirmation of ticket\n",t1.price);
                    printf("Would you like to pay by cash or will use internet banking\n");
                    printf("enter 1 for payment by cash and 2 for using internet banking:");
                    scanf("%d",&ch_payment);
                    if(ch_payment==1)
                    {
                        printf("move to cash counter");
                        printf("got payment confirmation ?\nenter y for getting the confirmation\n");
                         scanf(" %c",&pay_confirm);
                         if(pay_confirm=='y')
                         {
                             printf("you are all done\n");
                             printf("you will be informed about the timings in advance\n");
                             t1.tc.vac.vacancy2--;
                         }
                    }

                    else if(ch_payment==2)
                    {
                        do
                        {
                            printf("please enter your account details:\n");
                            printf("enter debit card number and CVV no.");
                            scanf("%d%d",&card_num,&cvv);
                            printf("we have sent an OTP to your registered mobile number\n");
                            printf("enter OTP:");
                            scanf("%d",&otp);
                            if(otp==sent_otp)
                            {
                                printf("your transaction is successful\n");
                                printf("you are all done \n");
                                printf("you will be informed about the timings in advance\n");
                                t1.tc.vac.vacancy2--;
                                flag=1;
                            }
                            else
                                printf("oops! your entered otp is wrong, please try again\n");
                        }while(flag!=1);

                    }
                }

                else if(timing==3)
                {
                	printf("%d seats are available for your choice\n",t1.tc.vac.vacancy3);
                    printf("OK You have opted for trip on %s\n",t1.tc.choice3);
                    printf("You have to pay Rs.%f for confirmation of ticket\n",t1.price);
                    printf("Would you like to pay by cash or will use internet banking\n");
                    printf("enter 1 for payment by cash and 2 for using internet banking:");
                    scanf("%d",&ch_payment);
                    if(ch_payment==1)
                        {
                            printf("move to cash counter\n");
                            printf("got payment confirmation ?\nenter y for getting the confirmation\n");
                            scanf(" %c",&pay_confirm);
                            if(pay_confirm=='y')
                            {
                                printf("you are all done\n");
                                printf("you will be informed about the timings in advance\n");
                                t1.tc.vac.vacancy3--;
                            }
                        }
                    else if(ch_payment==2)
                    {
                        do
                        {
                            printf("please enter your account details:\n");
                            printf("enter debit card number and CVV no.");
                            scanf("%d%d",&card_num,&cvv);
                            printf("we have sent an OTP to your registered mobile number\n");
                            printf("enter OTP:");
                            scanf("%d",&otp);
                            if(otp==sent_otp)
                            {
                                printf("your transaction is successful\n");
                                printf("you are all done \n");
                                printf("you will be informed about the timings in advance\n");
                                t1.tc.vac.vacancy3--;
                                flag=1;
                            }
                            else
                                printf("oops! your entered otp is wrong, please try again\n");
                        }while(flag!=1);
                    }
                }



            }
			break;

        }

        case 2:
        {
            if(t2.tc.vac.vacancy1+t2.tc.vac.vacancy2+t2.tc.vac.vacancy3==0)
            {
                puts("oops! no more vacancies for choice of your trip");
                continue;
            }
            printf("You have opted for %s trip\n%d seats are available for this trip\n",t2.trip,t2.tc.vac.vacancy1+t2.tc.vac.vacancy2+t2.tc.vac.vacancy3);
            printf("Here is the information which you need to know about above trip\n");
            printf("Your trip is going to be for %d days\n",t2.days);
            printf("We will be providing you a guide\n");
            printf("Your dietry charges will be included in trip cost\n");
            printf("this trip will cost you %f\n",t2.price);
            printf("enter y to proceed further:");
            scanf(" %c",&pr);
            if(pr=='y')
            {
                printf("Here are some choices regarding timing of trip:\n");
                printf("First is from %s\nSecond is from %s\nLast one is %s\n",t2.tc.choice1,t2.tc.choice2,t2.tc.choice3);
                printf("Enter your choice of timing, 1 for first date, 2 for second date, 3 for third date and \n4 for not having preferrable timing:");
                scanf("%d",&timing);
                if(timing==1)
                {
                	printf("%d seats are available for your choice\n",t2.tc.vac.vacancy1);
                    printf("OK You have opted for trip on %s\n",t2.tc.choice1);
                    printf("You have to pay Rs. %f for confirmation of ticket\n",t2.price);
                    printf("Would you like to pay by cash or will use internet banking\n");
                    printf("enter 1 for payment by cash and 2 for using internet banking:");
                    scanf("%d",&ch_payment);
                    if(ch_payment==1)
                    {
                         printf("move to cash counter\n");
                         printf("got payment confirmation ?\nenter y for getting the confirmation\n");
                         scanf(" %c",&pay_confirm);
                         if(pay_confirm=='y')
                         {
                             printf("you are all done\n");
                             printf("you will be informed about the timings in advance\n");
                             t2.tc.vac.vacancy1--;
                         }
                    }
                    else if(ch_payment==2)
                    {
                        do
                        {
                            printf("please enter your account details:\n");
                            printf("enter debit card number and CVV no.");
                            scanf("%d%d",&card_num,&cvv);
                            printf("we have sent an OTP to your registered mobile number\n");
                            printf("enter OTP:");
                            scanf("%d",&otp);
                            if(otp==sent_otp)
                            {
                                printf("your transaction is successful\n");
                                printf("you are all done \n");
                                printf("you will be informed about the timings in advance\n");
                                t2.tc.vac.vacancy1--;
                                flag=1;
                            }
                            else
                                printf("oops! your entered OTP is wrong, please try again\n");
                        }while(flag!=1);
                    }
                }
                else if(timing==2)
                {
                	printf("%d seats are available for your choice\n",t2.tc.vac.vacancy2);
                    printf("OK You have opted for trip on %s\n",t2.tc.choice2);
                    printf("You have to pay Rs.%f for confirmation of ticket\n",t2.price);
                    printf("Would you like to pay by cash or will use internet banking\n");
                    printf("enter 1 for payment by cash and 2 for using internet banking:");
                    scanf("%d",&ch_payment);
                    if(ch_payment==1)
                    {
                        printf("move to cash counter");
                        printf("got payment confirmation ?\nenter y for getting the confirmation\n");
                         scanf(" %c",&pay_confirm);
                         if(pay_confirm=='y')
                         {
                             printf("you are all done\n");
                             printf("you will be informed about the timings in advance\n");
                             t2.tc.vac.vacancy2--;
                         }
                    }

                    else if(ch_payment==2)
                    {
                        do
                        {
                            printf("please enter your account details:\n");
                            printf("enter debit card number and CVV no.");
                            scanf("%d%d",&card_num,&cvv);
                            printf("we have sent an OTP to your registered mobile number\n");
                            printf("enter OTP:");
                            scanf("%d",&otp);
                            if(otp==sent_otp)
                            {
                                printf("your transaction is successful\n");
                                printf("you are all done \n");
                                printf("you will be informed about the timings in advance\n");
                                t2.tc.vac.vacancy2--;
                                flag=1;
                            }
                            else
                                printf("oops! your entered otp is wrong, please try again\n");
                        }while(flag!=1);

                    }
                }
                    else if(timing==3)
                {
                	printf("%d seats are available for your choice\n",t2.tc.vac.vacancy3);
                    printf("OK You have opted for trip on %s\n",t2.tc.choice2);
                    printf("You have to pay Rs.%f for confirmation of ticket\n",t2.price);
                    printf("Would you like to pay by cash or will use internet banking\n");
                    printf("enter 1 for payment by cash and 2 for using internet banking:");
                    scanf("%d",&ch_payment);
                    if(ch_payment==1)
                        {
                            printf("move to cash counter\n");
                            printf("got payment confirmation ?\nenter y for getting the confirmation\n");
                            scanf(" %c",&pay_confirm);
                            if(pay_confirm=='y')
                            {
                                printf("you are all done\n");
                                printf("you will be informed about the timings in advance\n");
                                t2.tc.vac.vacancy3--;
                            }
                        }
                    else if(ch_payment==2)
                    {
                        do
                        {
                            printf("please enter your account details:\n");
                            printf("enter debit card number and CVV no.");
                            scanf("%d%d",&card_num,&cvv);
                            printf("we have sent an OTP to your registered mobile number\n");
                            printf("enter OTP:");
                            scanf("%d",&otp);
                            if(otp==sent_otp)
                            {
                                printf("your transaction is successful\n");
                                printf("you are all done \n");
                                printf("you will be informed about the timings in advance\n");
                                t2.tc.vac.vacancy3--;
                                flag=1;
                            }
                            else
                                printf("oops! your entered otp is wrong, please try again");
                        }while(flag!=1);
                    }
                }

                }
                break;
            }


            
			
        
        case 3:
        {
            if(t3.tc.vac.vacancy1+t3.tc.vac.vacancy2+t3.tc.vac.vacancy3==0)
            {
                puts("oops! no more vacancies for choice of your trip");
                continue;
            }
            printf("You have opted for %s trip\n%d seats are available for this trip\n",t3.trip,t3.tc.vac.vacancy1+t3.tc.vac.vacancy2+t3.tc.vac.vacancy3);
            printf("Here is the information which you need to know about above trip\n");
            printf("Your trip is going to be for %d days\n",t3.days);
            printf("We will be providing you a guide\n");
            printf("Your dietry charges will be included in trip cost\n");
            printf("this trip will cost you %f\n",t3.price);
            printf("enter y to proceed further:");
            scanf(" %c",&pr);
            if(pr=='y')
            {
                printf("Here are some choices regarding timing of trip:\n");
                printf("First is from %s\nSecond is from %s\nLast one is %s\n",t3.tc.choice1,t3.tc.choice2,t3.tc.choice3);
                printf("Enter your choice of timing, 1 for first date, 2 for second date, 3 for third date and \n4 for not having preferrable timing:");
                scanf("%d",&timing);
                if(timing==1)
                {
                	printf("%d seats are available for your choice\n",t3.tc.vac.vacancy1);
                    printf("OK You have opted for trip on %s\n",t3.tc.choice1);
                    printf("You have to pay Rs. %f for confirmation of ticket\n",t3.price);
                    printf("Would you like to pay by cash or will use internet banking\n");
                    printf("enter 1 for payment by cash and 2 for using internet banking:");
                    scanf("%d",&ch_payment);
                    if(ch_payment==1)
                    {
                         printf("move to cash counter\n");
                         printf("got payment confirmation ?\nenter y for getting the confirmation\n");
                         scanf(" %c",&pay_confirm);
                         if(pay_confirm=='y')
                         {
                             printf("you are all done\n");
                             printf("you will be informed about the timings in advance\n");
                             t3.tc.vac.vacancy1--;
                         }
                    }
                    else if(ch_payment==2)
                    {
                        do
                        {
                            printf("please enter your account details:\n");
                            printf("enter debit card number and CVV no.");
                            scanf("%d%d",&card_num,&cvv);
                            printf("we have sent an OTP to your registered mobile number\n");
                            printf("enter OTP:");
                            scanf("%d",&otp);
                            if(otp==sent_otp)
                            {
                                printf("your transaction is successful\n");
                                printf("you are all done \n");
                                printf("you will be informed about the timings in advance\n");
                                t3.tc.vac.vacancy1--;
                                flag=1;
                            }
                            else
                                printf("oops! your entered OTP is wrong, please try again\n");
                        }while(flag!=1);
                    }
                }
                else if(timing==2)
                {
                	printf("%d seats are available for your choice\n",t3.tc.vac.vacancy2);
                    printf("OK You have opted for trip on %s\n",t3.tc.choice3);
                    printf("You have to pay Rs.%f for confirmation of ticket\n",t3.price);
                    printf("Would you like to pay by cash or will use internet banking\n");
                    printf("enter 1 for payment by cash and 2 for using internet banking:");
                    scanf("%d",&ch_payment);
                    if(ch_payment==1)
                    {
                        printf("move to cash counter");
                        printf("got payment confirmation ?\nenter y for getting the confirmation:");
                         scanf(" %c",&pay_confirm);
                         if(pay_confirm=='y')
                         {
                             printf("you are all done\n");
                             printf("you will be informed about the timings in advance\n");
                             t3.tc.vac.vacancy2--;
                         }
                    }

                    else if(ch_payment==2)
                    {
                        do
                        {
                            printf("please enter your account details:\n");
                            printf("enter debit card number and CVV no.");
                            scanf("%d%d",&card_num,&cvv);
                            printf("we have sent an OTP to your registered mobile number\n");
                            printf("enter OTP:");
                            scanf("%d",&otp);
                            if(otp==sent_otp)
                            {
                                printf("your transaction is successful\n");
                                printf("you are all done \n");
                                printf("you will be informed about the timings in advance\n");
                                t3.tc.vac.vacancy2--;
                                flag=1;
                            }
                            else
                                printf("oops! your entered otp is wrong, please try again\n");
                        }while(flag!=1);

                    }
                }
                    else if(timing==3)
                {
                	printf("%d seats are available for your choice\n",t3.tc.vac.vacancy3);
                    printf("OK You have opted for trip on %s\n",t3.tc.choice3);
                    printf("You have to pay Rs.%f for confirmation of ticket\n",t3.price);
                    printf("Would you like to pay by cash or will use internet banking\n");
                    printf("enter 1 for payment by cash and 2 for using internet banking:");
                    scanf("%d",&ch_payment);
                    if(ch_payment==1)
                        {
                            printf("move to cash counter\n");
                            printf("got payment confirmation ?\nenter y for getting the confirmation");
                            scanf(" %c",&pay_confirm);
                            if(pay_confirm=='y')
                            {
                                printf("you are all done\n");
                                printf("you will be informed about the timings in advance\n");
                                t3.tc.vac.vacancy3--;
                            }
                        }
                    else if(ch_payment==2)
                    {
                        do
                        {
                            printf("please enter your account details:\n");
                            printf("enter debit card number and CVV no.");
                            scanf("%d%d",&card_num,&cvv);
                            printf("we have sent an OTP to your registered mobile number\n");
                            printf("enter OTP:");
                            scanf("%d",&otp);
                            if(otp==sent_otp)
                            {
                                printf("your transaction is successful\n");
                                printf("you are all done \n");
                                printf("you will be informed about the timings in advance\n");
                                t3.tc.vac.vacancy3--;
                                flag=1;
                            }
                            else
                                printf("oops! your entered otp is wrong, please try again\n");
                        }while(flag!=1);
                    }
                }


                }
                break;
            }
            
        default:
        {
            printf("you have opted for 4th choice\nWe apologise for your inconvinience\n");
            printf("would you like to give feedback (y/n)\n");
            scanf(" %c",&feed);
            if(feed=='y')
            {
                printf("enter your feedback:\n");
                getchar();
                gets(feedback);
                printf("thanks for your valuable feedback\n");
            }
            else
                printf("we expect your next visit soon\n");
        }
    }
        i++;

	}
}
