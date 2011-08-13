SUBDIRS = bit-cat  crc16  raw-sockets

all:
	@for T in $(SUBDIRS); do make -C $$T $@; done

subdirs: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

distclean: clean

clean:
	@for T in $(SUBDIRS); do make -C $$T $@; done

install:
	@for T in $(SUBDIRS); do make -C $$T $@; done


