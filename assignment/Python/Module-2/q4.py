"""
In Python, memory is managed automatically using several key mechanisms:

1. **Reference Counting**: Python tracks how many variables reference an object. When an object's reference count drops to zero, its memory is deallocated.

2. **Garbage Collection**: Python uses a garbage collector to handle circular references (when objects reference each other) that reference counting cannot clean up.

3. **Memory Allocation**: Python’s memory manager handles allocation and deallocation of memory for objects, using specialized allocators (like the heap) for efficient memory use.

4. **Generational Garbage Collection**: Objects are categorized into generations based on their lifespan, and older objects are garbage collected less frequently to optimize performance.

Python combines these mechanisms to efficiently manage memory, freeing developers from manual memory management.
"""