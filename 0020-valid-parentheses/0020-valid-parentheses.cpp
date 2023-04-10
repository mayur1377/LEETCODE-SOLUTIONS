class Solution {
public:
    bool isValid(string s) {
stack<char>p;
for(auto i :s)
{
    if(i=='(') p.push(')');
    if(i=='{') p.push('}');
    if(i=='[') p.push(']');
    else if(i==')' || i=='}' || i==']')
    {
        if(!p.empty()&&i==p.top()) p.pop();
        else return false;
    }
   
    }
         return p.empty();
}
};