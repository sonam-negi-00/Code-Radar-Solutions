#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch=='a' ||ch=='i'||ch=='o'||ch=='u'||ch=='e'){
        printf("%c",ch);
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
