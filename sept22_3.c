#include <stdio.h>
#include <string.h>

struct student
{
            int id;
            char name[20];

};

void structurefunc(struct student record);

int main()
{
            struct student geetanjali;

        geetanjali.id=1;
            strcpy(geetanjali.name, "geetanjali");

            structurefunc(geetanjali);
            return 0;
}

void func(struct student geetanjali)
{
            printf(" Id is: %d \n", geetanjali.id);
            printf(" Name is: %s \n", geetanjali.name);

        }
