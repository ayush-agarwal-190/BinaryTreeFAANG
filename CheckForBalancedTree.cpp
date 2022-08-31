class Solution{
    int height(struct Node* node)
    {
        if(node==NULL)
        return 0;

        int left=height(node->left);
        int right=height(node->right);

        int ans=max(left,right)+1;
        return ans;
    }
int isBalance(node* root)
{
    bool left=isBalance(root->left);
    bool right=isBalance(root->right);

    bool diff=abs(height(root->left)-height(root->right)<=1);

    if(left&&right&& diff)
    {
        return true;
    }
    else
    {
        return false;
    }

}
};