/*
~ What is Abstraction?
: Abstraction means providing only some of the information to the user by hiding its internal implementation details. We just need to know about the methods of the objects that we need to call and the input parameters needed to trigger a specific operation, excluding the details of implementation and type of action performed to get the result.

~ Advantages of Abstraction?
: Only you can make changes to your data or function, and no one else can.
: It makes the application secure by not allowing anyone else to see the background details.
: Increases the reusability of the code.
: Avoids duplication of your code.

*/

#include <iostream>
using namespace std;
class abstraction {    
    private:        
    int a, b;    
    public:        
    // method to set values of private members         
    void set(int x, int y) {            
        a = x;            
        b = y;        
        }    
        void display() {        
            cout << "a = " << a << endl;        
            cout << "b = " << b << endl;    
            }
        };
        
        int main() {    
            abstraction obj;    
            obj.set(10, 20);    
            obj.display();    
            return 0;
        }