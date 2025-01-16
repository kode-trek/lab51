def f(x):
 # task(s)
 for i in x: print(i * 2)
 print (x)
 print ()
 # loop
 if len(x) == 0: return [] # init
 else:
  x.pop() # step
  return (f(x))

x = [1, 2, 3, 4, 5]
f(x)
