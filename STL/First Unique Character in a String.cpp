/* l e e t c o d e
   0 1 2 3 4 5 6 7
   
   l -> 1
   e -> 3
   t -> 1
   c -> 1
   o -> 1
   d -> 1
   
  ans : 0 
  
  
  TC : O(N)
  SC : O(N) bcz we are using hashmap */

  

class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char,int> mp;
        int n = s.size();
        
          // created hashmap
          for(int i=0; i<n; i++)
              mp[s[i]]++;
        
          for(int i=0; i<n; i++)
          {
              if(mp[s[i]] == 1)
                  return i;
          }
        
        return -1;
    }
};
