#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

node* create() {
    int x;

    cout << "Enter data: ";
    cin >> x;

    node* new_node = new node;
    new_node->data = x;

    char choice;

    cout << "Do you want a left child of " << x << "? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        new_node->left = create();
    }
    else {
        new_node->left = nullptr;
    }

    cout << "Do you want a right child of " << x << "? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        new_node->right = create();
    }
    else {
        new_node->right = nullptr;
    }

    return new_node;
}
void pretraverse(node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    pretraverse(root->left);
    pretraverse(root->right);
}

void posttraverse(node* root) {
    if (root == nullptr) {
        return;
    }

    posttraverse(root->left);
    posttraverse(root->right);
    cout << root->data << " ";
}

void inordertraverse(node* root) {
    if (root == nullptr) {
        return;
    }

    inordertraverse(root->left);
    cout << root->data << " ";
    inordertraverse(root->right);
}

int main() {
    node* root = create();

    cout << "Preorder traversal: ";
    pretraverse(root);
    cout << endl;

    cout << "Postorder traversal: ";
    posttraverse(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inordertraverse(root);
    cout << endl;

    return 0;
}
