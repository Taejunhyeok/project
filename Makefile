DIRS = lib apps

all:
	@for d in $(DIRS); \
	do \
		$(MAKE) -C $$d; \
	done

clean :
	@for d in $(DIRS); \
	do \
		$(MAKE) -C $$d clean; \
	done
