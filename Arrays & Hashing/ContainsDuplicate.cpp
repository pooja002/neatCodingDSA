/*
Problem description
https://leetcode.com/problems/contains-duplicate/

Approach 1 : Sort the given array and if any two consecutive elements are same return true or else if you exhaust until the end of the array return false
Time Complexity : O(N LogN)+O(N)
Space Complexity : O(N)

Approach 2 : Use a set, insert the element into set if it is not already inserted before , if that element is already present in the set that means we have a duplicate
Time complexity : O(N) + O(N)
Space Complexit : O(N) 


Approach 3: Use a map, similar to approach 2 key as element value as occurence , after you have inserted all the elements , as you go trough the map if you see
there is atleast one element with occurence >1 return true, else if you reach the end of the map return false
Time complexity : O(N) + O(N)
Space Complexit : O(N) 

*/


 bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> myset;
        
        for(auto num : nums)
        {
            if(myset.find(num)!=myset.end())
            {
                return true;
            }
            else
            {
                myset.insert(num);
            }
        }
        return false;
    }