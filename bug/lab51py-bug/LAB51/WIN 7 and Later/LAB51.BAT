	python -m pip install --upgrade pip
	python -m pip install --upgrade ipython

	echo --help
	echo --setup
	echo --run
	echo --ipython
	echo --mod "PyPI-package-name"
	lab51 ''

if %1 == --run (python %2)
if %1 == --mod (python -m pip install --upgrade %2)
if %1 == --ipython (ipython)
