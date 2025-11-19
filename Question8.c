#include <stdio.h>
#include <string.h>
int main()
{
    //Setting up Arrays
    char Categories[4][20] = {{"Appetizers"}, {"Main Course"}, {"Desserts"}},
        menu[100][100] = {
            {"Nuggets"}, {"Fries"}, {"Corn Soup"}, 
            {"Handi"}, {"Karahi "}, {"Biryani"}, 
            {"Ice Cream"}, {"Lolipop"}, {"Rabri"}
        };
    int Price[10] = {10, 12, 20, 50, 40, 35, 8, 5, 9}, j = 1;
    //Printing Menus
    printf("<-----------------Menu----------------->\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", Categories[i]);
        printf("-----------------\n");
        printf("%s", menu[j - 1]);
        printf("        ");
        printf("%d\n", Price[j - 1]);
        for (; (j % 3) != 0; j++)
        {
            printf("%s", menu[j]);
            printf("        ");
            printf("%d\n", Price[j]);
        }
        j++;
        printf("-----------------\n");
    }
    //Searching and providing budget friendly options
    int ind = 0;
    printf("Presenting our budget friendly options: \n");
    for (int r = 0; r < 9; r++)
    {
        if (Price[r] <= 10)
        {
            if (r < 3)
            {   
                printf("%d. %s available: ",ind+1, Categories[0]);
                printf("%s for $%d\n",menu[ind],Price[ind]);
            }
            else if ((r >= 3) && (r < 6))
            {   
                printf("%d. %s available: ",ind+1, Categories[1]);
                printf("%s for $%d\n",menu[r],Price[r]);
            }
            else if ((r >= 6) && (r < 9))
            {   
                printf("%d. %s available: ",ind+1, Categories[2]);
                printf("%s for $%d\n",menu[r],Price[r]);
            }
            ind++;
        }
    }
    return 0;
}