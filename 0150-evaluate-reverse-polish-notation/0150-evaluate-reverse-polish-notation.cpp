class Solution {
public:
int evalRPN(vector<string>& tokens) {
stack<long>s;
for(auto i : tokens)
{
    if(i=="+" or i=="-" or i=="*" or i=="/")
    {
        long long  n1=s.top();
        s.pop();
        long long n2=s.top();
        s.pop();
        if(i=="+") s.push(n1+n2);
        if(i=="-") s.push(n2-n1);
        if(i=="*") 
        {
            // long long x=;
            s.push(n1*n2);
        }
        if(i=="/") s.push(n2/n1);
    }
    else s.push(stoi(i));
}
        return s.top();
    }
};