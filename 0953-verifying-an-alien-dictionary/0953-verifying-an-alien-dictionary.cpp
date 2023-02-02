class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int>mp;
        for(int i=0;i<26;i++)
            mp[order[i]]=(i+1);
        for (int i = 0; i < words.size() - 1; i++) 
        {
            int f=0,s=0;
            string first=words[i];
            string second=words[i + 1];
            while (first[f]==second[s]) 
            {
                f++;
                s++;
            }
            if (mp[first[f]]>mp[second[s]])
                return false;
    }
         return true;
    }
};