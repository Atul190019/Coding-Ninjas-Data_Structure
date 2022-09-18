bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
    if(root->data==x)
           return true;
    bool k;
    for(int i=0;i<root->children.size();i++){
k=isPresent(root->children[i],x);
        if(k==true)
            return true;
    }
       return false;
}
