// LC: https://leetcode.com/problems/find-words-containing-character/description/

#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
// 	vector<int> findWordsContaining(vector<string> &words, char x)
// 	{
// 		vector<int> res;
// 		for (int i = 0; i < size(words); i++)
// 		{
// 			string word = words[i];
// 			for (int j = 0; j < word.length(); j++)
// 			{
// 				if (word[j] == x)
// 				{
// 					res.push_back(i);
// 					break;
// 				}
// 			}
// 		}
// 		return res;
// 	}
// };

// Somehow solution with find() is faster than the above solution with char comparison.
class Solution
{
public:
	vector<int> findWordsContaining(vector<string> &words, char x)
	{
		vector<int> res;
		for (int i = 0; i < size(words); i++)
		{
			if (words[i].find(x) != -1)
			{
				res.push_back(i);
			}
		}
		return res;
	}
};
