class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>m;
        int maxi=0;
        for(auto i:arr){
            m[i]=m[i-difference]+1;
            maxi=max(maxi,m[i]);
        }
        return maxi;
    }
};