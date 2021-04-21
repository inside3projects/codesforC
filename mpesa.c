#include<stdio.h>
  int main(){
  	  int code,option,option2;
      
  	  printf("CODE            FUNCTIONS \n");
  	  printf("1.*544#           BUY BUNDLES \n");
  	  printf("2.*131#           OKOA CREDIT  \n");
  	  
  	  printf("enter code:");
  	  scanf("%d",&code);
  	  
			if(code == 1){
				printf("1.DATA BUNDLES (NO EXPIRY)\n");
				printf("2.Calls & SMS (NO EXPIRY) \n");
				printf("3.Data Bundle WITH EXPIRY\n");
				printf("enter option:");
				scanf("%d",&option); 
				 
				 {
				 	if(option == 1){
				 		printf("1.Buy For My Number\n");
				 		printf("2.Buy For Another Number\n");
				 		printf("3.Okoa Data\n");
						printf("enter option:");
						scanf("%d",&option2); 
						{
						  	if(option2 == 1){
						   		int accept,amount,accept2,accept3,bundle3,bundle1;
								   printf("enter amount:");
								   scanf("%d",&amount);
								   {
								   	if(amount <= 10){
										   bundle1=amount * 2;
										   printf("confirm purchase of %d MB\n",bundle1);
										   printf("1.Accept\n");
										   printf("2.Cancel\n");
										   scanf("%d",&accept);
										   {
										   	if(accept == 1){
												   printf("You have succesfully purchased %d MB",bundle1);}
												   else {
													   printf("You have cancelled the transcations");}}}
													  	
												      	else if
												      		(amount > 10 && amount <= 50){
																  float bundle2=amount * 3.5;
																   printf("confirm purchase of %.1f MB\n",bundle2);
										                           printf("1.Accept\n");
										                           printf("2.Cancel\n");
										                           scanf("%d",&accept2);
										                           {
                                                             if(accept2 == 1){
                                                                printf("You have succesfully purchased %.1f MB",bundle2);}
                                                                  else {
																	  printf("You have cancelled the transcations");}}}

												       else{
														  if(amount > 50){
								     						bundle3=amount * 5;
																	printf("confirm  purchase of %d MB\n",bundle3);
																	printf("1.Accept\n");
																	printf("2.Cancel\n");
																	scanf("%d",&accept3);
																	{
                                                        if(accept3 == 1){
															printf("You have succesfully purchased %d MB",bundle3);}
															  else {
																  printf("You have cancelled the transcation");}}}}}}
															  
                                                         
                        else if 
                        	(option2 == 2){
                        		int amount2,accept4,accept5,accept6;
                        		long int other;
                        		
							   printf("enter other number:");
							   scanf("%ld",&other);
							   printf("enter amount:");
							   scanf("%d",&amount2);
							   	 {
								   	if(amount2 <= 10){
										   int bundle4=amount2 * 2;
										   printf("confirm purchase of %d MB for %ld\n",bundle4,other);
										   printf("1.Accept");
										   printf("2.Cancel\n");
										   scanf("%d",&accept4);
										   {
										   	if(accept4 == 1){
												   printf("You have succesfully purchased %d MB for %ld.",bundle4,other);}
												      else {
												      	printf("You have cancelled the transcation"); }}}
												      	
												      	else if
												      		(amount2 > 10 && amount2 <= 50){
																  float bundle5=amount2 * 3.5;
																   printf("confirm purchase of %.1f MB for %ld\n",bundle5,other);
										                           printf("1.Accept\n");
										                           printf("2.Cancel\n");
										                           scanf("%d",&accept5);
										   {
										   	if(accept5 == 1){
												   printf("You have succesfully purchased %.1f MB for %ld.",bundle5,other);}
												      else {
												      	printf("You have cancelled the transcation");}}}
							      	  
							      	  				  else {
                                                         if(amount2 > 50){
															 int bundle6=amount2 * 5;
															 printf("confirm purchase of %d MB for %ld",bundle6,other);
															 printf("1.Accept\n");
															 printf("2.Cancel\n");
															 scanf("%d",&accept6);
															 {
															 	if(accept6 == 1){
																	 printf("You have successfully purchased %d MB for %ld",bundle6,other);}
																	 else {
																		 printf("You have cancelled the transcation");}}}}}}
  
                                                         
                          else if
                          	 (option2 == 3){
                          	 	int okoa;
                          	 	printf("1.Okoa 63MB for sh20\n");
                          	 	printf("2.Okoa 40MB for sh18\n");
                          	 	printf("3.Okoa 10MB for sh5\n");
                          	 	printf("enter option:");
                          	 	scanf("%d",&okoa);
                          	 	{
                                  if(okoa == 1){
									  printf("Thanks for Purchasing 63MB.Okoa Outstanding balance is sh20");}
									    else if 
									    	(okoa == 2){
												printf("Thanks for Purchasing 40MB.OKoa Outstading balance is sh18");}
												else if
													(okoa == 3){
														printf("Thanks for Purchasing 10MB.Okoa Outstanding balance is sh5");}
														else {
															printf("Invalid Entry");}}}
																							
								 
                 else if
                 	(option == 2){
                 	  int choice,amount3;
					 	printf("1.Buy For My Number\n");
                 		printf("2.Buy For Other Number\n");
                 		printf("enter choice:");
                 		scanf("%d",&choice);
						 {
						 	if(choice == 1){
						 		int accept7;
								 printf("enter amount:");
								 scanf("%d",&amount3);
								 int airtime=amount3 + (amount3 * 0.5);
						         printf("Confirm purchase of sh%d Calls & SMS Airtime Bundle\n",airtime);
						         printf("press 1 to accept or 2 to cancel:");
						         scanf("%d",&accept7);
						         {
								 	if(accept7 == 1){
										 printf("You have succesfully bought sh%d Calls & SMS Airtime.",airtime);}
										  else {
											  printf("You have cancelled the transcation");}}}
														   
                                    else{
								        if(choice == 2){
								        	int accept8,amount4;
								        	long int other2;
								        	
											printf("enter other number:");
											scanf("%ld",&other2);
											printf("enter amount:");
											scanf("%d",&amount4);
											int airtime2=amount4 + (amount4 * 0.5);
											printf("confirm purchase of sh%d Calls & SMS Bundle for %ld.\n",airtime2,other2);
											printf("press 1 to confirm or 2 to cancel:");
											scanf("%d",&accept8);
											{
												if(accept8 == 1){
													printf("You have bought sh%d Calls & SMS Bundle for %ld",airtime2,other2);}
													 else {
														 printf("You have cancelled the subscription");}}}}}}
														 
                    else {
						if(option == 3){
							int choice2;
							printf("0.SPECIAL DATA DEALS\n");
							printf("1.All In One Bundle\n");
							printf("2.Daily Bundle\n");
							printf("3.7 Day Bundle\n");
							printf("4.30 Day Bundle\n");
							printf("5.Giga Bundle\n");
							printf("enter choice:");
							scanf("%d",&choice2);
							{
							  if(choice2 == 0){
							  	int offer;
							 	printf("0.Get Your Free 500MB\n");
								printf("1.sh20(250MB valid for 24hours)\n");
								printf("2.sh20(1GB valid I hour)\n");
								scanf("%d",&offer); 
								{
								  if(offer == 0){
								  	int accept9;
									  printf("Buy 325MB for sh65 and FREE 500MB EXPIRY TILL MIDNIGHT\n");
									  printf("press 1 to accept or 2 to cancel:");
									  scanf("%d",&accept9);
									  {
									  	if(accept9 == 1){
											  printf("You have successfully purchased 325MB for sh65 and FREE 500MB EXPIRY TILL MIDNIGHT");}
											  else {
												  printf("You have cancelled the transcation");}}}
												  
									   else if 			  
											(offer == 1){
												int accept10;
												printf("confirm purchase of 250MB VALID TILL MIDNIGHT\n");
												printf("press 1 to accept or 2 to cancel:");
												scanf("%d",&accept10);
												{
												  if(accept10 == 1){
													  printf("You have purchased 250MB VALID FOR 24 HOURS");}
													   else {
														 printf("You have cancelled the transcation");}}}
									   
									  else {
										  if(offer == 2){
											  int accept11;
											  printf("Confirm Purchase of 1GB VALID 1  HOUR\n");
											  printf("press 1 to accept or 2 to cancel:");
											  scanf("%d",&accept11);
											  {
											  	if(accept11 == 1){
													 printf("You have succesfully purchased IGB VALID 1 HOUR");}
													   else {
														   printf("You have cancelled the transcation");}}}}}}
														   
                        		 												   
				 
              else {
				  if(code == 2){
				  	int accept12;
					  printf("1.Okoa 20\n");
					  printf("2.Okoa 10\n");
					  printf("3.Okoa 5\n");
					  printf("enter option:");
					  scanf("%d",&accept12);
					  {
                        if(accept12 == 1){
							printf("You  have an outstanding Okoa balance of sh20");}
						       else if
								   (accept12 == 2){
									   printf("You  have an outstanding Okoa balance of sh10"); }
									   else {
										   if(accept12 == 3){
											   printf("You have an outstanding Okoa balance of sh5");}}}}}
									
								 return 0;}
							 								
  	  
  
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  						
						  	   
								 
								 
								 
								 
								 
								 
								 
								 
								 	   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   
  							   