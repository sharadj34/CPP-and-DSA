#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favchar;
    float salary;
} emp;


int main() {
    emp sharad;
    sharad.eId = 45;
    sharad.favchar = 'S';
    sharad.salary = 57438732;

    cout << "The employee's Employee ID is: " << sharad.eId << endl;
    cout << "The employee's favourite character is : " << sharad.favchar << endl;
    cout << "The employee's salary is : " << sharad.salary << endl;
    return 0;
}