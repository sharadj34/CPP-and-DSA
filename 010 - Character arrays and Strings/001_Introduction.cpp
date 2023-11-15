#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char ch[] , int n)
{
    int s = 0;
    int e= n-1;
    while(s<e)
    {
        if(ch[s] != ch[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int getLength(char name[])
{
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[] , int n)
{
    int s = 0;
    int e = n - 1;

    while(s<e)
    {
        swap(name[s++] , name[e--]);
    }
}

int main()
{
    char name[20];

    cout << "Enter your name : " << endl;
    cin >> name;

    cout << "Your name is : " << name << endl;

    int size = getLength(name);
    cout << "Length is : " << size << endl;

    reverse(name , size);
    cout << "Reversed array is : " << name << endl; 

    cout << "Palindrome or not : " << checkPalindrome(name, size);
    return 0;
}