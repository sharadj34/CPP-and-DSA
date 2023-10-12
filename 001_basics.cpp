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


*** #define preprocessor ***
#include <iostream>
using namespace std;
#define length 10
#define width 15
#define newline '\n'
int main()
{
    int area = length * width;
    cout << area;
    cout << newline;
    return 0;
}


*** Using const keyword ***
#include <iostream>
using namespace std;
int main()
{
    const int length = 10;
    const int width = 15;
    const char newline = '\n';
    int area = length * width;
    cout << area;
    cout << newline;
    return 0;
}


*** if-else-if ***
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if(marks < 25)
    cout << "Grade: F";
    else if(marks>=25 && marks<=44)
    cout << "Grade: E";
    else if(marks>=45 && marks<=49)
    cout << "Grade: D";
    else if(marks>=50 && marks<=59)
    cout << "Grade: C";
    else if(marks>=60 && marks<=79)
    cout << "Grade: B";
    else if(marks>=80 && marks<=100)
    cout << "Grade: A";
    return 0;
}


*** Switch Case ***
#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"Not a day";
        break;
    }
    return 0;
}

