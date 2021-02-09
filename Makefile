BIN:=showDate

.PHONY: all clean

all: $(BIN)

$(BIN): showDate.c
	$(CC) -o $@ $^

clean:
	rm -f $(BIN)