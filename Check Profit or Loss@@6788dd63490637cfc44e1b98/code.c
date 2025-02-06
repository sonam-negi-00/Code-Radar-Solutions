#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("Loss");
        }
    else if(b>a){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss")
    }
}