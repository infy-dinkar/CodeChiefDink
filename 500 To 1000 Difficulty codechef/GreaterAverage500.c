#include <stdio.h>
int main() {
  int n;
  float a,b,c;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%f %f %f",&a,&b,&c);
    if((a+b)/2>c){
      printf("yes");
    }
    else{
      printf("no");
    }
    
  }
  return 0;
}
  