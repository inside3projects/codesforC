#include<stdio.h>
  int main(){
	  int key,payment1,payment4,id,phone,pass;
	  char names[20],second[20],surname[20];
	  
	  printf("enter password:");
	  scanf("%d",&pass);
	     
	     if(pass == 1234){
	     	
	  printf("WELCOME TO MAKADARA TRAIN BOOKING PORTAL\n");
	  printf("CLASS TYPE        CHARGES PER SEAT    SESSIONKEY\n");
	  printf("FIRST CLASS          sh1500            1\n");
	  printf("ECONOMY CLASS        sh700             2\n");
	  
	  printf("enter session key:");
	  scanf("%d",&key);	  
	  
	      if(key == 1){
			  printf("enter valid details\n");
			  printf("NAMES:");
			  scanf("%s %s %s",&names,&second,&surname);
			  printf("please if under 18 provide id number of parent or guardian\n");
			  printf("ID NUMBER:");
			  scanf("%d",&id);
			  printf("PHONE NUMBER:");
			  scanf("%d",&phone);
              printf("press 5  to proceed to payment or 6 to cancel"); 
              scanf("%d",&payment1);                  
						      	
								  {
								  	if(payment1 == 5){
										  printf("do you wish to pay sh 1500 to MAKADARA TRAIN EXPRESS\n");
										  printf("press 3 to accept or  4 to drop the request");
										  scanf("%d",&payment4);
												 {
												 	if(payment4 == 3){
														 printf("BOOKING WAS SUCCESFUL\n");
														 printf("NAMES:     %s %s %s\n",names,second,surname);
														 printf("ID NUMBER:    %d\n",id);
														 printf("PHONE NUMBER:   %d\n",phone);
														 printf("CLASS TYPE:     FIRTS CLASS\n");
														 printf("DEPARTURE TIME:   0800HRS"); }
														   else {
														   	if(payment4 == 4){
															   printf("BOOKING REQUEST WAS CANCELLED");}}}}
															   
													else {
														printf("You cancelledd the payment"); }}}

															   
                               else {
							      if(key ==  2){
							      	printf("enter valid details\n");
			                        printf("NAMES:");
			                        scanf("%s %s %s",&names,&second,&surname);
			                        printf("please if under 18 provide id number of parent or guardian\n");
			                        printf("ID NUMBER:");
			                        scanf("%d",&id);
                                    printf("PHONE NUMBER:");
			                        scanf("%d",&phone);
						      	    printf("press 5  to proceed to payment or 6 to cancel"); 
                                    scanf("%d",&payment1);
						      	
								  {
								  	if(payment1 == 5){
										  printf("do you wish to pay sh 700 to MAKADARA TRAIN EXPRESS\n");
										  printf("press 3 to accept or  4 to drop the request");
										  scanf("%d",&payment4);
												 {
												 	if(payment4 == 3){
														 printf("BOOKING WAS SUCCESFUL\n");
														 printf("NAMES:     %s %s %s\n",names,second,surname);
														 printf("ID NUMBER:    %d\n",id);
														 printf("PHONE NUMBER:   %d\n",phone);
														 printf("CLASS TYPE:     ECONOMY CLASS\n");
														 printf("DEPARTURE TIME:   0800HRS"); }
														   else {
														   	if(payment4 == 4){
															   printf("BOOKING REQUEST WAS CANCELLED");}}}}
															   
															else {
																printf("You cancelled the payment");}}}}}
															  
															   
								else {
									printf("wrong password"); }
														   
							      	
	  return 0 ; }