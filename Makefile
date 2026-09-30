CC = gcc
CFLAGS = -Wall -Isrc

# Default target: build main program
all:
	$(CC) $(CFLAGS) src/calculator.c src/main.c -o calculator.exe

# Target to compile and run tests
test:
	$(CC) $(CFLAGS) src/calculator.c tests/test_calculator.c -o test_runner.exe
	.\test_runner.exe

# Clean compiled files
clean:
	del /Q calculator.exe test_runner.exe 2>nul