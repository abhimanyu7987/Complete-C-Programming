#include <stdio.h>
struct Student
{
    int roll;
    float per;
    char name[100];
};
int main()
{
    struct Student s1;
    printf("Enter Roll number = ");
    scanf("%d", &s1.roll);
    printf("Enter Your Name = ");
    scanf("%s", &s1.name);
    printf("Enter percentage = ");
    scanf("%f", &s1.per);

    printf("Roll = %d\n", s1.roll);
    printf("Name = %s\n", s1.name);
    printf("Percentage = %f\n", s1.per);
    return 0;
}