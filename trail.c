#include <stdio.h>
int main()
{

  long long int num, i, n, lastDigit;
  int arr[10];
  printf("Enter the number: ");
  scanf("%lld", &num);
  n = num;

  for (i = 0; i < 10; i++)
  {
    arr[i] = 0;
  }
  while (n != NULL)
  {
    lastDigit = n % 10;
    arr[lastDigit]++;
    n = n / 10;
  }
  for (i = 0; i < 10; i++)
  {
    if (arr[i] > 0)
      printf("The frequency of %lld is %d\n", i, arr[i]);
  }
  return 0;
}