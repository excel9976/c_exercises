all: e1 t1 e2 t2 e3 t3 test
.PHONY: clean test

clean:
	rm -f e1 t1
	rm -f e2 t2
	rm -f e3 t3
	rm -f e4 t4

test:
	@echo -n "1 "   | tee -a test.log
	@./e1 | ./t1 | tee -a test.log
	@echo -n "2 "   | tee -a test.log
	@./e2 | ./t2 | tee -a test.log
	@echo -n "3 "   | tee -a test.log
	@./e3 gee | ./t3 | tee -a test.log


e1: e1.c
t1: t1.c

e2: e2.c
t2: t2.c

e3: e3.c
t3: t3.c

e4: e4.c
t4: t4.c
