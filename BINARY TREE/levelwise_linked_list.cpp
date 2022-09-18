pair<Node<int>* ,Node<int>* > formlist(Node<int>* head,Node<int>* tail,int data){
    pair<Node<int>* ,Node<int>* > n;
    if(head==NULL && tail==NULL){
        Node<int>* newnode=new Node<int>(data); 
        head=newnode;
        tail=newnode;
    }
    else{
        Node<int>* newnode=new Node<int>(data);
        tail->next=newnode;
        tail=newnode;
    }
    n.first=head;
    n.second=tail;
    return n;
       
}
vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
   
        
    vector<Node<int>*> v;
     if(root==NULL)
         return v;
// Node<int> *k=new Node(root->data);
// v.push_back(k);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    // q.push(root->right);
    q.push(NULL);
    Node<int>* head=NULL;
    Node<int>* tail=NULL;
     pair<Node<int>* ,Node<int>* > temp1;
    while(q.size()!=0){
        BinaryTreeNode<int>* temp=q.front();
         q.pop();
        if(temp==NULL){
            if(q.size())
q.push(NULL);
            v.push_back(temp1.first);
            head=NULL;
            tail=NULL;
        }
        else{
           // first=new Node(temp->data);
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
            
           temp1= formlist(head,tail,temp->data);
             head = temp1.first;
             tail = temp1.second;
        }
            
    } 
    return v;
}

