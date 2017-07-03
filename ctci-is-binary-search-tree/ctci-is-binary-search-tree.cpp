/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
bool CheckNode(Node* root, int min, int max)
{
	if (root == nullptr)
		return true;

	if (root->data < min)
		return false;
	
	if (root->data > max)
		return false;

	if (root->left) {
		if (!CheckNode(root->left, min, root->data-1))
			return false;
	}

	if (root->right) {
		if (!CheckNode(root->right, root->data+1, max))
			return false;
	}

	return true;
}

bool checkBST(Node* root) {
	return CheckNode(root, 0, 10000);
}