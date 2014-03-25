#!/bin/bash

for i in $(seq 10); do
	f=$(printf "arq%2.2d.in" $i)
	out=$(printf "arq%2.2d.res" $i)

	[ ! -f $f ] && continue

	./$1 < $f > res

	if diff -q $out res > /dev/null ; then
		echo "Teste $i: OK"
	else
		echo "Teste $i: FAIL"
	fi
done

rm res
