def ip(string):
	d=0
	p=[]
	l=list(string)
	for i in range(len(l)):
		if d==3:
			d=0
			p.append('.')
		p.append(l[i])
		d+=1
	return(''.join(r))
	
 def f():
	fin=[]
	st=input('Enter your address:\n')
	str=list(st)
	str.insert(3,".")
	str.insert(7,".")
	str.insert(10,".")
	fin.append( (''.join(str)))
	fin.append(ip(st))
	print(fin)
