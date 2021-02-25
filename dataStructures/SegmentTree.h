#include <vector>

#ifndef ACM_SEGMENTTREE_H
#define ACM_SEGMENTTREE_H

struct SegmentTreeNode;

class SegmentTree {
    int * arr;
    SegmentTreeNode * tree;
    int n;

public:
    SegmentTree(int arrsize, int * arr = nullptr);
    ~SegmentTree();
    int rangeQuery(int from, int to);
    int rangeSet(int from, int to, int value);
    int rangeAdd(int from, int to, int delta);

private:
    void buildTree();
    void freeTree(SegmentTreeNode *pNode);
    void sanitizeRange(int from, int to);
};

struct SegmentTreeNode {
    SegmentTreeNode * left;
    SegmentTreeNode * right;
    SegmentTreeNode * parent;
    int value;
};


#endif //ACM_SEGMENTTREE_H
