#include<bits/stdc++.h>
using namespace std;

vector<string> printNTimes(int n) {
	vector<string> str;

	if(n>0)
	{
		str = printNTimes(n-1);
		str.push_back("Sharad Jha");
	}
	return str;
}

int main()
{
    int d;
    cin>>d;

    printNTimes(d);
}

