#include<stdio.h>
int main(){
  int i=1,fact=1,num;
  scanf("%d",&num);
  while(i<=num){
      fact=fact*i;
      i++;
  }
 printf("%d",fact);
  return 0;
}
