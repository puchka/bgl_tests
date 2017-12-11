#include <iostream>
#include <typeinfo>
#include <utility>
#include "boost/graph/adjacency_list.hpp"

using namespace boost;

int main()
{
  adjacency_list<vecS, vecS, undirectedS> g;

  enum { topLeft, topRight, bottomRight, bottomLeft };
  
  add_edge(topLeft, topRight, g);
  add_edge(topRight, bottomRight, g);
  add_edge(bottomRight, bottomLeft, g);
  add_edge(bottomLeft, topLeft, g);
  
  auto p = edges(g);
  for (auto it = p.first; it != p.second; ++it)
    std::cout << *it << std::endl;
  
  return 0;
}
