int length(Node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}

Node *reverse(Node*head2)
{
    Node *p=head2,*q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head2=q;
    return q;
}

bool isPalindrome(Node* head)
{
    //write your code here
    if(head==NULL)
        return true;
    Node *p=head;
    int x=length(head)/2;
    
    for(int i=1;i<x;i++)
    {
        p=p->next;
    }
    Node *head2=p->next;
    p->next=NULL;
   head2= reverse(head2);
   
    while(head&&head2)
    {
        if(head->data!=head2->data)
            return false;
        head=head->next;
        head2=head2->next;
    }
    return true;
}

