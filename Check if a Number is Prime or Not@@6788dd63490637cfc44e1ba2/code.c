#include <stdio.h>
int main(){
    int a , isPrime=1;
    scanf("%d",&a);
    if(a<2){
        isPrime = 0;
    }
    else {
        for (int i=2;i*i<=num;i++){
            if (num%i==0){
                isPrime =0;
                break;
                }
            }
        }
if (isPrime){
    printf("Prime");
}
else{
    printf("Not Prime");
}
}
