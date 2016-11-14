# AlephOne Examples and Exploits Makefile by pmateti@cs.wright.edu

CFLAGS = # -pedantic -ansi -Wall
FILES = vulnerable.c salloc.c recurse.c Makefile exploit2.c exploit3.c modret.c

# for convenience all programs will have the .prg extension.

%.prg: %.c Makefile
	gcc $(CFLAGS) -o $@ $<

# to produce assembled machine code with assembly source listing

%.lst: %.c
	gcc  -Wa,-alh $< > $@

# generate the assembly code for the c file

%.s: %.c
	gcc -S $<

all: example1.prg example2.prg example3.prg \
	exploit1.prg exploit2.prg exploit3.prg exploit4.prg\
	modret.prg\
	vulnerable.prg

clean:
	rm -f *~ *.o *.prg *.s *.lst vulnerable testsc testsc2 core* a.out \#*

tar archive: clean
	(cd ..; tar -cjf AlephOne`date  '+%G%m%d%H%M'`.tbz AlephOne)

# gcc -o example2 example2.c 