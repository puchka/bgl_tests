#include <iostream>
#include <typeinfo>
#include <utility>
#include "boost/graph/adjacency_list.hpp"

using namespace boost;

int main()
{
  adjacency_list<> g;
  
  adjacency_list<>::vertex_descriptor v1 = add_vertex(g);
  adjacency_list<>::vertex_descriptor v2 = add_vertex(g);
  adjacency_list<>::vertex_descriptor v3 = add_vertex(g);
  adjacency_list<>::vertex_descriptor v4 = add_vertex(g);

  std::pair<adjacency_list<>::edge_descriptor, bool> r;

  r = add_edge(v1, v2, g);
  r = add_edge(v2, v3, g);
  r = add_edge(v3, v4, g);
  r = add_edge(v4, v1, g);
  
  auto p = edges(g);
  for (auto it = p.first; it != p.second; ++it)
    std::cout << *it << std::endl;
  
  return 0;
}
