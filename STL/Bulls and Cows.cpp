class Solution {
public:
    string getHint(string secret, string guess)
    {
        int bulls=0, cows=0;
        unordered_map<char,int> map1, map2;
    
  /*  Iterate through the secret string and find each character in guess string. If both
        the characters match then update bulls.
        
    If both characters don't match then update both the maps along with character count
        and its frequency.    */
        
        
    for(int i=0; i<secret.size(); i++)
    {
        if(secret[i]==guess[i]) bulls++;
        else
        {
            map1[secret[i]]++;
            map2[guess[i]]++;
        }
    }
        
/*        // MAP 1         // MAP 2
           1 - 1            7 - 1
           0 - 1            1 - 1
           7 - 1            0 - 1     */
        
    
        
    for(auto it:map1)  // 1-1
    {
        if(map2.find(it.first)!=map2.end())  
        {
            cows+= min(it.second, map2[it.first]);  
        }
    }
    

    string ans = to_string(bulls) + "A" + to_string(cows)+"B";
    return ans;
}
    
};
