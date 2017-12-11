#include <iostream>
#include <typeinfo>
#include "boost/graph/adjacency_list.hpp"

using namespace boost;

int main()
{
  adjacency_list<> g;
  
  adjacency_list<>::vertex_descriptor v1 = add_vertex(g);
  adjacency_list<>::vertex_descriptor v2 = add_vertex(g);
  adjacency_list<>::vertex_descriptor v3 = add_vertex(g);
  adjacency_list<>::vertex_descriptor v4 = add_vertex(g);
  
  typedef adjacency_list<>::vertex_iterator iterator;
  std::pair<iterator, iterator> p = vertices(g);

  for (auto it = p.first; it != p.second; it++)
    std::cout << *it << std::endl;

  std::cout << typeid(v1).name() << std::endl;
  
  return 0;
}
