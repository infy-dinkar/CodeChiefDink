#include<stdio.h>
int main(){
  int t;
  int n,x;
 
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    scanf("%d %d",&n,&x);
    if(n==6||n<6 && n>0){
      printf("%d\n",x);
      continue;
      
    }
    if(n%6==0){
      printf("%d\n",(n/6)*x);
    }
    if (n%6!=0){
      printf("%d\n",((n/6)+1)*x);
    }
      }
  return 0;
}
