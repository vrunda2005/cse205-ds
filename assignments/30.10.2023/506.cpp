class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        vector<string> res(score.size(),"");
        int count=1;
       while(!pq.empty()){
            if(count==1){
                res[pq.top().second]="Gold Medal";
            }
            else if(count==2){
                res[pq.top().second]="Silver Medal";
            }else if(count==3){
                 res[pq.top().second]="Bronze Medal";
            }else{
                string s=to_string(count);
                 res[pq.top().second]=s;
            }
            count++;
           pq.pop();
        }
        return res;
    }
};