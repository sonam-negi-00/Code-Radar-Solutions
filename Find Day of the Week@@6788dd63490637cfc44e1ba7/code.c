#include <stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch(day){
        case1: printf("Sunday \n");break;
        case2: printf("Monday \n");break;
        case3: printf("Tuesday \n"); break;
        case4: printf("Wednusday \n"); break;
        case5: printf("Thursday \n"); break;
        case6: printf("Friday \n"); break;
        case7: printf("Saturday \n"); break;
        default:printf("Invalid");
    }
    return 0;
}
