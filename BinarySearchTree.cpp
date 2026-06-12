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

    