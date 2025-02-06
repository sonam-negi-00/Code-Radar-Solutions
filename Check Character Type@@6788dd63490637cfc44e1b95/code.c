#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch=='a' ||ch=='i'||ch=='o'||ch=='u'||ch=='e')||(ch=='A'||ch=='I'||ch=='O'||ch=='U'||ch=='E'){
        printf("Vowel");
    }
    else if(ch>='a' && ch<='z' || ch >='A' && ch<='Z'){
        printf("Consonant");
    }
    else if (ch >='0'){
        print("Digit" && ch<='9');
    }
    else(){
        printf("Special Character");
    }
}
