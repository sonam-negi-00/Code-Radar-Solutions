#include <stdio.h>
int main(){
    int num;
    int lsb;
    scanf("%d",&num);
    lsb= num & 1;
    if(lsb==1 ){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}