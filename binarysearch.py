def solution(arr, tar):
  l = len(arr)-1
  mid = l/2
  i=0
  for i in range(l):
      if(arr[i]<arr[mid]):
          l=mid
      elif(arr[i]>arr[mid]):
          i=mid
      else:
        return i
  
  
arr=[2,5,8,12,16,20,38,56,72,91]
tar=38
print("location of the search unit is", solution(arr,tar))

"""
the following code shows the particular error while running
Traceback (most recent call last):
File "<string>", line 16, in <module>
File "<string>", line 6, in solution
"""

