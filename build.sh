echo "Begin Building:"

for SCRIPT in build/*
	do
		if [ -f $SCRIPT -a -x $SCRIPT ]
		then
			$SCRIPT
		fi
	done