class Solution {
public:
bool check(char x)
{
    if(x=='a' or x=='e' or x=='i' or x=='o' or x=='u') return 1;
    return 0;
}
int help(string s)
{
    cout<<s<<" "<<endl;
    unordered_map<int , int>m;
    int j=0;
    int count=0;
    for(int i=0 ; i<s.length() ; i++)
    {
        m[s[i]]++;
        while(m.size()==5)
        {
            count++;
            m[s[j]]--;
            if(m[s[j]]==0)
            {
                cout<<"now erasing :"<<s[j]<<" size : "<<m.size()<<endl;
                m.erase(s[j]);
            }
            j++;
        }   
    }
    // cout<<count<<" ";
    return count;
}
    int countVowelSubstrings(string s) {
int n=s.length();
int i=0;
int start=0;
int ans=0;
string temp="";
unordered_map<int , int>m;
while(i<n)
{
    if(check(s[i])==false)
    {
        m.clear();
        temp="";
        i++;
    }
    else 
    {
        m[s[i]]++;
        temp+=s[i];
        if(m.size()==5)
        {
            ans+=help(temp);
            // cout<<temp<<endl;
        }
        i++;
    }
}
        return ans;
    }
};