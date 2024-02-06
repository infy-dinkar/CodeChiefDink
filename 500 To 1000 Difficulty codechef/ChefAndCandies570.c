#include <stdio.h>
int main() {
  int t, l, c, x = 0, d = 0;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d %d", &l, &c);
    if (l > c && (l - c) % 4 != 0) {
      x = ((l - c) / 4) + 1;
      printf("%d\n", x);
    } else if (l > c && (l - c) % 4 == 0) {
      d = (l-c) / 4;
      printf("%d\n", d);
    } else if (l <= c) {
      printf("%d",0);
    }
  }
  return 0;
}
