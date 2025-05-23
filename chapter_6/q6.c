#include<stdio.h>

int main()
{
    int year=1;
    double increament, population=100000;
    while(year<=10)
    {
        increament = (10.0/100)* population;
        population += increament;

        printf("Population has increased by %lf in %d year. \n", population, year); 
        year++;
    }
}