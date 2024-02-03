#include<stdio.h>
int main(){
  int t,x,y,k;
  scanf("%d",&t);
  for(int i=0; i<t; i++){
    scanf("%d %d",&x,&y);
    k=(4*x)+y;
    printf("%d\n",k);
    
  }
  return 0;
}