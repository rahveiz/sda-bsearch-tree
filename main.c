/*
 * Projet SDA2 2018
 * LAJARGE Cyril & HENG Paul
 * L2 CMI IIRVIJ
 */

#include <string.h>
#include "orderedSet.h"
#include "binary_tree.h"

int main() {
    // Tests orderedSet
    ordSet s1 = initOrderedSet();
    insertValue(&s1, 1);
    insertValue(&s1, 4);
    insertValue(&s1, 2);
    insertValue(&s1, 3);
    insertValue(&s1, 6);
    printOrderedSet(s1);
    printf("\n");
    printNbElt(s1);
    printContains(s1, 2);
    printContains(s1, 12);

    ordSet s2 = initOrderedSet();
    insertValue(&s2, 4);
    insertValue(&s2, 2);
    insertValue(&s2, 7);
    insertValue(&s2, 42);

    /******************************/


    // Tests binary_tree
    
    bTree* t1 = initBinarySearchTree();
    strcpy(t1->c.mot,"lili");
    t1->c.positions=s1;
    addNodeLeft(t1,"lili",s1);
    addNodeRight(t1,"lolo",s2);
    printf("%d\n",getNumberString(t1));
    printBinarySearchTree(t1,1);
    freeBinarySearchTree(t1);
    

    freeOrderedSet(&s1);
    freeOrderedSet(&s2);
    //freeOrderedSet(s3);
    return 0;
}
