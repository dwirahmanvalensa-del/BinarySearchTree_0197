#include <iostream>
using namespace std;

//membuat class node
class Node {

//memberi akses modifier serta mendeklarasikan variabel dan object node
public:
    string info;
    Node* leftChild;
    Node* rightChild;

    //membuat constructor untuk class node
    Node(string i, Node* l, Node* r) {
        info = i;
        leftChild = l;
        rightChild = r;
    }
};

//membuat class binarytree
class BinaryTree {

//memberi akses modifier serta mendeklarasikan variabel dan object node 
public:
    Node* ROOT;

    //membuat constructor dan memberi nilai kepada object root
    BinaryTree() {
        ROOT = nullptr;
    }

    //membuat prosedur insert
    void insert(string element) {
        //memberi nilai untuk setiap object yang berada didalam prosedur insert
        Node* newNode = new Node(element, nullptr, nullptr);
        newNode->info = element;
        newNode->leftChild = nullptr;
        newNode->rightChild = nullptr;

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode);

        //membuat conditional statement 
        if (parent == NULL){
            ROOT = newNode;
            return;
        }

        if (element < parent->info){
            parent->leftChild = newNode;
        }

        else if (element > parent->info){
            parent->rightChild = newNode;
        }
    }

    void search(string element, Node *&parent, Node *&currentNode)
    {
        currentNode = ROOT;
        parent = NULL;

        while((currentNode != NULL) &&
            (currentNode->info != element))
            {
                parent = currentNode;

                if (element < currentNode->info)
                    currentNode = currentNode->leftChild;
                else
                    currentNode = currentNode->rightChild;
        }
    } 

    