struct node
{
    node *link[26]={NULL};
    bool flag=false;
};
void insert(string x , node* temp)
{
    for(auto i : x)
    {
        int ind=i-'a';
        if(!temp->link[ind]) temp->link[ind]=new node;
        temp=temp->link[ind];
    }
    temp->flag=1;
}
void help(node*temp , string current , vector<string>&a)
{
    if(a.size()==3) return ;
    if(temp->flag) 
    {
        cout<<current<<" ";
        a.push_back(current);
    }
    for(int i=0 ; i<26 ; i++)
    {
        if(temp->link[i])
        {
            help(temp->link[i] , current+(char)('a'+i) , a);
        }
    }
    // return a;
}
vector<string>s(string x , node* temp)
{
    vector<string>a;
    for(auto i : x)
    {
        int ind=i-'a';
        if(!temp->link[ind]) return {};
        temp=temp->link[ind];
    }
    help(temp , x , a);
    return a;
}
class Solution {
public:
node *root=new node;
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
for(auto i : products)
{
    insert(i , root);
}
vector<vector<string>>ans;
string current="";
for(auto i : searchWord)
{
    current+=i;
    cout<<current<<"- ";
    ans.push_back(s(current , root));
    cout<<endl;
}
return ans;
    }
};