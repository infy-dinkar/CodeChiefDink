#include<stdio.h>
int main(){
  int t,x,y,a,b;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d %d",&x,&y);
    scanf("%d %d",&a,&b);
    if(x<=a && y<=b){
      printf("POSSIBLE\n");
    }
      
    else{
      printf("IMPOSSIBLE");
    }
  }
  return 0;
}