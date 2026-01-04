#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    string show_name()
    {
        return name;
    }

    int show_salary()
    {
        return salary;
    }
};

int main()
{
    Employee employee;

    employee.name = "Axror";
    employee.salary = 1000;

    cout << "Name: " << employee.show_name() << endl;
    cout << "Age: " << employee.show_salary() << endl;

    return 0;
}