
def MaxSubsequenceSum(a):
    max = 0
    for i in range(0, len(a)):
            for m in range(0, len(a)):
                thisSum = 0;
                for k in range(0, len(a)):
                    thisSum += a[k]
                    if thisSum > max:
                        max = thisSum
                        maxLeft = i
                        maxRight = k
    print max
    print "Max left: %s" % maxLeft
    print "Max right: %s" % maxRight


def test():
    testCase = [2, 4, -3, 12, 20]
    MaxSubsequenceSum(testCase)


if __name__ == "__main__":
    test()

"""
Output:
	35
	Max left: 0
	Max right: 4
"""