class Solution {
public:
    string simplifyPath(string path) {
stack<string>s;
for(int i=0 ; i<path.size() ; i++)
{
    if(path[i]=='/')
    {
        continue;
    }
    else 
    {
        char x=path[i];
        string temp="";
        while(i<path.length() and path[i]!='/') temp+=path[i] , i++;
        if(temp=="..") 
        {
            if(s.size()) s.pop();
            // cout<<"here";
        }
        else if(temp==".")
        {
            continue;
        }
        else 
        {
            s.push(temp);
        }
        // cout<<temp<<endl;
    }
}
string ans="";
while(s.size())
{
    string temp=s.top();
    reverse(temp.begin() , temp.end());
    ans+=temp ;
    ans+="/";
    s.pop();
}
reverse(ans.begin() , ans.end());
if(ans=="") ans+="/";
return ans;
    }
};