#this is a program for swapping without any temperary variable
a = 40
b = 60
if b>a:
    b=b-a
    a=b+a
    b=a-b
else:
    a=a-b
    b=a+b
    a=b-a
print("values of a is ",a,"and b is",b)