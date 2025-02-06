#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch=='a' ||ch=='i'||ch=='o'||ch=='u'||ch=='e')||(ch=='A'||ch=='I'||ch=='O'||ch=='U'||ch=='E'){
        printf("Vowel");
    }
    else if('a'<=ch<='z' || 'A'<=ch<='Z'){
        printf("Consonant");
    }
    else if ('0'<=ch<='9'){
        print("Digit");
    }
    else(){
        printf("Special Character");
    }
}
