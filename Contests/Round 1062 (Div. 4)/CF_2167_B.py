t = int(input())
for i in range(t):
  n=int(input())
  s,t=map(str,input().split())
  ass = list(s)
  att = list(t)
  ass.sort()
  att.sort()

  s = "".join(ass)
  t = "".join(att)

  if s in t:
    print("YES")
  else:
    print("NO")