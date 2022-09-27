class Solution {
public:
void help(string& str,  string from,  string to)
{
        size_t i = 0;
        while((i = str.find(from, i)) != string::npos) {
            str.replace(i, from.length(), to);
            i+=to.length();
        }
}
    string pushDominoes(string dominoes) {
 string temp=dominoes;
while(1) 
{
            string x=temp;
            if(x.find("R.L")!=string::npos) help(x, "R.L", "X");
            if(x.find(".L")!=string::npos) help(x, ".L", "LL");
            if(x.find("R.")!=string::npos) help(x, "R.", "RR");
            if(temp==x) break;
            temp=x;
}
help(temp, "X", "R.L");
return temp; 
    }
};