#Thanks to the numpy module the following line stablish an array structure:

#v = np.arange(10000000)

#10000000 variables of the same size and type.

#We need to pass this vector to the C ompiler so we would be able to process
#that using a C for-loop and so decrease the runtime. To do so, we could just
#have a view of the associated memory, reading the buffer:

#def f1(arg1):
#	cdef long [:] narr_view = arg1
#	return narr_view

#The complete pattern wold be:

#cdef <type> [<dim>] <c-arr> = <numpy-arr>

#The default value for <type> is long, however we may pass the <dtype> of the
#numpy-array as well. Then again, the number of <:> designates the shape
#(dimension) of the n-array. For another example [:, :, :] defines a 3D-array.

#Now let's try a for-loop in clean python syntax and consoder the runtime:

#for i in range(len(v)):
#	if	(2000 < i) and (i < 2006):
#		print i,

#[img]

#The runtime decreased signifantly, about 7 times faster for this example. very
#close result if we had this code compiled by an actual C conpiler (ex. gcc):

#[snippet]

#Therefore, we gain both goals that we were looking for:
#	clean syntax
#	fast execution

#The complete code that goes inside a <.pyx> is as follows. never forget the
#first 2 lines:

from cython.view cimport array as cvarray
import numpy as np

v = np.arange(10000000)

def f1(arg1):
	cdef long [:] narr_view = arg1
	return narr_view

v = f1(v)

for i in range(len(v)):
	if	(2000 < i) and (i < 2006):
		print i,

#Using laboratory platform would generate the <.so> module alongside a <.py>
#script:

#laboratory --turbo <.pyx>

#Make sure to use that 'time' command to have the exact user-runtime:

#time laboratory python <.py>
