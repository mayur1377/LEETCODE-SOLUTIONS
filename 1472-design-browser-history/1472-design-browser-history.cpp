class BrowserHistory {
public:
    vector<string>nums;
    int i=0;
    BrowserHistory(string homepage) {
        nums.push_back(homepage);
    }
    
    void visit(string url) {
        i++;
        if(i<=nums.size()-1)
        {
            nums[i]=url;
            nums.resize(i+1);
            
        }
        else nums.push_back(url);
    }
    
    string back(int steps) {
        i-=steps;
        if(i<0) i=0;
        return nums[i];
    }
    
    string forward(int steps) {
        i+=steps;
        if(i>nums.size()-1) i=nums.size()-1;
        return nums[i];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */