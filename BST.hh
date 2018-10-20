
// using new instead of smart pointers

#include <iostream>

class BinarySearchTree {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
    };
    Node* root;

public:
    BinarySearchTree() {
        root = nullptr;
    }
    Node* CreateNode(const int& data) {
        Node* node = new Node();
        node->data = data;
        node->left = node->right = nullptr;
        return node;
    }
    void Insert(const int& data) {
        if (!root) root = CreateNode(data);
        else InsertHelper(root, data);
    }
    void InsertHelper(Node* node, int data) {
        if (!node) return;
        if (node->data > data) {
            if (!node->left) node->left = CreateNode(data);
            else InsertHelper(node->left, data);
        } else {
            if (!node->right) node->right = CreateNode(data);
            else InsertHelper(node->right, data);
        }
    }
    void Inorder(Node* node) {
        if (!node) return;
        Inorder(node->left);
        std::cout<<node->data<<std::endl;
        Inorder(node->right);
    }
    void PrintTree() {
        Inorder(root);
    }
};