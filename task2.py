import math

def f(x):
    return math.exp(-x) - x

def df(x):
    return -math.exp(-x) - 1

a, b = 0, 1
for i in range(50):
    c = (a*f(b) - b*f(a)) / (f(b) - f(a))
    if abs(f(c)) < 1e-6:
        break
    if f(a)*f(c) < 0: 
        b = c
    else:
        a = c

print("Regula Root:", c, "Iter:", i+1)

x = 0.5
for j in range(50):
    x1 = x - f(x)/df(x)
    if abs(x1 - x) < 1e-6:
        break
    x = x1

print("Newton Root:", x, "Iter:", j+1)