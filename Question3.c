#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char Text[100] = "Hello World 123! Programming is fun", Vowel[6] = "aeiou";
    int VowelNum=0, ConsonantNum=0, DigitsNum=0, SpacesNum=0, TotalCharacters=0;
    TotalCharacters = strlen(Text);
    for (int i = 0; i < TotalCharacters; i++)
    {
        if (Text[i] >= '1' && Text[i] <= '9')
            DigitsNum++;
        else if (Text[i] == ' ')
            SpacesNum++;
        else if ((tolower(Text[i]) == 'a') || (tolower(Text[i]) == 'e') || (tolower(Text[i]) == 'o') || (tolower(Text[i]) == 'i') || (tolower(Text[i]) == 'u')) VowelNum++;
        else ConsonantNum++;
    }
    printf("Statistics:\n");
    printf("Vowels: %d\nConsonant: %d\nDigits: %d\nSpaces: %d\nTotalCharacter: %d\n",VowelNum,ConsonantNum,DigitsNum,SpacesNum,TotalCharacters);

    return 0;
}