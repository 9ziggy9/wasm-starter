CC=clang
CFLAGS=--target=wasm32 --no-standard-libraries -Wl,--export-all -Wl,--no-entry -Wl,--allow-undefined

all: main.c
	$(CC) $(CFLAGS) main.c -o ./wasm/main.wasm

clean:
	rm -rf ./wasm/*.wasm
