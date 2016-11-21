a.out: executor.c
	gcc executor.c
run: a.out
	./a.out
