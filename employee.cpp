#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double Salary;
    double bonus;

public:
    Employee() {
        name = "Unknown";
        Salary = 0.0;
        bonus = 0.0;
    }

    Employee(std::string empName, double empSalary, double empBonus) {
        name = empName;
        Salary = empSalary;
        bonus = empBonus;
    }

    double calculateTotalSalary() {
        return Salary + bonus;
    }

    void displayDetails() {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << " Salary: $" << Salary << std::endl;
        std::cout << "Bonus: $" << bonus << std::endl;
        std::cout << "Total Salary: $" << calculateTotalSalary() << std::endl;
        std::cout << "-----------------------" << std::endl;
    }
};

int main() {
    Employee emp1;
    Employee emp2("tanyeshwar singh rana", 55000.0, 4500.0);

    std::cout << "Default Constructor Object:" << std::endl;
    emp1.displayDetails();

    std::cout << "Parameterized Constructor Object:" << std::endl;
    emp2.displayDetails();

    return 0;
}