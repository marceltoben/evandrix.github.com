all: hw

hw: hw.6 ; 6l -o $@ $^
%.6: %.go ; 6g $<

clean:
	rm -rf hw
