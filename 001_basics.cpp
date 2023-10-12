
*** print hello world ***

#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello World";
    return 0;
}


*** data types ***

#include <iostream>
using namespace std;
int main()
{
    int a = 123;
    cout << a << endl;

    long e = 435543;
    cout<< e << endl;

    long long g = 434325436;
    cout<< g << endl;

    char b = 'g';
    cout << b << endl;

    bool c = true;
    cout << c << endl;

    float f = 1.2;
    cout << f << endl;

    double d = 1.23;
    cout << d << endl;

    return 0;
}


*** sizeof function ***

#include <iostream>
using namespace std;
int main()
{
    //sizeof
    cout << "size of int is: " << sizeof(int) << endl;
    cout << "size of char is: " << sizeof(char) << endl;
    cout << "size of double is: " << sizeof(double) << endl;

    return 0;
}


*** getline function for string ***
#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout<<str;
    return 0;
}
