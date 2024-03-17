#include <stack>
#include <string>
#include <iostream>

typedef struct Node
{
    char data;
    bool flag;
    struct Node *left;
    struct Node *right;
} node, *tnode;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void preOrder(tnode root)
{
    if (root)
    {
        std::cout << root -> data;
        preOrder(root -> left);
        preOrder(root -> right);
    }
}

void inOrder(tnode root)
{
    if (root)
    {
        inOrder(root -> left);
        std::cout << root -> data;
        inOrder(root -> right);
    }
}

int main(void)
{
    std::stack<tnode> s;
    std::string str;
    std::cin >> str;
    int i = str.size() - 1;
    for (; i >= 0; i--)
    {   
        //std::cout << str[i] << std::endl;
        tnode node = new Node;
        node -> data = str[i];
        node -> left = node -> right = NULL;
        if (!isOperator(str[i]))
        {
            node -> flag = true;
            while (!s.empty() && (s.top() -> flag))
            {
                tnode tmpnode = s.top();
                s.pop();
                s.top() -> flag = true;
                s.top() -> right = tmpnode;
                s.top() -> left = node;
                node = s.top();
                s.pop();
            }
            
            s.push(node);
        }
        else
        {
            node -> flag = false;
            s.push(node);
        }
    }

    tnode root = s.top();
    s.pop();
    preOrder(root);
    std::cout << std::endl;
    inOrder(root);
    std::cout << std::endl;
    return 0;
}