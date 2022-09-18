void help(TreeNode<int> *root, int depth)
{
    root->data=depth;
    for(int i=0;i<root->children.size();i++)
    {
        help(root->children[i] ,depth+1);
    }
}

void replaceWithDepthValue(TreeNode<int> *root){    
   
    int depth=0;
 help(root,depth);
 }
