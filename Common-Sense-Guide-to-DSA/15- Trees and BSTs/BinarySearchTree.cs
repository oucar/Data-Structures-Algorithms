

namespace Playground
{
	public class BinarySearchTree
	{
        public Node Root { get; set; }


        public BinarySearchTree(Node node)
        {
            this.Root = node;
        }

        public Node InsertRecursive(Node node, int data)
        {
            // If the current node is null, create a new node with the given data
            if (node == null)
            {
                node = new Node(data);
                return node;
            }

            // Recursively insert the data into the appropriate subtree
            // If the data is already present in the tree, it is not inserted
            if (data < node.Data)
            {
                node.Left = InsertRecursive(node.Left, data);
            }
            else if (data > node.Data)
            {
                node.Right = InsertRecursive(node.Right, data); 
            }

            return node;
        }

        // Recursive method to delete a node
        public Node DeleteRecursive(Node node, int data)
        {
            // If the tree or subtree is empty, return null
            if (node == null)
            {
                return node;
            }

            // Recursively search for the node to be deleted
            if (data < node.Data)
            {
                node.Left = DeleteRecursive(node.Left, data);
            }
            else if (data > node.Data)
            {
                node.Right = DeleteRecursive(node.Right, data);
            }
            else
            {
                // Node with only one child or no child
                if (node.Left == null)
                {
                    return node.Right;
                }
                else if (node.Right == null)
                {
                    return node.Left;
                }

                // Node with two children: Get the inorder successor (smallest in the right subtree)
                node.Data = MinValue(node.Right);

                // Delete the inorder successor
                node.Right = DeleteRecursive(node.Right, node.Data);
            }

            return node;
        }

        // Method to find the minimum value in a subtree
        public int MinValue(Node node)
        {
            if (node.Left == null)
            {
                return node.Data;
            }
            return MinValue(node.Left);
        }

        // Method to find the maximum value in the binary search tree
        public int MaxValue(Node node)
        {
            if (node.Right == null)
            {
                return node.Data;
            }
            return MaxValue(node.Right);
        }

        // Recursive method for inorder traversal
        // Ascending
        public void InorderTraversal(Node root)
        {
            // Traverse the left subtree
            if (root != null)
            {
                InorderTraversal(root.Left);
                Console.Write(root.Data + " ");
                InorderTraversal(root.Right);
            }
        }

        // Recursive method for preorder traversal
        // Root, Left, Right
        public void PreorderTraversal(Node node)
        {
            if (node != null)
            {
                Console.Write(node.Data + " ");
                PreorderTraversal(node.Left);
                PreorderTraversal(node.Right);
            }
        }

        // Recursive method for postorder traversal
        // Left, Right, Root
        public void PostorderTraversal(Node node)
        {
            if (node != null)
            {
                PostorderTraversal(node.Left);
                PostorderTraversal(node.Right);
                Console.Write(node.Data + " ");
            }
        }


        // Recursive utility function to print the tree like an actual (visually) tree
        public void PrintTreeUtil(Node node, int space)
        {
            if (node == null)
                return;

            space += 5;

            // Process right child first
            PrintTreeUtil(node.Right, space);

            // Print current node after space
            Console.Write("\n");
            for (int i = 5; i < space; i++)
                Console.Write(" ");
            Console.Write(node.Data + "\n");

            // Process left child
            PrintTreeUtil(node.Left, space);
        }
    }
}

