#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    float product=(a+b+c)/3.0;
    printf("Average: %.2f",product);
    return 0;
}