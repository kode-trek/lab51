import os
import sys

os.system('sudo apt-get install -y subversion')

v1 = sys.argv[1]

fh=open('tmp', 'w')
fh.write(v1)
fh.close()

os.system('bash find_replace.sh > tmp2')

fh = open('tmp2')
v1 = fh.readline()
fh.close()

cmd = 'svn checkout ' + v1
os.system(cmd)

os.system('rm tmp')
os.system('rm tmp2')

#example
#python src.py <url>
