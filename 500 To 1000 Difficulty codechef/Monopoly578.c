#include<stdio.h>
int main(){
  int t ,a,b,c,d;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf(" %d %d %d %d ",&a, &b, &c, &d);
    if( (a+b+c)<d || (b+c+d)<a || (c+d+a)<b || (d+a+b)<c){
      printf("yes\n");
    }
    else{
      printf("NO");
    }
  }
  return 0;
}