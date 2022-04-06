// Problem Description:  https://leetcode.com/problems/valid-anagram/

/* 
Approach 1 : Sort the two strings, check character by character if the corresponding characters don't match then , return false. Also do a pre-check of sizes if sizes are not equal then they can't be anagrams

Time Complexity : O(N LogN)
Space Complexity : O(N)

Approach 2 : Use a map to insert characters of one string , later iterate through the second string and remove the occurences of chracters , once this is done.
Again iterate through the map to spot for any keys having values > 0 or <0 which means the strings are not anagrams


Time Complexity : O(N)
Space Complexity : O(N)
*/

 bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        
        if(s.length()!=t.length())
        {
            return false;
        }
        
        for(auto ch : s)
        {
            mp[ch]++;
        }
        
        for(auto ch : t)
        {
       
                mp[ch]--;
            
        }
        
        unordered_map<char,int> :: iterator it;
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second!=0)
            {
                return false;
            }
        }
        return true;
    }