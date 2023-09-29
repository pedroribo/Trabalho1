ALL = main
all: $(ALL)

main: trabalho1.o function1.o function2.o function3.o
	gcc -o $@ $^

%.o: %.c
	gcc -c $<

clean:
	rm -f *.s *.o

distclean: clean
	rm -f $(ALL)
