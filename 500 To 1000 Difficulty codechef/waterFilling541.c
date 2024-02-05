#include <stdio.h>
int main() {
  int t, b1, b2, b3;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d %d %d", &b1, &b2, &b3);
    if ((b1 + b2 + b3) <= 1) {
      printf("Water filling time\n");
    } else {
      printf("Not now\n");
    }
  }
  return 0;
}