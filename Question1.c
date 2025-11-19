#include <stdio.h>
#include <string.h>

int main()
{
    char password[100];
    int valid = 0;

    do
    {
        int hasCapital = 0, hasDigit = 0, hasSpecial = 0;
        char specialChars[] = "!@#$%";
        printf("Enter a strong password: ");
        fgets(password, 100, stdin);
        password[strcspn(password, "\n")] = '\0';
        // Check length
        if (strlen(password) < 8) {
            printf("Password must be at least 8 characters long.\n");
            continue;
        }
        
        for (int i = 0; i < strlen(password); i++) {
            if (password[i] >= 'A' && password[i] <= 'Z')
                hasCapital = 1;
            if (password[i] >= '0' && password[i] <= '9')
                hasDigit = 1;
            if (strchr(specialChars, password[i]) != NULL)
                hasSpecial = 1;
        }
        if (!hasCapital)
            printf("Password must contain at least one uppercase letter.\n");
        else if (!hasDigit)
            printf("Password must contain at least one digit.\n");
        else if (!hasSpecial)
            printf("Password must contain at least one special character [!@#$%].\n");
        else {
            valid = 1;
            printf("Password accepted.\n");
        }

    } while (!valid);

    return 0;
}
