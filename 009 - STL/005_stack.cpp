// LIFO - Last In First Out

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Sharad");
    s.push("Jha");
    s.push("21BCE11218");

    cout << "Top Element : " << s.top() << endl; // Prints 21BCE11218

    s.pop(); // Removes 21BCE11218

    cout << "Top Element : " << s.top() << endl; // Prints Jha 

    cout << "Size of stack : " << s.size() << endl;

    cout << s.empty() << endl;

    return 0;
}