#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void find(char str[80],char search[10]);
void main()
{
  char str[80], search[10];
  int i;
    scanf("%s",str);
    scanf("%s",search);

    find(str,search);
}
void find(char str[80],char search[10])
{

    int count1 = 0, count2 = 0, i, j, flag;

    while (str[count1] != '\0')
        count1++;
    while (search[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("present");
    else
        printf("not present");


}
