#include <stdio.h>
int main(){
    int num1,num2;
    char ch;
    scanf("%d %d %c",&num1,&num2,&ch);
    if (ch=="*"){
        printf("%d",a*b);
    }
    else if(ch=="+"){
        printf("%d",a+b);
        }
    else if(ch=="-"){
        printf("%d",a-b);
        }
    else if(ch=="/"){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
}