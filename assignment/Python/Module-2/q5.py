""""
The `continue` statement in Python is used to **skip the current iteration** of a loop and move on to the next iteration. It allows the loop to continue running without executing the remaining code in that iteration.

### Example:
```python
for i in range(5):
    if i == 2:
        continue
    print(i)
```
Output:
```
0
1
3
4
```
In this example, the value `2` is skipped due to the `continue` statement.
"""