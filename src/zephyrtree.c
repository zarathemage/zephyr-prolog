#include "zephyrtree.h"

#include <stdlib.h>

ZephyrTreePtr make_zephyr_tree(ZephyrTreePtr zt)
{
  zt = (ZephyrTreePtr)malloc(sizeof(ZephyrTree));
  zt->left = NULL;
  zt->right = NULL;

  return zt;
}

void build_zephyr_tree(ZephyrRule *rules, int len, ZephyrTreePtr ztroot)
{
  
}
