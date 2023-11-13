/* Map is a container which stores everything with respect to {key, value}. The key can be of any datatypes. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> m;

    m[1] = "Sharad";
    m[2] = "Jha";
    m[13] = "21BCE11218";

    m.insert({5,"VIT Bhopal"});

    cout << "BEFORE ERASE : " << endl;
    
    for(auto i:m)
    {
        cout << i.first << " " << i.second << endl; 
    }

    cout << "Finding 13 : " << m.count(13) << endl;
    
    m.erase(13);
    
    cout << "AFTER ERASE : " << endl;
    
    for(auto i:m)
    {
        cout << i.first << " " << i.second << endl; 
    }

    auto it = m.find(5);
    for(auto i=it ; i!=m.end() ; i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}