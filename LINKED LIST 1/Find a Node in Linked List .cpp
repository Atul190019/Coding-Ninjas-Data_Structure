int findNode(Node *head, int n){
    // Write your code here.
    int c=0;
    if(head==NULL)
        return -1;
    while(head!=NULL)
    {
        if(head->data==n)
            return c;
        c++;
        head=head->next;
    }
    return -1;
}

