#ifndef ALGORITHMS_MSDRADIXSORT_H
#define ALGORITHMS_MSDRADIXSORT_H
#include "node.h"
class MSDRadixSort {
    Node* root;
    int iterator;
    static Node* createNode();
    int maxDigit();
    void sortHelper(Node*, int, vector<int>&);
public:
    MSDRadixSort(): root(createNode()), iterator(0){}
    void insert(int);
    void print();
    void sort();
};


#endif //ALGORITHMS_MSDRADIXSORT_H
