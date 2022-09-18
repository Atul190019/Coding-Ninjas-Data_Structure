Node *removeDuplicates(Node *head)
{
    //Write your code here
    if(head==NULL)
        return head;
    Node *t=head;
    Node *p=head->next;
    while(p!=NULL)
    {
        if(t->data==p->data)
        {
            t->next=p->next;
            p=p->next;
        }
        else 
        {
            t=t->next;
            p=p->next;
        }
    }
    return head;
}

