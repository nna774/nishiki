all: nishiki

OBJS := main.o
RM := rm -rf
CC := gcc
CFLAGS := -g -Wall -Werror
NISHIKI := nishiki

nishiki: $(OBJS)
	$(CC) $(CFLAGS) -o $(NISHIKI) $(OBJS)

.PHONY: clean
clean:
	$(RM) $(NISHIKI)
	$(RM) $(OBJS)
