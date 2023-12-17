/*
QUESTION: Letter Combinations of a Phone Number

LINK: https://www.codingninjas.com/studio/problems/letter-combinations-of-a-phone-number_983623
*/

void solve(string s, string output, int index, vector<string> &ans, string mapping[])
{
	if(index >= s.length())
	{
		ans.push_back(output);
		return;
	}

	int number = s[index] - '0';

	string value = mapping[number];

	for(int i=0; i<value.length(); i++)
	{
		output.push_back(value[i]);
		solve(s, output, index+1, ans, mapping);
		output.pop_back();
	}
}
vector<string> combinations(string s)
{
	vector<string> ans;

	if(s.length() == 0)
	return ans;

	string output;
	int index = 0;

        string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(s, output, index, ans, mapping);

	return ans;
}
