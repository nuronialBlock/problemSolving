asc = [1,2,3,4,5,6,7,8]
des = [8,7,6,5,4,3,2,1]
atc = []

val = map(int, raw_input().split())

cnt = 0
for i in range(0,8,1):
	if(asc[i] == val[i]):
		cnt+=1
		
got = 0
if(cnt == 8):
	print "ascending"
	got = 1
	
cnt = 0 
for i in range(0,8,1):
	if(des[i] == val[i]):
		cnt+=1

if cnt == 8 and got == 0 :
	print "descending"
elif cnt != 8 and got == 0 :
	print "mixed"
