/*

~ What is Inheritance?
: The mechanism of deriving a new class from an old class is known as Inheritance.
: The old class is referred to as the base class and the derived class is known as the sub class.
: The derived class inherits some or all of the behaviour from base class.
: A class can also inherit property from more than one class or more than one level.

*/

#include <iostream>
using namespace std;

class Human{

    public:
        int height;
        int weight;
        int age;

    public: 
        int getAge()
        {
            return this->age;
        }

        void setWeight(int w)
        {
            this->weight = w;
        }
};

class Male: public Human{
    public:
        string color;

    void sleep()
    {
        cout << "MALE SLEEPING" << endl;
    }
};

int main()
{
    Male object1;
    cout << object1.age << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.color << endl;

    object1.setWeight(53);
    cout << object1.weight << endl;
    object1.sleep();
    return 0;
}