#include<stdio.h>
int  occurnce(array,size,number)
{
    int i;
    for(i=0;i<size;i++)
{
if(a[i]==num)
count++;
}
if(count!=0)
printf("number %d has occured %d times",n1,count);
else
printf("no element fount");
return '1'- 48;
}
int main()
{
int i,a[10],count=0,n1,n;
printf("enter the size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter element to search");
scanf("%d",&n1);
occurnce(a,n,n1);
}


