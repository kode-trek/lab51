from sys import exit
from sys import argv
from time import sleep

try:
	c = 10
	while(c > 0):
		c -= 1
		if		c == int(argv[1]):
			print 'warning received!'
			print 'count down held at t-' + str(c)
			break
		elif	c == 0:
			print 'shuttle launched!'
			break
		else:
			print c
		sleep(1)
except:
	print ''
	exit()
