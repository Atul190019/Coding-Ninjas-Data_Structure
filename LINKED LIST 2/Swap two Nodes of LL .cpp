Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
    
    Node *p=head,*q=head;
    
    for(int index=0;index<i;index++)
    {
        p=p->next;
    }
     for(int index=0;index<j;index++)
    {
        q=q->next;
    }
    
    int x=p->data;
    p->data=q->data;
    q->data=x;
    
    return head;

}
