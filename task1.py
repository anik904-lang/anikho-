def f(x):
    return x**3 - 4*x - 9

a = float(input())
b = float(input())

for i in range(100):
    c = (a*f(b) - b*f(a)) / (f(b) - f(a))
    
    print(i+1, a, b, c, f(c))
    
    if abs(f(c)) < 1e-5:
        break
    
    if f(a)*f(c) < 0:
        b = c
    else:
        a = c

print("Root =", c)