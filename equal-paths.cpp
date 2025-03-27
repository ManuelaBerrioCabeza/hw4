#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
bool leafpaths(Node* curr, int currDepth, int& targetDepth){
    if(curr == nullptr){
        return true;
    }

    if (curr->left == nullptr && curr->right == nullptr){
        if(targetDepth == -1){
            targetDepth=currDepth;
            return true;
        }
        return currDepth==targetDepth;
    }

    return leafpaths(curr->left, currDepth+1, targetDepth) && leafpaths(curr->right, currDepth+1, targetDepth);
}

bool equalPaths(Node * root)
{
    // Add your code below
    int targetDepth=-1;
    return leafpaths(root, 0, targetDepth);

}

