CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC = src/main.c src/audioList.c
OUT = build/cmme

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
