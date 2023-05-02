class Solution {
public:
#define MOD 1000000007
unordered_map<string , int>m;
long help(long n , char i )
{
    if(n==0)
    {
        return 1;
    }
    string temp="";
    temp+=to_string(n)+to_string(i);
    if(m.count(temp)) return m[temp];
    long  count=0;
    if(i=='a')
    {
        count+=help(n-1 , 'e')%MOD;
    }
    else if(i=='e')
    {
        count+=help(n-1 , 'a')%MOD + help(n-1 , 'i')%MOD;
    }
    else if(i=='i')
    {
        count+=help(n-1 , 'a')%MOD+help(n-1 , 'e')%MOD+help(n-1 , 'o') %MOD+ help(n-1 , 'u')%MOD;
        count%=MOD;
    }
    else if(i=='o')
    {
        count+=help(n-1 , 'i')%MOD+help(n-1 , 'u')%MOD;
    }
    else if(i=='u')
    {
        count+=help(n-1 , 'a')%MOD;
    }
    return m[temp]=count;
}
    int countVowelPermutation(int n) {
vector<char>s={'a' , 'e' , 'i' ,'o' , 'u'};
long ans=0;
for(auto i : s)
{
    ans+=help(n-1 , i)%MOD;
}
        return ans%MOD;
    }
};