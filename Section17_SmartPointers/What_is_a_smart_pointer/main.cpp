//WHAT IS A SMART POINTER

/*
Raw Pointers allow absolute flexibility with memory management:
- allocation
- deallocation
- lifetime management

Some potentially issues that can be caused by raw pointersL
- uninitialized raw(wild) pointers  - pointers pointing anywhere
- memory leaks - forgetting to deallocate allocated memory
- dangling pointers - pointers pointing to an address it does not know is invalid  (got deleted meanwhile)
- not exception safe (no exception occurs when allocation raw pointers )

Smart pointers:
- are objects
- smart pointers can only point to heap memory
- Types of smart pointers:
  unique pointers (unique_ptr)
  shared pointers (shared_ptr)
  weak pointers (weak_ptr)
   
    #include <memory>
          
           * -defined by class templates
           * a smart pointer is a wrapper around a raw pointer
           * Operators:
           * dereference (*)
           * Member selection (->)
           * Pointer arithmetic is not permitted (++,--)
  
   {

std::smart_pointer<Some_Class> my_smart_pointer=...

my_smart_pointer->method1();

std::cout<<(*my_smart_pointer)<<std::endl;

   }

//smart pointers do not need to be deleted manually. They are deleted automatically from the heap when no longer needed.


*/


}






int main()
{
    
    return 0;
}