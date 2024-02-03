#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int count1 = 0, count2 = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0) {
      count1++;
    } else {
      count2++;
    }
  }
  if (count1 > count2) {
    printf("READY FOR BATTLE\n");
  }

  else {
    printf("NOT READY\n");
  }

  return 0;
}