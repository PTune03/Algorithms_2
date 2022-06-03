
#include "TestsLinkedList.hpp"
#include "TestsArraySequence.hpp"
#include "TestsDynamicArray.hpp"
#include "TestsListSequence.hpp"

void tests()
{
    LinkedListTests::allTestsTogether();
    ListSequenceTests::allTestsTogether();
    ArraySequenceTests::allTestsTogether();
    DynamicArrayTests::allTestsTogether();
}
