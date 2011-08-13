EGG = bit-cat

all: $(EGG).egg

$(EGG).egg: $(EGG).html $(EGG).scm $(EGG).setup
	tar cf ../../../eggs/$(EGG).egg $(EGG).html $(EGG).scm $(EGG).setup

distclean: clean

clean:
	rm -f ../../../eggs/$(EGG).egg

install: $(EGG).egg
	chicken-setup -local ../../../eggs/$(EGG).egg

