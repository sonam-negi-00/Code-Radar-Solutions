#include <stdio.h>
int main(){
    int temp;
    scanf("%d",&temp);
    if (temp<0){
        printf("Freezing");
    }
    else(temp>0){
        printf("Not Freezing");
    }
    return 0;
}
