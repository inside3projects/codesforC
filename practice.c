#include <stdio.h>
  int main()
{
   int i,n,sum=0;
   printf("Input Value of terms : ");
   scanf("%d",&n);
   printf("\nthe first %d natural numbers are:\n",n);
      for(i=1;i<=n;i++){
		  printf(" %d ",i);
		  sum=sum+i ;
	  }
      printf("\ntheir sum is %d",sum);
      
   return 0; }
