
def solution(arr,tar):
    
    for i in range(arr):
        if i == tar:
            return i 
    return -1

arr=[10,14,19,26,27,31,33,35,42,44]
tar=33
print(solution(arr,tar))
#this code doesn't work properly tho....!
