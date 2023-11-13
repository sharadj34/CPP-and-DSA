// FIFO - First In First Out

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Sharad");
    q.push("Jha");
    q.push("21BCE11218");

    cout << "First element : " << q.front() << endl;

    cout << "Size before pop : " << q.size();

    q.pop();

    cout << "First element : " << q.front() << endl;

    cout << "Size after pop : " << q.size();

    return 0;
} 
