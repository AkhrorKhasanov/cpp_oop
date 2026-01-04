#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int age, salary;
};

int main()
{
    Employee employee1;

    employee1.name = "john";
    employee1.age = 25;
    employee1.salary = 1000;

    cout << "Employee 1" << endl;
    cout << "Name: " << employee1.name << endl;
    cout << "Age: " << employee1.age << endl;
    cout << "Salary: " << employee1.salary << endl;

    cout << endl;

    Employee employee2;

    employee2.name = "eric";
    employee2.age = 26;
    employee2.salary = 2000;

    cout << "Employee 2" << endl;
    cout << "Name: " << employee2.name << endl;
    cout << "Age: " << employee2.age << endl;
    cout << "Salary: " << employee2.salary << endl;

    cout << endl;

    cout << "Sum of salaries: " << employee1.salary + employee2.salary << endl;

    cout << endl;

    cout << "Sum of ages: " << employee1.age + employee2.age << endl;

    return 0;
}