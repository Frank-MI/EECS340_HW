import numpy as np;
B = np.zeros((9,));
P=[0,0,1,2,0,3,5,6];
b=[5,4,7,2,3,5,7,5];


for i in range(0,8):
	B[i] = max(B[i-1],B[P[i]]+b[i]);

for i in B:
	print(i);