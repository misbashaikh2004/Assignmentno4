#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter no:");
    scanf("%d",&n);
    i=1;
    while(i<=5){
    sum=sum+i;
    i++;
    }
   printf("Addition of %d is %d\n",n,sum);
return 0;
}
