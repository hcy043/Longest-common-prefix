// leetcodeexamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
//Write a function to find the longest common prefix string amongst an array of strings. 
//If there is no common prefix, return an empty string "".

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty() || strs.size() == 0)
            return "";
        if (strs.size() == 1)
            return strs[0];
        string prefix = strs[0];

        for (auto it = strs.begin() + 1; it != strs.end(); it++)
        {
            while ((prefix != ""))
            {
                if (it->find(prefix) == 0)
                {
                    break;
                }
                else
                {
                    prefix.pop_back();

                }
                if (prefix == "")
                    break;


            }



        }
        return prefix;
    }
};
vector<string> input{"flower", "flow", "flight" };
vector<string> input2{ ""};
int main()
{
    Solution a;
    string prefix = a.longestCommonPrefix(input2);
    cout << prefix << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
