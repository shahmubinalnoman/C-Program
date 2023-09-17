#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, t, avarage;
    printf("Enter the five numbers: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    t = s1 + s2 + s3 + s4 + s5;
  //  goto avarage;
    avarage = t / 5;
// avarage:
    printf("The sum of five numbers is %d\n", t);
    printf("The avarage number is %d", avarage);
    return 0;
}