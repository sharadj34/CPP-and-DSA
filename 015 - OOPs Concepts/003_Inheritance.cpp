/*

~ What is Inheritance?
: The mechanism of deriving a new class from an old class is known as Inheritance.
: The old class is referred to as the base class and the derived class is known as the sub class.
: The derived class inherits some or all of the behaviour from base class.
: A class can also inherit property from more than one class or more than one level.

~ Types of Inheritance?
: Single Inheritance
: Multi-level Inheritance
: Multiple Inheritance
: Hybrid Inheritance
: Hierarchical Inheritance

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



// SINGLE INHERITANCE
#include<iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {
};

int main() {

    Dog d;
    d.speak();
    cout << d.age << endl;
    return 0;
}


// MULTI-LEVEL INHERITANCE
#include<iostream>
using namespace std;
class Animal {

    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {
};

class GermanShepherd: public Dog {
};

int main() {
    GermanShepherd g;
    g.speak();
    return 0;
}


// MULTIPLE INHERITANCE
#include<iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;

    public:
    void bark() {
        cout << "Barking " << endl;
    }
};

class Human {
    public:
    string color;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

//Multiple Inheritance
class Hybrid: public Animal, public Human {

};

int main() {

    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}


// HIERARCHICAL INHERITANCE
#include<iostream>
using namespace std;
class A {

    public:
    void func1() {
        cout << "Inside Funcion 1" << endl;
    }

};

class B: public A {
    public:
    void func2() {
        cout << "Inside Funcion 2" << endl;
    }
};

class C: public A {
    public:
    void func3() {
        cout << "Inside Funcion 3" << endl;
    }
};

int main() {

    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();

    return 0;
}



/*
HYBRID INHERITANCE: Combination of more than one inheritance.

              A                 D
              |  \              |
              |       \         |
              |            \    |
              B                 C
*/