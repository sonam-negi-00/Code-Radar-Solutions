#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='E'){
        printf("Invalid grade");
    }
    else if ('A'<=ch &&ch<='F'){
        switch(ch){
            case 'A':printf("Excellent");break;
            case 'B':printf("Good");break;
            case 'C':printf("Average");break;        
            case 'D':printf("Below Average");break;
            case 'F':printf("Fail");break;
            
            }
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}