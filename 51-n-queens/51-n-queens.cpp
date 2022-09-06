class Solution {
public:
int x[100] ;
int inplace(int k  , int i)
{
    for(int j=1 ; j<k ; j++)
    {
        if((x[j]==i)||(abs(x[j]-i))==abs(j-k)) return 0;
    }
    return 1;
}
vector<vector<string>>ans;
void help(int k , int n )
{
    for(int i=1 ; i<= n ; i++)
    {
        if(inplace(k ,i ))
        {
            x[k]=i;
            if(k==n)
            {
                vector<string>m;
                for(int j=1 ; j<=n ; j++)
                {
                    string temp="";
                    for(int p=1 ; p<=n ; p++)
                    {
                        if(x[j]==p)
                        {
                            temp+="Q";
                        }
                        else temp+=".";
                    }
                    m.push_back(temp);
                }
                ans.push_back(m);
            }
            else help(k+1 , n);
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
help(1 , n );
return ans;
    }
};