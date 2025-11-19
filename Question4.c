#include <stdio.h>
#include <string.h>
int main(){
    char Text[100], encrypt[100];
    printf("Enter a Message to encrypt: ");
    fgets(Text,100,stdin);
    for (int i = 0; i < strlen(Text); i++)
    {
        if (Text[i] == ' ') encrypt[i] = ' ';
        else encrypt[i] = Text[i]+3;
    }
    printf("Original: %s\n",Text);
    printf("Encrypted: %s\n",encrypt);
    printf("Decrypted: %s\n",Text);
    return 0;
}