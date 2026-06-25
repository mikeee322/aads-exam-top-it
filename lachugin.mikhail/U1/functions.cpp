#include "functions.hpp"
namespace lachugin
{
  void pushBack(Person*& persons, size_t& size, size_t& capacity, const Person& person)
  {
    if (size == capacity)
    {
      size_t newCapacity = (capacity == 0) ? 1 : capacity * 2;
      Person* newPersons = new Person[newCapacity];
      for (size_t i = 0; i < size; i++)
      {
        newPersons[i] = persons[i];
      }
      delete[] persons;
      persons = newPersons;
      capacity = newCapacity;
    }
    persons[size] = person;
    size++;
  }

  bool containsId(const Person *persons, size_t size, size_t id)
  {
    for (size_t i = 0; i < size; i++)
    {
      if (persons[i].id == id)
      {
        return true;
      }
    }
    return false;
  }


}
