
def binarySearch(a, b):
	# search b in sequence a
	low = 0
	high = len(a) - 1
	while low <= high:
		mid = (low + high) / 2
		if a[mid] < b:
			low = mid + 1
		elif a[mid] > b:
			high = mid - 1
		else:
			return mid  # Hah, we found it!
	return -1 # Eh, not found..

def test():
	# the testCase must be sorted, ortherwise,
	# we should sort it first
	testCase = [0, 2, 5, 7, 12, 24, 62, 82]
	bee = 62 # index = 6
	index = binarySearch(testCase, bee)
	if index == -1:
		print "Not found"
		return
	else:
		print "We found it!\n Index = %s" % index


if __name__ == "__main__":
	test()