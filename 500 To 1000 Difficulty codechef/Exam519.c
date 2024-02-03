#include<stdio.h>
int main(){
  int t,x,y,z ,k;
  scanf("%d",&t);
  for (int i=0;i<t;i++){
    scanf(" %d %d %d",&x, &y ,&z);
    k=((x*y)*0.5);
    if(k>=z){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
    
  }
  return 0;
}