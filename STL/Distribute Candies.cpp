class Solution {
public:
    int distributeCandies(vector<int>& candyType) 
    {
        int n = candyType.size();
        set<int> st;
        
          for(auto it: candyType)
              st.insert(it);
        
        int set_size= st.size();
        
        return min(n/2, set_size);
    }
};
