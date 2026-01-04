#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    double salary;

    Employee(string name, double salary) : name(name), salary(salary)
    {
    }

    string show_name()
    {
        return name;
    }

    double show_salary()
    {
        return salary;
    }

    double increase_salary()
    {
        return 1.1 * salary;
    }
};

int main()
{
    Employee employee("Axror", 1000);

    cout << "Name: " << employee.show_name() << endl;
    cout << "Salary: " << employee.show_salary() << endl;
    cout << "Increased Salary: " << employee.increase_salary() << endl;

    return 0;
}