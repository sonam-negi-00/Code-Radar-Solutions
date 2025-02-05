#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (a<=ch<=z){
        printf("Lowercase");
    }
    else if(A<=ch<=Z){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
