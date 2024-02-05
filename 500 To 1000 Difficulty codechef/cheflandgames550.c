#include<stdio.h>
int main(){
  int t ,r1,r2,r3,r4;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d %d %d %d",&r1,&r2,&r3,&r4);
    if((r1+r2+r3+r4)==0){
      printf("IN\n");
    }
    else{
      printf("OUT\n");
    }
    
  }
  return 0;
  
}