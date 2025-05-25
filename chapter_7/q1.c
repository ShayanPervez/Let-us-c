#include<stdio.h>

int main()
{
    int student_class, num_subject;

    // Get input
    printf("Enter the student class (1 for First class, 2 for Second class, 3 for Third class): ");
    scanf("%d", &student_class);

    printf("Enter the number of subjects failed by the student: ");
    scanf("%d", &num_subject);

    // Apply grace rules
    if (student_class == 1)
    {
        if (num_subject <= 3)
            printf("Gets grace of 5 marks per subject\n");
        else
            printf("No grace\n");
    }
    else if (student_class == 2)
    {
        if (num_subject <= 2)
            printf("Gets grace of 4 marks per subject\n");
        else
            printf("No grace\n");
    }
    else if (student_class == 3)
    {
        if (num_subject <= 1)
            printf("Gets grace of 5 marks for 1 subject\n");
        else
            printf("No grace\n");
    }
    else
    {
        printf("Invalid class entered!\n");
    }

    return 0;
}
