#include "tree.h"
#include <stdbool.h>
#include <stdlib.h>


bool search(node* n, int v){
     if (n == NULL) {
        return false;
    }
    if(n->bookid == v){
        return true;
    }
    if(v > n->bookid){
        return search((n->childright), v);
    }
    else{
        return search(n->childleft, v);
    }
}


void placerec(int bookid, node* parent){
    if(parent == NULL){
        node* newnode = malloc(sizeof(node));
        newnode->bookid=bookid;
        newnode->childleft=NULL;
        newnode->childright=NULL;
        

    }
    else{
        if(bookid<parent->bookid){
           placerec(bookid, parent->childleft);
        }
        if(bookid>parent->bookid){
            placerec(bookid, parent->childleft);
        }
    }
}

