class Solution {
public:
vector<string>nums={"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

void help(string digits , vector<string>&ans , int i , string temp)
{
    if(i==digits.length())  
    {
        ans.push_back(temp);
        return ;
    }
    char number=digits[i];
    int n=number-'0';
    for(auto x : nums[n])
    {
        help(digits , ans , i+1 , temp+x);
    }
}
    vector<string> letterCombinations(string digits) {
vector<string>ans;
if(digits=="") return ans;
help(digits , ans , 0 , "");
return ans;
    }
};