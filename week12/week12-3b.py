n = int(input('�п�J1�Ӽ�'))
def isPrime(n):
  for i in range(2,n):
    if n%i==0:
      return False
  return True
ans = 0
for i in range(2,n+1):
    if isPrime(i): print(i, end=' ')
        ans += 1
