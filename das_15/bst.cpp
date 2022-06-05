#include <iostream>
using namespace std;

class Node
    {
        public:
            int value;
            Node* left;
            Node* right;
                
            Node(int x)
            {
                value = x;
                left = nullptr;
                right = nullptr;
            }
    }; 

    class BST
    {
        private:
            Node* root = nullptr;

            void add(int x, Node* temp)
            {
                if(root == nullptr)
                {
                    root = new Node(x);
                }
                else if(x < root->value)
                {
                    
                }
                else if(x > root->value)
                {

                }
                else
                {

                }
            }

        public:
            bool is_empty(void)
        {
            if(root == nullptr)
            {
                return true;
            }
            else return false;
        }

        void add(int x)
        {
            add(x, root);
        }
    };

    int main()
    {
        return 0;
    }