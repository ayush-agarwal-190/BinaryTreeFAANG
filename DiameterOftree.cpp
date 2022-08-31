class Solution{
int height(node* root)
{
if(node==NULL)
return ;
int left=height(root->left);
int right=height(root->right);

int ans=max(left,right)+1;
return ans;
}
int diameter(node* root)
{
if(root==NULL)
return ;
int op1=diameter(root->left);
int op2=diameter(root->right);
int op3=height(root->right)+height(root->left)+1;

int ans=max(op1,max(op2,op3));
return ans;
}


};