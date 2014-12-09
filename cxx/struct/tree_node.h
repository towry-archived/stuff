#ifndef _TREE_NODE_H
#define _TREE_NODE_H

#include "leaf.h"

struct tree_node {
  struct leaf leaf_v;
  unsigned long size;
};
#endif
