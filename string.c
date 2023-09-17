#include <stdio.h>
#include <string.h>
struct EMP
{
    int EID;
    char EN[20];
    float ES;
};

int main()
{
    struct EMP e;
    e.EID = 10;
    strcpy(e.EN, "Noman");
    e.ES = 100000.5;
    printf("Emp ID %d\n", e.EID);
    printf("Emp name %s\n", e.EN);
    printf("Emp ID %f\n", e.ES);

    return 0;
}