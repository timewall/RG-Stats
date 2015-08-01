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
LIBS = -lcxxtools -ltntdb -lcurlpp
SUBDIRS = stats_server

# first target entry is the target invoked when typing 'make'
default: test

test: $(OUT_DIR)/rg-stats-server.cpp.o
	@echo -n 'Linking test... '
	@$(CC) $(CFLAGS) -o test $(OUT_DIR)/rg-stats-server.cpp.o $(LIBS)
	@echo Done.

$(OUT_DIR)/rg-stats-server.cpp.o: rg-stats-server.cpp ../rg_config.h
	@echo -n 'Compiling rg-stats-server.cpp... '
	@$(CC) $(CFLAGS) -o $(OUT_DIR)/rg-stats-server.cpp.o -c rg-stats-server.cpp
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
	@rm -f test $(OUT_DIR)/*.o
	@echo Done.

clear:
	@echo -n 'Removing all temporary binaries... '
	@rm -f test $(OUT_DIR)/*.o
	@echo Done.

