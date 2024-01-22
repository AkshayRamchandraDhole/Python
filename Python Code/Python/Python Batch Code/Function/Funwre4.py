def kaviroom():
	def kavi():
		print('Kavi')
	def navi():
		print('Navi')
	def niti():
		print('Niti')
	return kavi,navi,niti
x=kaviroom()
print(x)
for i in x:
	i()
