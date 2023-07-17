class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
stack<int>stack1;
stack<int>stack2;
while(l1)
{
    stack1.push(l1->val);
    l1=l1->next;
}
while(l2)
{
    stack2.push(l2->val);
    l2=l2->next;
}
int carry=0;
ListNode* result=nullptr;
while(stack1.size() or stack2.size() or carry)
{
    int a=stack1.empty()?0:stack1.top();
    if(stack1.size()) stack1.pop();
    
    int b=stack2.empty()?0:stack2.top();
    if(stack2.size()) stack2.pop();
    
    int sum=a+b+carry;
    carry=sum/10;
    sum=sum%10;
    ListNode* newDigit=new ListNode(sum);
    newDigit->next=result;
    result=newDigit;
}
        return result;
    }
};