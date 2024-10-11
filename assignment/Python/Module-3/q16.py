# Write a Python program to check whether a list contains a sub list

list=[1,2,3,4,5,6]
sub_list=[2,3,5]

len_list=len(list)
len_sub=len(sub_list)

if sub_list == list:
    for i in list:
        if i in sub_list:
            print("main list contain to sub_list")
        else:
            print("not")
    