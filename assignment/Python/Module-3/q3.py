"""
Here’s a brief differentiation between the `append()` and `extend()` methods in Python lists:

### `append()`
- **Purpose**: Adds a single element to the end of the list.
- **Usage**: Can add any object, including another list.
- **Effect on List**: The entire element (including lists) is added as a single item.
  
**Example**:
```python
my_list = [1, 2, 3]
my_list.append([4, 5])
print(my_list)  # Output: [1, 2, 3, [4, 5]]
```

### `extend()`
- **Purpose**: Adds each element of an iterable (like a list) to the end of the list.
- **Usage**: Only accepts iterables (e.g., lists, tuples, strings).
- **Effect on List**: Each element from the iterable is added individually.

**Example**:
```python
my_list = [1, 2, 3]
my_list.extend([4, 5])
print(my_list)  # Output: [1, 2, 3, 4, 5]
```
"""