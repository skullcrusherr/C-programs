#include<stdio.h>
struct student{
    int id;
    char name[50];
    float marks[6];
};
int main()
{
    struct student s;
    int i;
    float total=0.0;
    printf("Enter student id and name : \n");
    scanf("%d",&s.id);
    getchar(); // to consume the newline character after id input
    gets(s.name);
    printf("Enter marks in 6 subjects : \n");
    for(i=0;i<6;i++)
    {
        scanf("%f",&s.marks[i]);
        total += s.marks[i];
    }
    printf("\n+-----------------+------------------------------+\n");
    printf("| Student Details |                              |\n");
    printf("+-----------------+------------------------------+\n");
    printf("| ID              | %-28d |\n", s.id);
    printf("| Name            | %-28s |\n", s.name);
    printf("+-----------------+------------------------------+\n");
    printf("| Subject         | Marks                        |\n");
    printf("+-----------------+------------------------------+\n");
    for(i=0;i<6;i++)
    {
        printf("| Subject %-7d | %-28.2f |\n", i + 1, s.marks[i]);
    }
    printf("+-----------------+------------------------------+\n");
    printf("| Total Marks     | %-28.2f |\n", total);
    printf("| Average Marks   | %-28.2f |\n", total/6);
    printf("+-----------------+------------------------------+\n");
    return 0;
}
