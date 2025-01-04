//video 38
#include<iostream>
#include<vector>

using namespace std;

void solve(string str, vector<string> map, vector<string> &res, int i, string &output)
{
    if(i >= str.length())
    {
        res.push_back(output);
        return;
    }

    int num = str[i] - '0';
    string value = map[num];

    for(int j = 0; j < value.length(); j++)
    {
        output.push_back(value[j]);
        solve(str, map, res, i+1, output);
        output.pop_back();
    }
}

int main()
{
    string str = "29";

    vector<string> res;
    string output;

    vector<string> map = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    int i = 0;

    solve(str,map, res, i, output);

    for(string s : res)
    {
        cout << s << " " ;
    }

    return 0;
}