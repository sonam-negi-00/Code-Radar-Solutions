#include <stdio.h>
int main(){
    int month_no;
    scanf("%d",&month_no);
    switch (month_no){
        case 1: case 3 :case 5 :case 7 :case 8 :case 10:case 12:printf("%d \n",31);break;
         case 4 : case 6:case 9 :case 11 :printf("%d \n",30);break;
        case 2:printf("%d \n",28);break;
        default: printf("Invalid month \n");

    }
    return 0;
}