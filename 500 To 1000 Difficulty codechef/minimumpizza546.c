#include<stdio.h>
int main(){
  int t,x,n;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d %d",&x, &n);
    if(((x*n)%4)!=0){
      printf("%d\n",((x*n)/4)+1);
    }
    else{
      printf("%d\n",((x*n)/4));
    }
  }
  return 0;
}