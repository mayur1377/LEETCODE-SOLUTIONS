class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int cand) {
        long long cost =0;
        int n = costs.size();
        priority_queue<int, vector<int> , greater<int>> ft, lt;
        int i=0, j=n-1;
       
        while(k--){
            
            while(ft.size() < cand && i<= j) ft.push(costs[i++]);
            while(lt.size() < cand && i<= j) lt.push(costs[j--]);
            
            int a = ft.size() ? ft.top() : INT_MAX;
            int b = lt.size() ? lt.top() : INT_MAX;
            
            if(a<=b){
                cost += a;
                ft.pop();
            }else{
                cost += b;
                lt.pop();
            }
        }
            
        
        return cost;
    }
};