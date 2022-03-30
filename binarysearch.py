"""
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


the following code shows the particular error while running
Traceback (most recent call last):
File "<string>", line 16, in <module>
File "<string>", line 6, in solution
these error occured due to if statement wrongly written syntaxically
"""
#the correctly working code
def solution(arr, tar):
  l = len(arr)-1
  mid = int(l/2)
  i=0
  while(True):
      if(tar<arr[mid]):
          l=mid
      elif(tar>arr[mid]):
          i=mid
      else:
        return mid
      mid = int((l+i)/2)
      i=i+1
arr=[2,5,8,12,16,20,38,56,72,91]
tar=72
print("location of the search unit is", solution(arr,tar))
