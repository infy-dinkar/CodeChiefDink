#include<stdio.h>
int main(){
  int t,a,b,x,y;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d %d %d %d", &a,&b,&x,&y);
    if(a*b<=x*y){
      printf("YES");
    }
    else{
      printf("NO");
    }
  }
  return 0;
}