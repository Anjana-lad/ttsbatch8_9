//switch case statements:
// switch (expression/choice)
// {
// case number:
//     executable part.
//     break;
// case number:
 //     executable part.
 //     break;
// default:
//     break;
// }

// to check whether a given character is vowel or not.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
    case 'a':
         printf("A is vowel.");
        break;
    case 'E':
    case 'e':
        printf("E is Vowel");
        break;
    case 'I':
        case 'i':
        printf("I is a vowel.");
        break;
    case 'O':
        case 'o':
    printf("O is a vowel");
    break;
    case 'U':
        case 'u':
        printf("U is a vowel");
        break;
    default:
    printf("It is a consonant");
        break;
    }
}
