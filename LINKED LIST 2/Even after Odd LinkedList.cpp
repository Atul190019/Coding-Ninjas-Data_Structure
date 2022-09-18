Node *evenAfterOdd(Node *head)
{
	//write your code here
    Node *even= new Node(0);
    Node *etail=even;
    
    Node *odd=new Node(0);
    Node *otail=odd;
    
   while(head)
    {
        if(head->data%2==0)
        {
            
            etail->next=head;
            etail=head;
            head=head->next;
            etail->next=NULL;
        }
        else
        {
            otail->next=head;
            otail=head;
            head=head->next;
            otail->next=NULL;
        }
    }
        otail->next=even->next;
        return odd->next;
    

}
