using System;

namespace Playground
{
    class MainProgram
    {
        static void Main(string[] args)
        {

            Node rootNode = new Node(50);
            BinarySearchTree tree = new BinarySearchTree(rootNode);

            // Insert nodes into the tree
            tree.InsertRecursive(tree.Root, 30);
            tree.InsertRecursive(tree.Root, 20);
            tree.InsertRecursive(tree.Root, 40);
            tree.InsertRecursive(tree.Root, 70);
            tree.InsertRecursive(tree.Root, 60);
            tree.InsertRecursive(tree.Root, 80);

            // Print inorder traversal of the tree
            Console.WriteLine("Inorder traversal of the binary search tree:");
            tree.InorderTraversal(tree.Root);

            // Print the tree structure
            Console.WriteLine("\nTree structure:");
            tree.PrintTreeUtil(tree.Root, 0);

            // Test preorder traversal
            Console.WriteLine("\nPreorder traversal of the binary search tree:");
            tree.PreorderTraversal(tree.Root);

            // Test postorder traversal
            Console.WriteLine("\nPostorder traversal of the binary search tree:");
            tree.PostorderTraversal(tree.Root);

            // Test finding minimum value
            Console.WriteLine($"\nMinimum value in the tree: {tree.MinValue(tree.Root)}");

            // Test finding maximum value
            Console.WriteLine($"Maximum value in the tree: {tree.MaxValue(tree.Root)}");

            // Test deletion
            tree.DeleteRecursive(tree.Root, 20);
            Console.WriteLine($"\nInorder traversal after deleting {20}:");
            tree.InorderTraversal(tree.Root);

            // Print the tree structure
            Console.WriteLine("\nTree structure:");
            tree.PrintTreeUtil(tree.Root, 0);

            tree.DeleteRecursive(tree.Root, 50);
            Console.WriteLine($"\nInorder traversal after deleting {50}:");
            tree.InorderTraversal(tree.Root);

            // One more deletion
            Console.WriteLine("\nTree structure:");
            tree.PrintTreeUtil(tree.Root, 0);

        }
    }
}
