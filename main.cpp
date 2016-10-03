#include <iostream>
#include  <stdio.h>>
#include "bal_bst.h"
#include "node.h"
#include "oned_range.h"
#include "utility.h"

using namespace std;

int main(int argc, char** argv) 
{
 node *root=NULL;                      //Initialising the root of the tree
 long long int n;
 cout<<"Enter the number of values:";
 cin>>n;
 cout<<"Enter values:";
 for(long long int i=1;i<=n;i++)
 {
  	long long int x;
  	scanf("%lld",&x);
  	root=bal_bst::insert(root,x);
 }
 oned_range::mkrangetree(root);
 long long int p,q;
 cout<<"Enter the range [x:x'] :";
 scanf("%lld%lld",&p,&q);
 cout<<"The values in this range are:"<<endl;
 oned_range::rangequery(root,p,q);
 return 0;
}
