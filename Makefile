SUBDIRS := ls shell
all: $(SUBDIRS)

.PHONY: all $(SUBDIRS)

$(SUBDIRS):
	make -C $@
