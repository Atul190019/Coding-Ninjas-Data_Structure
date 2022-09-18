TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    TreeNode<int>* max=NULL; 
        if(root->data>x)
            max=root;
    TreeNode<int>* temp;
        for(int i=0;i<root->children.size();i++){
            temp=getNextLargerElement(root->children[i],x);
            
            if(max==NULL)
                max=temp;
            else if(root->data>x && temp->data>root->data)
                max=root;
            else if(root->data>x && temp->data<root->data)    
               max=temp;
        }
    return max;
}
