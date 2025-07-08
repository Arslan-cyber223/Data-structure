#include <stdio.h>
struct student
{
    int roll_no;
    char ch[20];
};
int main()
{
    struct student stud;
    struct student *pt = &stud;
    printf("Enter the name:");
    scanf("%s", &(*pt).ch);
    printf("Enter the roll_no:");
    scanf("%d", &pt->roll_no);
    printf("\nProrgam using structure node");
    printf("\nName:%s \nRoll_no:%d", pt->ch, (*pt).roll_no);
    return 0;
}
