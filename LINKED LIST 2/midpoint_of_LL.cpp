Node *midPoint(Node *head)
{
    // Write your code here
    Node *slow=head;
    Node *fast=head;
    if(fast==NULL)
        return head;
    while( fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

