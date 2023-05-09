#include <stdio.h>
#include <string.h>

struct Employee {
    char name[100];
    float salary;
    float bonus;
    float net_salary;
};

int main() {
    int num_employees;
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    struct Employee employees[num_employees];

    for (int i = 0; i < num_employees; i++) {
        printf("\nEnter name of employee %d: ", i+1);
        scanf("%s", employees[i].name);
        printf("Enter salary of employee %d: ", i+1);
        scanf("%f", &employees[i].salary);

        if (employees[i].salary <= 1000) {
            employees[i].bonus = employees[i].salary * 0.2;
            employees[i].net_salary = employees[i].salary + employees[i].bonus;
        } else if (employees[i].salary > 1000 && employees[i].salary <= 2000) {
            employees[i].bonus = employees[i].salary * 0.1;
            employees[i].net_salary = employees[i].salary + employees[i].bonus;
        } else {
            employees[i].bonus = 0;
            employees[i].net_salary = employees[i].salary * 0.9;
        }
    }

    printf("\n\nEmployee Details\n\n");
    for (int i = 0; i < num_employees; i++) {
        printf("Employee.....: %s\n", employees[i].name);
        printf("Salary.......: %.2f\n", employees[i].salary);
        if(employees[i].salary > 2000){
            printf("Discount........: %.2f\n", employees[i].salary * 0.1);
            printf("Liquid Salary: %.2f", employees[i].net_salary);
            printf("\n\n");
        }else{
            printf("Bonus........: %.2f\n", employees[i].bonus);
            printf("Liquid Salary: %.2f", employees[i].net_salary);
            printf("\n\n");

        }
    }

    return 0;
}
