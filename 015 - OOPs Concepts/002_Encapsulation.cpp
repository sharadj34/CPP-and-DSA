/*

~ What is Encapsulation?
: Wrapping up of data members and functions into a single unit is known as encapsulation. (Data hiding / Information hiding)

~ What is Fully encapsulated class?
: All data members are marked private.

~ Why Encapsulation?
: Security will increase with data hiding.
: IF we want, we can make our class as read-only
: Code reusability
: Unit testing

*/

#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;

    public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student first;
    cout << "ALL GOOD" << endl;
    return 0;
}