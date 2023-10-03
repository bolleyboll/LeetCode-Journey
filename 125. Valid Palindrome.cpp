// CN: https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386
// LC: https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(signed int i, int n, string s){
    if(i>=n/2)
        return true;
    while(!(s[i] >= 'a' && s[i] <= 'z'))
        i++;
    if(s[i] == s[n-i-1])
        return true && checkPalindrome(i+1,n,s);
    else
        return false;
}
bool isPalindrome(string& s) {
    int n = s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return checkPalindrome(0,n,s);
}