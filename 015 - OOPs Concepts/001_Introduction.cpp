/*

-> Object is an entity with some characterstics (state/properties) and behaviour. It increases readability, manageability and extensibility.

-> Class is a user defined data type that describes what a particular kind of object will look like.

-> Size of object == Size of properties in a class
-> For empty class, size of object = 1 byte

-> Getter/Setter: Getter is to fetch/read the data whereas in Setter we can set data based on conditions.

-> Padding is the technique of adding extra bytes to a structure or class to align its data members to specific boundaries. This is done to ensure that the data members are accessed efficiently by the processor, which typically fetches data from memory in chunks of fixed sizes, such as 4 or 8 bytes.

*/


#include <iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char *name;
    char level;
    static int timetocomplete;

    // default constructor
    Hero()
    {
        cout << "Constructor called" << endl;
        name = new char[100];
    }
    
    // parameterized constructor
    Hero(int health,int level)
    {
        this->health = health;
        this->level = level;
    }

    // COPY CONSTRUCTOR {deep copy}
    Hero(Hero& temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    // DESTRUCTOR
    ~Hero()
    {
        cout << "Destructor is called" << endl;
    }

    // STATIC FUNCTION - can only access static members
    static int random()
    {
        return timetocomplete;
    }
};

// initializing static data
int Hero::timetocomplete = 5;

int main()
{
    // CREATING OBJECT STATICALLY
    Hero h1;

    h1.level = 'A';
    h1.setHealth(70);

    cout << "Health is: " << h1.getHealth() << endl;
    cout << "Level is: " << h1.level << endl;

    cout << "Size of h1: " << sizeof(h1) << endl;


    // CREATING OBJECT DYNAMICALLY
    Hero *h = new Hero;

    h -> level = 'B';
    h -> setHealth(60);  

    cout << "Level is: " << h -> level << endl;
    cout <<"Health is: " << h -> getHealth() << endl;

    // COPY CONSTRUCTOR {shallow copy}
    Hero suresh(70,'C');
    Hero ramesh(suresh);

    // COPY ASSIGNMENT OPERATOR
    ramesh = h1;

    // Dynamic Destructor
    Hero *B = new Hero();
    delete B;

    cout << Hero::timetocomplete << endl;
    cout << Hero::random() << endl;

    return 0;
}