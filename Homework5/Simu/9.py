import numpy as np

List = [6,3,5,4,9,8]
N = len(List);
B = np.zeros((N,));
for i in range(0,N):
	if(List[i]<=List[N-1]):
		B[i] = 1;

for i in range(N,-1,-1):
	#print(i)
	for j in range(i,N):
		if(List[i]>List[j]):
			#print(B[j],B[i]);
			if(B[j]+1>B[i]):
				B[i] = B[j]+1;

print(B)