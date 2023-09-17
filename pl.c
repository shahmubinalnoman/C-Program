#include <stdio.h>
int main()
{

    int cp, sp, p, l;
    printf("Drop down your cost and selling price here: ");
    scanf("%d%d", &cp, &sp);
    p = sp - cp;
    l = cp - sp;

    if (cp == sp)
    {
        printf("There has no profit or loss.");
    }
    else if (cp > sp)
    {
        printf("You have loosed %d Taka.", l, l);
    }
    else
    {
        printf("You have profited %d Taka.", p, p);
    }
    return 0;
}