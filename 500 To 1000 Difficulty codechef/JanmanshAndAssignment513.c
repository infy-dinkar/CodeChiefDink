#include<stdio.h>
int main(){
  int t ,x;
  scanf("%d",&t);
  for(int i=0; i<t;i++){
    scanf("%d",&x);
    if(10-x>=3){
      printf("yes");
    }
    else{
      printf("no");
    }
  }
  return 0;
}