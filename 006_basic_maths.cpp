#include <bits/stdc++.h>
using namespace std;

// EXTRACTION OF DIGITS
void ext(int n)
{
    while(n!=0)
    {
        int lastdigit = n%10;
        cout << lastdigit << endl;
        n = n/10;
    }
}


// COUNT THE NUMBER OF DIGITS
void P1(int n)
{
    int cnt = (int) (log10(n) + 1);
    cout << cnt; 

    // TC -> O(log10(N))
}


// FIND THE NUMBER OF DIGITS OF n THAT EVENLY DIVIDE n
void P2(int n)
{
    int temp = n;
    int count = 0;
    while(temp > 0)
    {
        int r = temp % 10;
        temp = temp / 10;
        if(r == 0)
            continue;
        if(r > 0 && n % r == 0)
        {
            count++;    
        }
    }
    cout << count;
}


// REVERSE OF A NUMBER
void P3(int n)
{
    int rev=0;
    while(n!=0)
    {
        int lastdigit = n%10;
        n = n/10;
        rev = (rev*10) + lastdigit;
    }
    cout << rev;
}


// REVERSE BITS
void P4(long n)
{
    long long ans=0;
    for(int i=0;i<32;i++)
      {
        long long lsb=n&1;
        long long revlsb=lsb<<(31-i);
        ans=ans|revlsb;
        n=n>>1;
      }
      cout << ans;
}


// PALINDROME NUMBER
void P5(int n)
{
    // Write your code here
    int rev=0, d;
    int t = n;
    while(t!=0)
    {
        d = t%10;
        rev = rev*10+d;
        t=t/10;
    }
    if(rev == n)
    cout << "true";
    else
    cout << "false";
}

int main()
{
    int num = 43285;
    ext(num);
    P1(num);
    P2(num);
    P4(12); 
    P5(num);
    return 0;
}