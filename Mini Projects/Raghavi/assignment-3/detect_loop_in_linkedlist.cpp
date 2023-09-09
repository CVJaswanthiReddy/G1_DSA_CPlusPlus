class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        //base case
        if(head -> next == NULL)
            return false;
        Node*slow = head;
        Node*fast =head;
         while(fast!=NULL && fast->next!=NULL)
         {
             slow=slow->next;
             fast=fast->next->next;
             if(slow==fast)
         
             return true;
         
         }
         return false;
    }
};
