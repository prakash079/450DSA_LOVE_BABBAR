#Link-https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

#solution

#code
for _ in range(int(input())):
    n=int(input())
    arr=[int(x) for x in input().split()]
    k=int(input())
    arr.sort()
    print(arr[k-1])
