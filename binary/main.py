'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world'''
def fun(k):
    if(k==0):
        return 0
    else:
        return (k%2 + 10*(fun(int(k/2))))
k=3
print(fun(k))

'''
def find( decimal_number ): 
	if decimal_number == 0: 
		return 0
	else: 
		return (decimal_number % 2 + 10 *
				find(int(decimal_number / 2))) 

# Driver Code 
decimal_number = 5
print(find(decimal_number))'''