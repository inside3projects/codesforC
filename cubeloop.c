#include<stdio.h>
  int main(){
  	int terms,cube;
  	
	  printf("enter number of terms:");
	  scanf("%d",&terms);
	  
	      for(int i=1;i<=terms;i++){
			   cube=i*i*i;
			   printf("Number is:%d and cube of %d is:%d\n",i,i,cube); }
			   
			   return 0; }