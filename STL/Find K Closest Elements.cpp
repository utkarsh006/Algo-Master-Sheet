/* arr = [1,2,3,4,5], k = 4, x = -1

 STEP 1:   1 2 3 4 5 
           Subtract the value of k from these values, But the answer would be absolute
           2 3 4 5 6
           
 STEP 2: Push the pair (difference, element) into maxheap.
 
          6,5
          5,4
          4,3
          3,2
          2,1
          
          If maxheap size > k then pop out the element from maxheap.
          5,4
          4,3
          3,2
          2,1
          
   STEP 3: Till my heap is not empty push the second value of pair into ans vector and sort it.   */




class Solution {
public:
   
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        priority_queue< pair<int,int>> maxh;
        
          for(auto it: arr)
          {
              maxh.push( make_pair( abs(it-x), it ) );
              if(maxh.size() >k)
                  maxh.pop();
          }
        
           vector<int> ans;
           
        while(!maxh.empty())
        {
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};
