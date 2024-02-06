#include <stdio.h>
int main() {
  int n, c;
  int profit = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &c);
    profit =
        (50 * c) - (((50 * c) * 0.2) + ((50 * c) * 0.2) + ((50 * c) * 0.3));
    printf("%d\n", profit);
  }
}