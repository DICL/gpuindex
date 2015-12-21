#pragma once

#include "common/global.h"
#include "common/types.h"

namespace ursus {
namespace node {

typedef class G_Node* G_Node_Ptr;

class G_Node{
 public:
 //===--------------------------------------------------------------------===//
 // Consteructor/Destructor
 //===--------------------------------------------------------------------===//

 //===--------------------------------------------------------------------===//
 // Accessor
 //===--------------------------------------------------------------------===//
 NodeType GetNodeType(void) const;
 ui GetLevel(void) const;

 void SetPoint(ui offset, Point point);
 void SetIndex(ui offset, ull index);
 void SetChild(ui offset, G_Node_Ptr child);
 void SetNodeType(NodeType type);
 void SetLevel(ui level);
 void SetBranchCount(ui branch_count);

 //===--------------------------------------------------------------------===//
 // Members
 //===--------------------------------------------------------------------===//
 private:
  // transformed branches
  Point point[GetNumberOfDims()*2*GetNumberOfDegrees()];
  ull index[GetNumberOfDegrees()];
  G_Node_Ptr child[GetNumberOfDegrees()];

  // node type
  NodeType node_type = NODE_TYPE_INVALID;

  // distance from root
  ui level;

  // branch_count
  ui branch_count;
};

} // End of node namespace
} // End of ursus namespace
