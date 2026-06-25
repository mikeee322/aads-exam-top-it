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

  template< class T >
  void initVector(Vector< T >& vector);

  template< class T >
  void pushBack(Vector< T >& vector, const T& value);

  template< class T >
  void resizeVector(Vector< T >& vector);

  template< class T >
  void clearVector(Vector< T >& vector);
}

#endif

