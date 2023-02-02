#include <stdio.h>
// function defination 
int tablePrint(int x) {
  for(int i = 1; i <= 10; i++) {
    printf("%d x %d = %d \n",x,i, i*x);
  }
}

int main(void) {
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  // function calling
  int result = tablePrint(num);
  return 0;
}