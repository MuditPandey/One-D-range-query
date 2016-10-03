#ifndef NODE_H
#define NODE_H

class node
{
 public:
 long long int num;
 node *left;
 node *right;
 node *parent;
 int type;   
 int height;
 static node* newnode(long long int);
 static int isLeaf(node *);
 static void reportsubtree(node *);
};

#endif
