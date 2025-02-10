#include <stdio.h>
int main(){
    int num;
    int bits;
    int msb;
    scanf("%lld",&num);
    bits=sizeof(num)*8;
    msb = (num>>(n=bits - 1)) & 1;
    if (msb==1){
        printf("Set");

    }
    else{
        printf("Not Set");
    }
}