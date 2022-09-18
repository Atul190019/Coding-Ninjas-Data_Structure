#include<bits/stdc++.h>


TreeNode<int>* maxDataNode(TreeNode<int>* root) {    
TreeNode<int> *max=new TreeNode<int>(INT_MIN);
    queue<TreeNode<int>*> pn;
    pn.push(root);
    
    while(pn.size()!=0)
    {
        TreeNode<int>* front=pn.front();
        pn.pop();
        if(front->data > max->data)
           max=front;
            
        for(int i=0;i<front->children.size();i++)
        {
            pn.push(front->children[i]);
        }
    }
    return max;

}
