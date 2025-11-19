#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0,numchar;
    char email[100] = "ayaan@gmail.com" ,domain[100] = " ";
    numchar = strlen(email);
    printf("%d\n",numchar);
    for (int j = 0; j < numchar; j++)
    {
        if (email[j] == '@')
        {
            i = j;
            break;
        }
    }
    printf("Domain is: ",domain);
    for (i; i < strlen(email); i++)
    {
        printf("%c",email[i]);
    }
    
    
    
    

    return 0;
}