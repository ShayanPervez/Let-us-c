#include<stdio.h>

int main()
{
    float hardness=50, carbon_content = 0.7, tensile_strength = 5600, h, c, t;
    printf("Enter the value of hardness of steel: ");
    scanf("%f", &h);
    printf("Enter the value of carbon content in steel: ");
    scanf("%f", &c);
    printf("Enter the value of tensile strength of steel: ");
    scanf("%f", &t);

    if (h == hardness && c== carbon_content && t == tensile_strength)
    {
        printf("Grade 10");
    }
    else if (h == hardness && c == carbon_content && t!= tensile_strength)
    {
        printf("Grade 9");
    }
    else if (h != hardness && c == carbon_content && t== tensile_strength)
    {
        printf("Grade 8");
    }
    else if(h == hardness && c != carbon_content && t== tensile_strength)
    {
        printf("Grade 7");
    }
    else if(h == hardness || c== carbon_content || t == tensile_strength)
    {
        printf("Grade 6");
    }
    else
    {
        printf("Grade 5");
    }
    

    
}