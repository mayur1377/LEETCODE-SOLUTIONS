class Solution {
public:
    bool isItPossible(string word1, string word2) {
        vector<int> m(26,0);
        vector<int> n(26,0);
        for(int i=0;i<word1.size();i++){
            m[word1[i]-'a']++;
        }
        for(int i=0;i<word2.size();i++){
            n[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(m[i]>0 && n[j]>0){
                m[i]--;
                n[j]--;
                n[i]++;
                m[j]++;
                int cnt1=0,cnt2=0;
                for(int k=0;k<26;k++)
                {
                    if(m[k]>=1)cnt1++;
                    if(n[k]>=1)cnt2++;
                }
                if(cnt1==cnt2)return true;
                m[i]++;
                n[j]++;
                n[i]--;
                m[j]--;
                }
            }
        }
        return false;
    }
};