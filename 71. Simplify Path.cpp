// LC: https://leetcode.com/problems/simplify-path/description/

#include <bits/stdc++.h>
using namespace std;

// Split a string by '/' and simplify the path
// class Solution
// {
// public:
// 	string simplifyPath(string path)
// 	{
// 		// Initialize a stack
// 		vector<string> stack;
// 		// Used for split string by '/'
// 		stringstream ss(path);
// 		string temp;
// 		while (getline(ss, temp, '/'))
// 		{
// 			// If the current component is a "..", then
// 			// we pop an entry from the stack if it's non-empty
// 			if (temp == "..")
// 			{
// 				if (!stack.empty())
// 					stack.pop_back();
// 			}
// 			else if (temp != "." && !temp.empty())
// 			{
// 				// Finally, a legitimate directory name, so we add it
// 				// to our stack
// 				stack.push_back(temp);
// 			}
// 		}
// 		// Construct simplified path
// 		string res = "";
// 		for (auto str : stack)
// 			res += "/" + str;
// 		if (res.empty())
// 			return "/";
// 		else
// 			return res;
// 	}
// };
class Solution
{
public:
	string simplifyPath(string path)
	{

		stack<string> st;
		string res;

		for (int i = 0; i < path.size(); ++i)
		{
			if (path[i] == '/')
				continue;
			string temp;
			// iterate till we doesn't traverse the whole string and doesn't encounter the last /
			while (i < path.size() && path[i] != '/')
			{
				// add path to temp string
				temp += path[i];
				++i;
			}
			if (temp == ".")
				continue;
			else if (temp == "..")
			{
				if (!st.empty())
					st.pop();
			}
			else
				st.push(temp);
		}

		// adding all the stack elements to res
		while (!st.empty())
		{
			res = "/" + st.top() + res;
			st.pop();
		}

		// if no directory or file is present
		if (res.size() == 0)
			return "/";

		return res;
	}
};