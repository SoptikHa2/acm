#include <stdexcept>
#include "SegmentTree.h"

SegmentTree::SegmentTree(int arrsize, int *arr) {
    if(arr == nullptr) {
        this->arr = new int[arrsize];
    } else {
        this->arr = arr;
    }
    this->n = arrsize;

    buildTree();
}

void SegmentTree::sanitizeRange(int from, int to) {
    if ( from < 0 ) throw std::invalid_argument("from cannot be negative");
    if ( to < 0 ) throw std::invalid_argument("to cannot be negative");
    if ( from > to ) throw std::invalid_argument("from cannot be higher than to");
    if ( to >= n ) throw std::invalid_argument("to cannot be that high, out of range of initial array");
}

int SegmentTree::rangeQuery(int from, int to) {
    sanitizeRange(from, to);
    return 0;
}

int SegmentTree::rangeSet(int from, int to, int value) {
    sanitizeRange(from, to);
    return 0;
}

int SegmentTree::rangeAdd(int from, int to, int delta) {
    sanitizeRange(from, to);
    return 0;
}

SegmentTree::~SegmentTree() {
    delete [] arr;
    freeTree(tree);
}

void SegmentTree::freeTree(SegmentTreeNode * tree) {
    if(!tree) return;

    freeTree(tree->left);
    freeTree(tree->right);
    delete tree;
}

