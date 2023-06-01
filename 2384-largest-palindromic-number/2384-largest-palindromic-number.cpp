class Solution {
public:
    string largestPalindromic(string s) {
            unordered_map<int , int>m;
    for(auto i : s) m[i-'0']++;
    
    string ans="";
    int oddmaxi=-1;
    for(int i=9 ; i>=0 ; i--)
    {
        if(ans.size()==0 and i==0) continue; //this cause we wanna prevent leading zeroes
        while(m[i]>1)
        {
            ans+=(i+'0');
            m[i]-=2;
        }
        if(m[i]%2 and oddmaxi<i) oddmaxi=i;
    }
    string temp=ans;
    reverse(temp.begin(), temp.end());
    if(oddmaxi!=-1) ans+=(oddmaxi+'0');
    ans+=temp;
    // cout<<"answer :"<<ans;
        if(ans=="") return "0";
return ans;
    }
};



