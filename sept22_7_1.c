#include <stdio.h>
int cross(int N);

void main()
    {
       int  n;

    scanf("%d", &n);
    cross(n);
    }

int cross(int N)
{
    int i,j;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N || i==j || j==(N - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
