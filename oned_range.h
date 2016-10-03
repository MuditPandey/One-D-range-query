#ifndef ONED_RANGE_H
#define ONED_RANGE_H
#include "node.h"

class oned_range
{
	public:
	static node* splitnd(node *,long long int,long long int);
    static void rangequery(node *,long long int,long long int);
    static void mkrangetree(node *);  
};

#endif
