all: e1 t1 e2 t2 e3 t3 test

test:
	@echo -n "1 "   | tee -a test.log
	@./e1 | ./t1 | tee -a test.log
	@echo -n "2 "   | tee -a test.log
	@./e2 | ./t2 | tee -a test.log
	@echo -n "3 "   | tee -a test.log
	@./e3 gee | ./t3 | tee -a test.log


num=1
e$(num): e$(num).c
	gcc e$(num).c -o e$(num)

t$(num): t$(num).c
	gcc t$(num).c -o t$(num)

num=2
e$(num): e$(num).c
	gcc e$(num).c -o e$(num)

t$(num): t$(num).c
	gcc t$(num).c -o t$(num)

num=3
e$(num): e$(num).c
	gcc e$(num).c -o e$(num)

t$(num): t$(num).c
	gcc t$(num).c -o t$(num)
