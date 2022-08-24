class Solution {
public:
    // arr = [1,2,3,4,5], k=4, x=3
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        vector<int> ans;
        
        priority_queue < pair<int,int>> pq;
        
        // 3-1=2, 3-2=1, 3-3=0, 3-4=1, 3-5=2 => 2 1 0 1 2  
        // (2,1) (1,2) (0,3) (1,4) (2,5)  This is my pq
        // size of pq = 5 which is greater than 4. So, pop one element
        // pq status : (2,1) (1,2) (0,3) (1,4)
        
        for(auto it: arr)
        {
            pq.push( make_pair( abs(x-it), it ) );
              if(pq.size()>k)
                  pq.pop();
        }
        
          // (2,1) (1,2) (0,3) (1,4) This is my pq

        
          // ans = [1]        pq = (1,2) (0,3) (1,4)
         //  ans = [1,2]      pq = (0,3) (1,4)
         //  ans = [1,2,3]    pq = (1,4)
        //   ans = [1,2,3,4]  pq = EMPTY
          
          while(!pq.empty())
          {
              ans.push_back(pq.top().second);
              pq.pop();
          }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
