#include<stdio.h>
int main(){

  int n,r,sum=0,m;
  printf("Enter the number:");
  scanf("%d",&n);

  while(n>0){

    m=n%10;
    sum =sum+m;
    n=n/10;
  }

  printf("Sum is=%d",sum );
  return 0;
  }
