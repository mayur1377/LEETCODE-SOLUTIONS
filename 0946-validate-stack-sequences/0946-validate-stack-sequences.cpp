class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
stack<int>s;
int i=0;
int j=0;
s.push(pushed[i]);
i++;
while(1)
{
    if(j<popped.size() and s.size() and popped[j]==s.top() )
    {
        s.pop();
        j++;
    }
    else if(i<pushed.size())
    {
        s.push(pushed[i++]);
    }
    else return 0;
    
    if(i==pushed.size() and j==popped.size()) return 1;
}
        return 1;
    }
};