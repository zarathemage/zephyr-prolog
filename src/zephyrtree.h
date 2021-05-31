#ifndef __ZEPHYRTREE_H_
#define __ZEPHYRTREE_H_

#include "zephyrrule.h"

typedef struct zephyrtree_ {

  Variable var;
  
  ZephyrTreePtr left;
  ZephyrTreePtr right;
} ZephyrTree;

typedef ZephyrTree *ZephyrTreePtr;

ZephyrTreePtr make_zephyr_tree(ZephyrTreePtr zt);

// build the BST with the rulers array
void build_zephyr_tree(ZephyrRule *rules, int len, ZephyrTreePtr ztroot);

#endif
