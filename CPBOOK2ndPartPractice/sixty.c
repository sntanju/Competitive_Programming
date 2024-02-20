#include<stdio.h>
#include<limits.h>

int main()
{
    struct student {
        int id;
        char name[40];
        //char name[40];
        //char* name;
    };

    struct student one;
    one.id = 1;
    strcpy(one.name, "Tahmid Rafi");
    //one.name = "Tahmid Rafi";

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
