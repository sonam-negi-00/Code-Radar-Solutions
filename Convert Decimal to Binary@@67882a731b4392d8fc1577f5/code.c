#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i =31;i>=0;i--){
        int bit =(n>>i)&1;
        printf("%d",bit);
    }
    return 0;
}