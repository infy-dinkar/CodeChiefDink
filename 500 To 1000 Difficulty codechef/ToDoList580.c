#include<stdio.h>
int main(){
  int t1,t2,x,y,z;
  scanf("%d",&t1);
  int count=0;
  for(int i=0;i<t1;i++){
    scanf("%d",&t2);
    for(int j=0;j<t2;j++){
      scanf("%d %d %d",&x,&y,&z);
      if(x>=1000 && y>=1000 && z>=1000){
        count+=3;
        
      }
      else if ((y>=1000 && x>=1000) && (z>=1000 && y>=1000)&&(z>=1000 && x>=1000)){
        count+=2;
        
      }
      else if ((z>=1000 && x<1000 && y<1000)|| (y>=1000 &&x<1000&&z<1000 )||(x>=1000&&y<1000&&z<1000)){
        count++;
        
      }
       printf("%d",count);
    }
  }
 
  return 0;
}
