#include <stdio.h>
int main(){
    int num;
    int lsb;
    lsb= num & 1;
    scanf("%d",&num);
    if(lsb==1 ){
        printf("Set");
    }
    else{
        printf("Not Set")
    }
}