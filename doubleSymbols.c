#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n % 2 != 0) {
    printf("Wrong input\n");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      printf("*");
    } else {
      printf("+");
    }
  }
  printf("\n");

  return 0;
}
