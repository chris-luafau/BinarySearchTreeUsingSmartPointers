
// Using smart pointers

#include <memory>

class BST {
private:
    struct Node {
        int data;
        std::unique_ptr<Node> left;
        std::unique_ptr<Node> right;
    };
    std::unique_ptr<Node> root;

public:
    BST() : root(nullptr) {};
    std::unique_ptr<Node> CreateNode(const int& data) {
        std::unique_ptr<Node> new_node = std::make_unique<Node>();
        new_node->data = data;
        new_node->left = nullptr;
        new_node->right = nullptr;
        return new_node;
    }
    void Insert(const int& data) {
        if (!root) root = CreateNode(data);
        else InsertHelper(root, data);
    }
    void InsertHelper(std::unique_ptr<Node>& root, const int& data) {
        if (root->data > data) {
            if (!root->left) root->left = CreateNode(data);
            else InsertHelper(root->left, data);
        }
        if (root->data < data) {
            if (!root->right) root->right = CreateNode(data);
            else InsertHelper(root->right, data);
        }
    }
    void Inorder(std::unique_ptr<Node>& root) {
        if (!root) return;
        Inorder(root->left);
        std::cout<<root->data<<std::endl;
        Inorder(root->right);
    }
    void PrintTree() {
        Inorder(root);
    }
};