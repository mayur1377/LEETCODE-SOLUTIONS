class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
vector<int>ans;
sort(potions.begin() , potions.end());
for(int i=0 ; i<spells.size() ; i++)
{
    int h=potions.size()-1;
    int l=0;
    while(l<=h)
    {
        int mid=(h+l)/2;
        if((long long int )spells[i]*(long long int)potions[mid]>=success) h=mid-1;
        else l=mid+1;
    }
    ans.push_back(potions.size()-h-1);
    
}
        return ans;
    }
};