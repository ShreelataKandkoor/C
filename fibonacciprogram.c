#include<stdio.h>
int main(){
  int n1=0, n2=1,n3,num;
  printf("Enter the number");
  scanf("%d\n",&num );
  printing 0 and 1
  printf("%d %d\n", n1,n2);
  for (size_t i = 0; i < num; i++) {
    n3=n1+n2;
    printf("%d\n",n3 );
    n1=n2;
    n2=n3;
  }
}
