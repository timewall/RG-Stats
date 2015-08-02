#
# Makefile for 'test'.
#
# Type 'make' or 'make test' to create the binary.
# Type 'make clean' or 'make clear' to delete all temporaries.
# Type 'make run' to execute the binary.
# Type 'make debug' to debug the binary using gdb(1).
#

# build target specs
CC = g++
CFLAGS = -O3 
OUT_DIR = build
LIBS = -lcxxtools -ltntdb
SUBDIRS = stats_server

# first target entry is the target invoked when typing 'make'
default: rg-stats

all:
	./test 

rg-stats: $(OUT_DIR)/rg-stats.cpp.o
	@echo -n 'Linking test... '
	@$(CC) $(CFLAGS) -o test $(OUT_DIR)/rg-stats.cpp.o $(LIBS)
	@echo Done.

$(OUT_DIR)/rg-stats.cpp.o: rg-stats.cpp ../rg_config.h
	@echo -n 'Compiling rg-stats-server.cpp... '
	@$(CC) $(CFLAGS) -o $(OUT_DIR)/rg-stats.cpp.o -c rg-stats.cpp
	@echo Done.

submake: $(SUBDIRS)

    $(SUBDIRS):
	$(MAKE) -C $@

.PHONY: $(SUBDIRS)

run:
	./test 

debug:
	gdb ./test

clean:
	@echo -n 'Removing all temporary binaries... '
	@rm -f rg-stats $(OUT_DIR)/*.o
	@echo Done.

clear:
	@echo -n 'Removing all temporary binaries... '
	@rm -f rg-stats $(OUT_DIR)/*.o
	@echo Done.

