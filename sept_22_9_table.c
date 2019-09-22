/* Print Table for N*/
#include <stdio.h>
int printtable(int n);
int main() {
	int n;
	scanf("%d",&n);
	printtable(n);
		return 0;
}

int printtable(int n)
{
    for(int i=1;i<11;i++)
    printf("%d * %d = %d\n",n,i,(n*i));
}
