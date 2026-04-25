x = [0,1,2,3,4]
y = [1,3,7,13,21]

p = 1.5
yf = 1 + p*(2) + p*(p-1)/2*(2)
print("Forward:", yf)

p = 3.5 - 4
yb = 21 + p*(8) + p*(p+1)/2*(2)
print("Backward:", yb)