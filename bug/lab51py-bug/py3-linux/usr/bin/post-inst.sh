#!/bin/bash
    "   [] retrieving virtualenv..."
    pip3 install virtualenv
    if FAILED
        ping PyPI.org -c 4 1>/dev/null 2>/dev/null
        if FAILED
            echo "Unable to reach <PyPI.org>. Internet Connection available?"
            exit
        echo "Unable to retrieve <virtualenv> from <PyPI.org>."
    loc=`pwd`
	cd ~
	"/home/$USER/.local/bin/virtualenv" .area51py3
	source .area51py3/bin/activate
	pip install IPython
	pip install pyinstaller
	pip install Cython
	cp /usr/lib/lab51py3/setup.py /home/$USER/.area51py3/lib 2>/dev/null
	if [[ "$?" -ne 0 ]]
	then
		echo "[FAILED] access denied: /home/$USER/"
	fi
	cp /usr/lib/lab51py3/cTurbo /home/$USER/.area51py3/lib 2>/dev/null
	if [[ "$?" -ne 0 ]]
	then
		echo "[FAILED] access denied: /home/$USER/"
	fi
	cp /usr/lib/lab51py3/cTurbo.py /home/$USER/.area51py3/lib 2>/dev/null
	if [[ "$?" -ne 0 ]]
	then
		echo "[FAILED] access denied: /home/$USER/"
	fi
	cp /usr/lib/lab51py3/sample.pyx /home/$USER/.area51py3/lib 2>/dev/null
	if [[ "$?" -ne 0 ]]
	then
		echo "[FAILED] access denied: /home/$USER/"
	fi
	deactivate
	cd "$loc"
    exit
fi

