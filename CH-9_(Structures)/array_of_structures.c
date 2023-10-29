#include <stdio.h>
#include <string.h>

struct employee
{

    int code;
    float salary;
    char name[200];
};

int main()
{

    struct employee insta[100];

    insta[0].code = 10;
    insta[0].salary = 10.22;
    strcpy(insta[0].name, "makmba");
    // strcpy(target,"source") = copies the source to target

    insta[1].code = 10;
    insta[1].salary = 10.22;
    strcpy(insta[1].name, "makmba");

    insta[2].code = 20;
    insta[2].salary = 20.22;
    strcpy(insta[2].name, "sjs");

    insta[3].code = 30;
    insta[3].salary = 30.22;
    strcpy(insta[3].name, "kajis");
    printf("Done");

    return 0;
}