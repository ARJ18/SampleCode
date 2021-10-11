#include<stdio.h>
#include<math.h>
int main()
{   
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    
    default:
        printf("Consonant");
        break;
    }
    return 0;
}