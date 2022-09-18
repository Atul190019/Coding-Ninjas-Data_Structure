Node *kReverse(Node *head, int n)
{
	//Write your code here
    if(n==0)
        return head;
if(head == NULL || head->next == NULL){
        return head;
    }
    Node* current = head;
    Node* temp = head;
    Node* pre = NULL;
    int i = 0;
    while(current!=NULL && i<n){
        temp = temp -> next;
        current->next = pre;
        pre = current;
        current = temp;
        i++;
    }
    if(temp != NULL){
        head->next = kReverse(temp,n);
    }
    return pre;

}
