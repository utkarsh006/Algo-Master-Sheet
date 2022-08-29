class Solution {
public:
    int maximumScore(int a, int b, int c) 
    {
        //a=2 b=4 c=6
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        //pq=(6,4,2)
        
        int score=0;
        int n1=pq.top(); //n1=6
        pq.pop();
        int n2=pq.top(); //n2=4
        pq.pop();
      
        while(n1!=0 && n2!=0)
        {
            score++;              // 1/2/3/4/5/6
            n1--;                //  5/4/3/2/1/0
            n2--;               //   3/2/1/1/0/0
            pq.push(n1);       //   (5,2)/(4,2)/(3,2)/(2,1)/(1,1)/(0,0)
            pq.push(n2);      //    (5,3,2)/(4,2,2)/(3,2,1)/(2,1,1)/(1,1,0)/(0,0,0)
          
            n1=pq.top();     // 5/4/3/2/1/0
            pq.pop();
            n2=pq.top();   //  3/2/2/1/1/0
            pq.pop();
        }
        return score;   //6
    }
};
