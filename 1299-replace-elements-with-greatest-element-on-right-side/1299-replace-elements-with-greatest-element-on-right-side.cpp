class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxEle = -1;
        vector<int> ans;
        ans.push_back(-1);
        for(int i=arr.size()-1; i>0; i--){
            maxEle = max(maxEle,arr[i]);
            ans.push_back(maxEle);
            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};