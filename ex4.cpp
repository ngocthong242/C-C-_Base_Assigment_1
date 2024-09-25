#include <iostream>
#include <string.h>
#define MAX_EMPLOYEE 100
struct Employee
{
    char firstName[100];
    char lastName[100];
    int age;
    char gender[100];
    char personalID[100];
    int employeeNumber;
};
Employee employees[MAX_EMPLOYEE];
int countEmployees = 0;
void addEmployee()
{
    Employee employee;
    if (countEmployees >= MAX_EMPLOYEE)
    {
        std::cout << "Cannot add employee. Maximum number of employees reached." << std::endl;
        return;
    }
    else
    {
        std::cout << "\nAdding employee: " << std::endl;
        std::cin.getline(employee.firstName, 100);
        std::cin.getline(employee.lastName, 100);

        std::cin >> employee.age;

        std::cin.ignore();
        std::cin.getline(employee.gender, 100);
        std::cin.getline(employee.personalID, 100);

        std::cin >> employee.employeeNumber;
        employees[countEmployees] = employee;
        countEmployees++;
    }
}

void displayEmployee()
{
    for (int i = 0; i < countEmployees; i++)
    {
        std::cout << "Employee " << i + 1 << ":" << std::endl;
        std::cout << "First Name: " << employees[i].firstName << std::endl;
        std::cout << "Last Name: " << employees[i].lastName << std::endl;
        std::cout << "Age: " << employees[i].age << std::endl;
        std::cout << "Gender: " << employees[i].gender << std::endl;
        std::cout << "Personal ID: " << employees[i].personalID << std::endl;
        std::cout << "Employee Number: " << employees[i].employeeNumber << std::endl;
        std::cout << std::endl;
    }   
}
int main()
{
    addEmployee();
    displayEmployee();
}