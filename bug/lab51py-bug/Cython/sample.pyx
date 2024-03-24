from cython.view cimport array as cvarray

import numpy as np

v = np.arange(10000000)

def f1(arg1):
	cdef long [:] narr_view = arg1
	return narr_view

v = f1(v)

for i in range(len(v)):
	if (2000 < i) and (i < 2006):
		print i,
