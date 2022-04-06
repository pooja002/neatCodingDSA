Problem Description : https://leetcode.com/problems/two-sum/

/* This problem can be solved using 3 approaches
1. Naive => Use two pointers i and j where i starts from 0th index and j starts 
from i+1 th index for every i from 0 to n-1 and j until i+1 to n check if there exists a sum with given target, if found return the indices

Time Complexity = O(N^2) where N = Number of elements in array
Space Complexity = O(1) 


2. Sorting + Binary Search => Sort the given array and perform binary search for target-nums[i] element , if the element is found return the indices of i and element found

Time Complexity = O(N LogN) + O(N LogN) (Sorting + Binary Searching for every i in worst case)
Space Complexity = O(N) where N = Number of elements in array


3. Map => Store the given elements as keys and the indices as values if target-{element we are seeing right now} is already present in the map , return the indices accordingly
Time Complexity = O(N)
Space Complexity = O(N) where N = Number of elements in array

*/
/*  Only pasted code snippet for the required function in the given problem*/

 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
          if(mp.find(target-nums[i])!=mp.end())
          {
              return {mp[target-nums[i]],i};
          }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return {0,0};
    }