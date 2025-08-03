#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter no:");
    scanf("%d",&n);
    //using while loop 
    /*i=100;
    while(i<=n){
    sum=sum+i;
    i++;
    }
   printf("Addition of %d is %d\n",n,sum);
return 0;
}*/
//using for loop
for(i=100;i<=150;i++){
sum=sum+i;
   printf("Addition of %d to %d\n",n,sum);
}
return 0;
}
