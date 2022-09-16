/*    
Step 1. Create an Unordered Map
Step 2. Initialise the ans=0
Step 3. Loop through Each Element in the vector
Step 4. For Each Element loop through pow(2,1) to pow(2,22) 
Step 5. Find For the element pow(2,i) - x  in the map . If found then add the frequency.
Step 6. Every time add the element of the vector into the map
Step7 . Return the ans with modulo    */

class Solution {
public:
    int countPairs(vector<int>& deliciousness) 
    {
       unordered_map<int,int> mp;
       long long ans=0;
        for(int x : deliciousness)
        {
            for(int i=1; i<=(1<<22); i*=2)
            {
                if(mp.count(i-x)) 
                    ans+=mp[i-x];
            }
            mp[x]+=1;
        }
        return ans % (int)(1e9 + 7);
    }
};
    
