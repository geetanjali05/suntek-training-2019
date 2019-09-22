#include<stdio.h>
int revofnum( int num)
{
int rev=0,n;
while(num!=0)
{
n=num%10;
rev=rev*10+n;
num=num/10;
}
return rev;
}

int main()
{
int reve,num;
printf("enter num");
scanf("%d",&num);
reve=revofnum(num);
printf("%d",reve);
return(0);
}
