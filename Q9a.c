#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i;
printf("the sum of no from  1 to %d is : %d\n",n,sum);
return 0;
}