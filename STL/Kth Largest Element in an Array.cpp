/*  3 2 1 5 6 4 ,  k=2

BRUTE : 6 5 4 3 2 1
        0 1 2 3 4 5
        
        return nums[k-1] 
        TC : O(N log N)   
        
        
OPTIMAL : USE MIN HEAP 

1. Push all array elements into min heap
2. size of min heap > k -> i will pop out the elements
3. At last, return top element


    1 2 3 4 5 6  => size of minheap = 6, k=2
    
    6>2 => 2 3 4 5 6
    5>2 => 3 4 5 6
    4>2 => 4 5 6
    3>2 => 5 6
    2>2 => false. 
    
    return 5 as the answer.
    
    TC : O(n logk)
    SC : O(k)       */


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    { 
        priority_queue<int,vector<int>,greater<int>> minh;
        
           for(auto it: nums)
               minh.push(it);
        
           while(minh.size()>k)
               minh.pop();
        
        return minh.top();
    }
};
