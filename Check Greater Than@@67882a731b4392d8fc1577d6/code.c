#include <stdio.h>
int main(){
    int a,b;
    printf("Enter values of a and b:");
    scanf("%d %d",&a,&b);
    if (a>b)
      printf(true);
    else
      printf(false);
    return 0;
}