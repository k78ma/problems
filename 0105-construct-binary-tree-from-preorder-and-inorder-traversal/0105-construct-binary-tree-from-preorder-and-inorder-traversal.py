# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        
        if not preorder or not inorder:
            return
        
        # Identify root and its position in inorder
        root = TreeNode(preorder[0])
        mid = inorder.index(preorder[0])
        
        # Build left subtree
        root.left = self.buildTree(preorder[1:mid+1], inorder[:mid])
        # Build right subtree
        root.right = self.buildTree(preorder[mid+1:], inorder[mid + 1:])
        
        return root