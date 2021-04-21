#include<stdio.h>
   int main(){
	   int number,id,amount,proceed,phone;
	   char name[20],second[20],surname[20];

	   
	   printf("CLASS NUMBER         CLASS TYPE      CHARGES\n");
	   printf("1                   FIRST CLASS      ksh1500\n");
	   printf("2                   ECONOMY CLASS    ksh700\n");
	   printf("ENTER CLASS NUMBER:");
	   scanf("%d",&number);
	   
	    //first class booking section
      if(number == 1){
			 	printf("ENTER YOUR NAMES:");
			 	scanf("%s %s %s",&name,&second,&surname);
			 	printf("ABOVE 18 SHOULD PROVIDE A VALID ID NUMBER.BELOW 18 SHOULD ENTER ID OF PARENT\n");
			 	printf("ENTER YOUR ID NUMBER:");
			 	scanf("%d",&id);
			 	printf("ENTER YOUR PHONE NUMBER");
			 	scanf("%d",&phone);
			 	printf("ENTER AMOUNT:");
			 	scanf("%d",&amount);
			 	  
				   {
				   	if(amount == 1500){
		 	    
		 	    printf("NAMES:     %s %s %s\n",name,second,surname);
		 	    printf("ID NUMBER:      %d\n",id);
		 	    printf("PHONE NUMBER:    %d\n",phone);
		 	    printf("AMOUNT PAID:     %d\n",amount);
		 	    printf("CLASS TYPE:     FIRST CLASS\n");
				printf("YOU WERE SERVED BY:    EZRA BWONDA OGENDI"); }
		 	    
                     else 
						 if(amount < 1500){
							 printf("AMOUNT PAID IS LESS THAN REQUIRED\n");
							 printf("Please proceed to book economy class press 4 to proceed or 5 to cancel");
							 scanf("%d",&proceed);
							 {
                                if(proceed == 4){
									printf("ENTER YOUR NAMES:");
			 	                    scanf("%s %s %s",&name,&second,&surname);
                                    printf("ABOVE 18 SHOULD PROVIDE A VALID ID NUMBER.BELOW 18 SHOULD ENTER ID OF PARENT\n");
			                    	printf("ENTER YOUR ID NUMBER:");
			                     	scanf("%d",&id);
			                     	printf("ENTER YOUR PHONE NUMBER");
			 	                    scanf("%d",&phone);
			 	                    printf("ENTER AMOUNT:");
			 	                    scanf("%d",&amount); 
			 	                    
			 	                    printf("NAMES:     %s %s %s\n",name,second,surname);
			 	                    printf("ID NUMBER:     %d\n",id);
			 	                    printf("AMOUNT:      %d\n",amount);
			 	                    printf("PHONE NUMBER:    %d\n",phone);
			 	                    printf("CLASS TYPE:   ECONOMY CLASS\n");
									printf("YOU WERE SERVED BY:  EZRA BWONDA OGENDI"); }
			 	                      else 
									   {
									   	if(proceed == 5){
									   		printf("BOOKING CANCELLED SUCCESFULLY"); }}
									   }}}}
			 	                          
		 //economy class booking section	    
     if(number == 2){
		 	
		 		printf("ENTER YOUR NAMES:");
			 	scanf("%s %s %s",&name,&second,&surname);
			 	printf("ABOVE 18 SHOULD PROVIDE A VALID ID NUMBER.BELOW 18 SHOULD ENTER ID OF PARENT\n");
			 	printf("ENTER YOUR ID NUMBER:");
			 	scanf("%d",&id);
			 	printf("ENTER YOUR PHONE NUMBER");
			 	scanf("%d",&phone);
			 	printf("ENTER AMOUNT:");
			 	scanf("%d",&amount);
			 	
				 {
				 	if(amount == 700){
						     	
		 	    printf("NAMES:     %s %s %s\n",name,second,surname);
		 	    printf("ID NUMBER:      %d\n",id);
		 	    printf("PHONE NUMBER:    %d\n",phone);
		 	    printf("AMOUNT PAID:     %d\n",amount);
		 	    printf("CLASS TYPE:     ECONOMY CLASS");
				printf("YOU WERE SERVED BY:    EZRA BWONDA OGENDI"); }
		 	    
		 	         else if 
		 	         	(amount < 700){
							  printf("AMOUNT PAID IS LESS"); }
							  
							   else {
							  printf("PLEASE PAY THE EXACT AMOUNT"); }}}
	
	   return 0 ;
   }