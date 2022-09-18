Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    if(n==0)
        return head;
    int c=1;
    Node *t=head;
    Node *p=NULL;
    while(t!=NULL)
    {
        p=t;
        t=t->next;
        c++;
    }
    if(n>=c)
        return head;
    c=c-1;
    Node *f = head;
    for(int i = 0 ; i < c-n-1 ; i++)
    {
        f=f->next;
    }
    Node *a = head;
    head = f->next;
    f->next=p->next;
    p->next=a;
    return head;
    
    
    
}

