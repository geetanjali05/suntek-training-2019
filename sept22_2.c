#include<stdio.h>
void occofall(aray,size)
{
    int i,j,count;
    for(i=0;i<size;i++)
{
    count=0;
for(j=i;j<size;j++)
{
if(aray[i]==aray[j])
count++;
}
if(size!=0)
printf("element %d has occured %d times\n",a[i],count);
}

}
int main()
{
int i,n,n1,j,a[10],count;
printf("enetr n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(n!=0)
occofall(a,n);
else
return '1'-48;

}
