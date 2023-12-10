// LC: https://leetcode.com/problems/merge-strings-alternately/

#include <string>
using namespace std;

// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         string res = "";
//         int i = 0;
//         while(i < word1.length() || i <  word2.length()){
//             if(i < word1.length()){
//                 res += word1[i];
//             }
//             if(i < word2.length()){
//                 res += word2[i];
//             }
//             i++;
//         }
//         return res;
//     }
// };

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int i = 0, j = 0;
        while(i < word1.length() && j <  word2.length()){
            res += word1[i];
            res += word2[j];
            i++;
            j++;
        }

        while(i<word1.length())
            res.push_back(word1[i++]);

        while(j<word2.length())
            res.push_back(word2[j++]);
        
        return res;
    }
};