"""
### What is a List?
A **list** is a collection in Python that can store multiple items in an ordered sequence. Lists are **mutable**, meaning you can change their contents.

### How to Reverse a List:
1. **Using `reverse()` method** (modifies list in place):
   ```python
   my_list.reverse()
   ```

2. **Using slicing** (creates a new list):
   ```python
   reversed_list = my_list[::-1]
   ```

3. **Using `reversed()` function** (returns an iterator):
   ```python
   reversed_list = list(reversed(my_list))
   ```
"""