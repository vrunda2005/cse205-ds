class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()!=1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
           
            if(a>b){
                pq.push(a-b);
            }else if(b>a){
                 pq.push(b-a);
            }else{
                if(pq.empty()) return 0;
            }
        }
        return pq.top();
    }
};