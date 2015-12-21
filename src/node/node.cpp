#include "node/node.h"

#include <assert>

namespace ursus {
namespace node {

Branch Node::GetBranch(ui offset) const {
  return branches[offset];
}

ui Node::GetBranchCount(void) const {
  return branches.size();
}

NodeType Node::GetNodeType(void) const {
  return node_type;
}

ui Node::GetLevel(void) const {
  return level;
}

void Node::SetNodeType(NodeType type) {
  assert(type);
  node_type = type;
}

void Node::SetLevel(ui _level) {
  level = level;
}

} // End of node namespace
} // End of ursus namespace
