#http://docs.cython.org/en/latest/src/userguide/memoryviews.html
from cython.view cimport array as cvarray
import numpy as np
# an array of 10,000,000 elements
v = np.arange(10000000)
# converts to an c-array.
def f1(arg1):
	cdef long [:] narr_view = arg1
	return narr_view
#
v = f1(v)
# extracts numbers 2000~2006 among 10,000,000 elements.
for i in range(len(v)):
	if (2000 < i) and (i < 2006):
		print i,
