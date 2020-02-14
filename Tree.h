/**
 * Binary Search Tree Class
 * Completed by [Your Name]
 */

#ifndef BinarySearchTree_H
#define BinarySearchTree_H

#include <iostream>
#include <fstream>
#include <functional>

using namespace std;
template<class T> class BinarySearchTree
{
    public:
    BinarySearchTree() {root = nullptr;}
    //destructor
    ~BinarySearchTree() {
        // deleteTree(root);
        // implement destructor by using filter
    }
    void insert(const T &t); // TODO
    void display() const
    {
        int level=0;
        _display(root,level);
    }
    void inOrderTraverse(vector<T>& vec) const; //TODO
    void deleteNode(const T &t); //TODO
    void forEachInterval(const T &a, const T&b, function<void (const T)> func) const; //TODO
    void filter(function<bool (const T)> isIn); //TODO
    bool verifyBinarySearchTree() const; //TODO
    

    private:
        // class Node (you can modify,but it is not necessary)
        // The nested node class for objects in our tree.
        struct Node
        {
                friend class BinarySearchTree;

                Node() {m_ll = nullptr;  m_rl = nullptr;}

                Node(const T &t) {m_num = t;  m_ll = nullptr;  m_rl = nullptr;}
                Node(const T &t, Node * l, Node *r) : m_num{t}, m_ll{l}, m_rl{r} {}

                T &data() {return m_num;}

                const T &data() const {return m_num;}

                Node    *m_ll;
                Node    *m_rl;
                T       m_num;
        };

     Node *root;

    //internal method; do not change this function
    void _display(Node *p,int level) const
    {
        if (p ==nullptr) return;
        level++;
        if (p->m_rl != nullptr)
        {
            _display(p->m_rl,level);
        }
        for (int i = 0; i <= level; i++)
        {
            cout<<"    ";
        } 
        cout << "__" << p->data()<<endl;
        if (p->m_ll != nullptr)
        {
            _display(p->m_ll, level);
        }
    }
 
    // ADD private methods to help complete implementation
};


#endif
