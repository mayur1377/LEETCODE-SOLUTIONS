class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
int carry=1;
int i=digits.size()-1;
while(i>=0)
{
    digits[i]+=(carry%10);
    // cout<<digits[i]<<" ";
    carry/=10;
    carry+=(digits[i]/10);
    digits[i]%=10;
    i--;
}
while(carry)
{
    digits.insert(digits.begin() , carry%10);
    carry/=10;
}
        return digits;
    }
};