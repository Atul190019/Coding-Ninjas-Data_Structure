Node* insertNode(Node *head, int i, int data) {
// Write your code here
    
     if(i==0)
    {
        Node *p=new Node(data);
        p->next=head;
        head =p;
        return p;
    }
    
    if(head==NULL || i<0)
      return head;
    
   
    head->next=insertNode(head->next,i-1,data);
   
    return head;
}
