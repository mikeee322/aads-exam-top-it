#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <cstddef>

namespace lachugin
{
  template< class T >
  struct Vector
  {
    T* data;
    size_t size;
    size_t capacity;
  };
}

#endif

