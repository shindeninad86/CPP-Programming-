#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    float salary;

public:
    Employee(string n, int i, float s)
    {
        name = n;
        id = i;
        salary = s;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    string n;
    int i;
    float s;

    cout << "Enter name: ";
    cin >> n;

    cout << "Enter ID: ";
    cin >> i;

    cout << "Enter salary: ";
    cin >> s;

    Employee e(n, i, s);

    e.display();

    return 0;
}