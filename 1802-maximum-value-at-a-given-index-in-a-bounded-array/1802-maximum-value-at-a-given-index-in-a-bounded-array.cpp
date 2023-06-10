class Solution {
    
    long long calcSum(int s, int e, long long val){
        
        long long l = e-s+1;  
        if(l > val)
            return (val * (val+1) / 2) + (l-val);
        long long d = val-l;        
        return (val * (val+1) / 2) - (d * (d+1) / 2);
    }

    
    bool check(int n, int idx, long long val, long long maxSum){

        long long leftSum = calcSum(0, idx-1, val-1);
        long long rightSum = calcSum(idx+1, n-1, val-1);
        long long totalSum = val + leftSum + rightSum;      
        
        return totalSum <= maxSum;
    }
    
    
public:
    int maxValue(int n, int index, int maxSum) {
        
        long long low = 1, high = maxSum;
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(check(n, index, mid, maxSum)){
                low = mid + 1;
                ans = mid;
            }else{
                high = mid - 1;
            }
        }
        
        return ans;
    }
};

// i will sit and do this qn tomo , eally tired rn , gotta complete stea
