struct Node
{
    Node *links[26];
    bool flag=false;
    bool contains(char ch) {return links[ch-'a'];}
    void put(char ch , Node root)
    {
        links[ch-'a']=new Node();
    }
    Node* next(char ch)
    {
        return links[ch-'a'];
    }
};
class Trie {
public:
Node* root=new Node();
    Trie() {
        
  
    }
    
    void insert(string words) {
        Node *temp=root;
        for(int i=0  ;i<words.size(); i++)
        {
            if(!temp->contains(words[i]))
            {
                temp->links[words[i]-'a']=new Node();
            }
            temp=temp->next(words[i]);  
        }
        temp->flag=1;
    }
    
    bool search(string words) {
      Node *temp=root;
        for(int i=0; i<words.size() ; i++)
        {
            if(!temp->contains(words[i])) return 0;
            temp=temp->next(words[i]);
        }
        return temp->flag==1;
    }
    
    bool startsWith(string prefix) {
        Node* temp=root;
        for(int i=0 ; i<prefix.size() ; i++)
        {
            if(!temp->contains(prefix[i])) return 0;
            temp=temp->next(prefix[i]);
        }
        return 1;
    }
};

