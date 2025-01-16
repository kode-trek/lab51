from os import system as s
from os import mkdir
from os import path
from os import remove

from sys import argv
from sys import exit

from shutil import move
from shutil import rmtree

from random import random

def fname(arg1):
	if '/' in arg1:	arg1 = arg1.split('/')[-1]
	ext = arg1.split('.')[-1]
	rest = arg1.split('.')[:-1]
	rest2 = ""
	for i in rest:	rest2 += i + '.'
	fname = rest2[:-1]
	return (fname, ext)

if len(argv) < 2:
	print 'Invalid number of arg(s).'
	exit()

fn = fname(argv[1])[0]
ext = fname(argv[1])[1]

if not path.exists(argv[1]):
	print 'No such file:', fn + '.' + ext
	exit()

if ext != 'pyx':
	print 'The source-code is NOT a <.pyx> file.'
	exit()
if path.exists('build'):
	print 'The workspace is NOT SAFE. The <build/> exists.'
	exit()
if '.' in fn:
	print '<' + fn + '> naming is NOT SAFE. Avoid extra dots.'
	exit()
if path.exists(fn):
	print 'The workspace is NOT SAFE.', 'The <' + fn + '> exists.'
	exit()
if path.exists(fn + '.so'):
	print 'The workspace is NOT SAFE.', 'The <' + fn + '.so> exists.'
	exit()
if path.exists(fn + '.c'):
	print 'The workspace is NOT SAFE.', 'The <' + fn + '.c> exists.'
	exit()
if path.exists('LIB'):
	print 'The workspace is NOT SAFE.', 'The <LIB/> exists.'
	exit()
if path.exists('BIN'):
	print 'The workspace is NOT SAFE.', 'The <BIN/> exists.'
	exit()

s('lab51 python setup.py build_ext --inplace')
rmtree('build')

fh = open(argv[1])
v = fh.readlines()
fh.close()
w = []
for i in v:	w.append(i[:-1])
v = w

w = []
for i in v:
	if ('import' in i) and ('cimport' not in i):	w.append(i)

v1 = str(random()) + '.py'
fh = open(v1, 'w')
for i in w:	fh.write(i + '\n')
fh.write('import ' + fn)
fh.close()

s('lab51 --build ' + v1)

move(v1[:-3], fn)
remove(v1)

mkdir('LIB')
move(fn + '.c', 'LIB')
move(fn + '.so', 'LIB')

mkdir('BIN')
move(fn, 'BIN')
