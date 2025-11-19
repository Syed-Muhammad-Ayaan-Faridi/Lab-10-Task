#include <stdio.h>
#include <string.h>
int main(){
    char Name[100][100];
    int Marks[100],HS=0,num,sum=0,Largest = 0,Largeind = 0;
    float averagemarks= 0.0;
    printf("Enter how many student data you want to add: ");
    scanf("%d",&num);
    getchar();
    for (int i = 0; i < num; i++)
    {
        //Take Name of the students as Input
        printf("Enter name of Student %d: ",(i+1));
        fgets(Name[i],sizeof(Name),stdin);
        Name[i][strcspn(Name[i],"\n")] = '\0';
        //Take Numbers of Student as Input
        printf("Enter exam score of the student %d: ",(i+1));
        scanf("%d",&Marks[i]);
        getchar();
        sum += Marks[i];
        if(Marks[i]>Largest){ 
            Largest = Marks[i];
            Largeind = i;
        }
    }
    averagemarks = sum/num;

    printf("<-------------Student Marks------------->");
    printf("\nName                              Marks\n");
    printf("----------------------------------------\n");
    for (int k = 0; k< num; k++)
    {
        printf("%s",Name[k]);
        for (int j = 0; j < 30; j++) printf(" ");
        printf("%d\n",Marks[k]);
    }
    
    printf("Highest scorer: %s with %d marks.\n",Name[Largeind],Marks[Largeind]);
    printf("Average marks: %.2f\n",averagemarks);
    
    return 0;
}