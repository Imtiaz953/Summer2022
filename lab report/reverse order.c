
#include <stdio.h>

int main() {

  int n, reverse = 0, remainder,sum;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d\n", reverse);
 // printf("The sum of its number is : %d",sum);

  return 0;
}
