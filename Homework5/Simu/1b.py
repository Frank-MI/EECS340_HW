import numpy as np
W = 18;
n = 7;
b = [0,12,10,8,11,14,7,9];
w = [0,4,6,5,7,3,1,6];
B = np.zeros((W+2,));
#print(B.shape)
'''
for i in range(0,W+1):
	B[i] = 0;
'''
for k in range(1,n+1):
	for i in range(W+1,w[k],-1):
		print(i-w[k],k,i);
		if(B[i-w[k]]+b[k]>B[i]):
			B[i] = B[i-w[k]]+b[k];

for i in B:
	print(i," ");
