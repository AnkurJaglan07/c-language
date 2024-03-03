#include <stdio.h>
int main()
{
    int age;
    float salary, bonus;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your salary: ");
    scanf("%f", &salary);
    if (salary >= 15000)
    {
        bonus = 0.05 * salary;
    }
    else if (salary < 15000 && age >= 32)
    {
        bonus = 0.03 * salary;
    }
    else if (salary < 15000 && age < 32)
    {
        bonus = 0.02 * salary;
    }
    printf("Bonus: %f\n", bonus);
    return 0;
}
