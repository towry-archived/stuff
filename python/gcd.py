
def gcd(a, b):
	rem = 0

	while b > 0:
		rem = a % b 
		a = b 
		b = rem 
	return a

def test():
	testCase = [50, 15]
	a, b = testCase
	rem = gcd(a, b)
	print "Rem = %s" % rem 

if __name__ == "__main__":
	test()