class Solution {
public:
int help(vector<string>words , vector<int>nums , int i , vector<int>scores)
{
    if(i>=words.size()) return 0;
    vector<int>x=nums;
    int notinclude=help(words , nums , i+1 , scores);
    int flag=1;
    int s=0;
    for(int j=0 ; j<words[i].size() ; j++)
    {
        char d=words[i][j];
        if(!nums[d-'a']) flag=0;
        else 
        {
           s+=scores[d-'a'];
            nums[d-'a']--;
        }
    }
    int include=0;
    if(flag)
    {
        include+=s+help(words , nums , i+1 , scores);
    }
    nums=x;
    return max(include , notinclude);
    
    
}
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
map<char , int>m;
for(auto i : letters) m[i]++;
vector<int>nums(26 ,0);
for(auto i : m)
{
    nums[i.first-'a']=i.second; // contains char freq
}
return help(words , nums , 0 , score);
        
    }
};