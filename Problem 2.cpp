
// Time Complexity : o(n)
// Space Complexity : o(1)
// Did this code successfully run on Leetcode : YES
// Any problem you faced while coding this : NO

//min in rotated sorted array : lc 153
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n != m) {
            return false;
        }
        
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        for(int i=0;i<n;i++) {
            if(mp1.find(s[i]) == mp1.end()) {
                mp1[s[i]] = t[i];
            } else {
                if(mp1[s[i]] != t[i]) {
                    return false;
                }
            }
            
            if(mp2.find(t[i]) == mp2.end()) {
                mp2[t[i]] = s[i];
            } else {
                if(mp2[t[i]] != s[i]) {
                    return false;
                }
            }
        }
        
        return true;
    }
};