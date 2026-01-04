#include <iostream>
#include <cctype>
using namespace std;

class Student
{
public:
    string name, surname;

    string give_first_letters()
    {
        string res = "";
        res += help_me(name);
        res += '.';
        res += help_me(surname);
        res += '.';

        return res;
    }

    char help_me(string s)
    {
        return toupper(s[0]);
    }
};

int main()
{
    Student student;

    student.name = "Axror";
    student.surname = "Hasanov";

    cout << student.give_first_letters() << endl;

    return 0;
}