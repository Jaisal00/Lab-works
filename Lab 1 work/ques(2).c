#include <stdio.h>
#include <conio.h>
struct student
    {
        char name[20];
        int roll;
        float marks;
        char address[20];
    };
void main()
{

    int i,j,n;
    printf("enter number of students\n");
    scanf("%d",&n);
    struct student s[n];
    for (i=0;i<n;i++)
    {
        printf("enter name\n");
        scanf("%s",s[i].name);
        printf("enter roll\n");
        scanf("%d",&s[i].roll);
        printf("enter marks\n");
        scanf("%f",&s[i].marks);
        printf("enter address\n");
        scanf("%s",s[i].address);
    }
    for (j=0;j<n;j++)
    {
        printf("Name:%s \n Roll:%d \n Marks:%f \n Address:%s",s[j].name,s[j].roll,s[j].marks,s[j].address\n\n);
    }
    return 0;
}
