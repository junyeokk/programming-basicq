#include <stdio.h>

int main() {
  int a, b, temp;
  scanf("%d %d", &a, &b);

  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }

  for (int i = a; i <= b; i++) {
    printf("%d ", i);
  }
}