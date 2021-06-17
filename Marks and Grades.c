#include<stdio.h>
int main()
{
    float marks;
    char grades;
    printf("Enter your marks: \n");
    scanf("%f", &marks);
    if(marks >= 85)
    {
        printf("grade A");
    }
    else if(marks >= 70 && marks < 84)
    {
        printf("grade B");
    }
    else if(marks >= 55 && marks < 69)
    {
        printf("grade C");
    }
    else if(marks >= 40 && marks < 54)
    {
        printf("grade D");
    }
    else if(marks < 40)
    {
        printf("grade F");
    }
}
