#http://docs.cython.org/en/latest/src/userguide/memoryviews.html

from cython.view cimport array as cvarray
import numpy as np

def cvec(arg1):
	cdef long [:] narr_view = arg1
	return narr_view

# 10 000 000
v = np.arange(10000000)
v = cvec(v)

for i in range(len(v)):
	if (2 < i) and (i < 4):	print i
