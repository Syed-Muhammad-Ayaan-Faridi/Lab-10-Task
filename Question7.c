#include <stdio.h>
#include <string.h>
int main(){
    char Names[100][100], Courses[100][300];
    int studentnum,overloadedind[100],Overload = 0,isPhysics[100],Phy = 0;
    printf("Enter the number of students to store: ");
    scanf("%d",&studentnum);
    getchar();
    //Take input to store names and courses of a student
    for (int i = 0; i < studentnum; i++)
    {
        printf("Enter your Name: ");
        fgets(Names[i],sizeof(Names),stdin);
        Names[i][strcspn(Names[i],"\n")]='\0';
        printf("Enter your Course Names (separated with ','): ");
        fgets(Courses[i],sizeof(Courses),stdin);
        Courses[i][strcspn(Courses[i],"\n")]='\0';
    }
    // Check for Overloaded Student and students having Physics
    for (int j = 0; j < studentnum; j++)
    {
        int commaNum = 0;
        if (strstr(Courses[j],"Physics")!=NULL)
        {
            isPhysics[Phy] = j;
            Phy++;
        }
        for (int k = 0; k < strlen(Courses[j]); k++)
        {
            if (Courses[j][k] == ',') commaNum++;
        }
        if (commaNum > 2)
        {
            overloadedind[Overload] = j;
            Overload++;
        }
    }
    
    //Printing
    printf("\n");
    for (int index = 0; index < studentnum; index++)
    {
        printf("Student Name: %s\n",Names[index]);
        printf("Courses opted by %s are %s\n",Names[index],Courses[index]);
    }
    
    printf("\nStudents taking Physics: ");
    for (int z = 0; z < Phy; z++)
    {
        printf("%s",Names[isPhysics[z]]);
    }
    printf("\nStudents who have overloaded Courses: ");
    for (int z = 0; z < Overload; z++)
    {
        printf("%s\n",Names[overloadedind[z]]);
    }
    
    
    return 0;
}