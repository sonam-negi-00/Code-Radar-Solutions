#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch=='a' ||ch=='i'||ch=='o'||ch=='u'||ch=='e' ||ch=='A'||ch=='I'||ch=='O'||ch=='U'||ch=='E'){
        printf("Vowel \n");
    }
    else if(ch>='a' && ch<='z' || ch >='A' && ch<='Z'){
        printf("Consonant \n");
    }
    else if (ch >='0'&& ch<='9'){
        printf("Digit \n" );
    }
    else{
        printf("Special Character \n");
    }
}
