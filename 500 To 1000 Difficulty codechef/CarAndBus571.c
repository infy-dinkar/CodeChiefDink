#include<stdio.h>
int main(){
  int t,x,y;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d %d",&x,&y);
    if(x<y){
      printf("BIKE");
    }
    else if(x>y){
      printf("CAR");
    }
    else{
      printf("SAME");
    }
  }
  return 0;
  
}