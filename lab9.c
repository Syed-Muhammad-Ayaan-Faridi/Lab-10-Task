#include <stdio.h>
#include <string.h>
int main(){
char word[4][10] = {"Apple","Grapes","Kiwi","Orange"};
int i;
strcpy(word[1],"Mango");
for (i = 0; i < 4; i++)
{
    puts(word[i]);
    for (int j = 0; j < strlen(word[i]); j++)
    {
        printf("%c\n",word[i][j]);
    }
}
}