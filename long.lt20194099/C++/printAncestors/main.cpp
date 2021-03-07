#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void printAncestors(Node *root, int key) {
    stack<Node *> contain;
    while (1) {
//        duyệt các node trái
        while (root && root->data != key) {
            contain.push(root);
            root = root->left;
        }
//        nếu tìm thấy key thì break
        if (root && root->data == key) {
            break;
        }

//        nếu không có cấy con phải thì xóa node khỏi stack
        if (contain.top()->right == NULL) {
            root = contain.top();
            contain.pop();

//            nêú node xóa là con phải của top mà node phải là node duyết sau cùng vì vậy top cũng không
//            thể là key được nên xóa luôn
            while (!contain.empty() && contain.top()->right == root) {
                root = contain.top();
                contain.pop();
            }
        }

//        chuyển sang câý con phải
        if (!contain.empty())
            root = contain.top()->right;
        else root = NULL;
    }

    while (!contain.empty()) {
        cout << contain.top()->data << " ";
        contain.pop();
    }
}

int main() {
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->right->right = newNode(9);
    root->right->right->left = newNode(10);

    printAncestors(root, 10);
}