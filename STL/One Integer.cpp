int solve(vector<int>& nums) 
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int ans = 0;
    // pushing the elements of array into min heap
    for (int i = 0; i < nums.size(); i++) 
        pq.push(nums[i]);
    
  //take out first two minimum elements from the heap till 1 element is left in the heap
  // Add these two nos. and assign them to the sum.
  // update the ans variable
  // Again push sum to the min heap
  
    int a, b, sum;
    while (pq.size() > 1)
     {
        a = pq.top();
        pq.pop();

        b = pq.top();
        pq.pop();
        
        sum = a + b;
        ans += sum;
        pq.push(sum);
    }
    return ans;
}
