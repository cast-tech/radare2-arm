include ../../config.mk
include ../../../mk/platform.mk

ifeq ($(WITHPIC),1)
CFLAGS+=-I../../include -I../arch/ -I../arch/include -Wall ${PIC_CFLAGS} ${LDFLAGS_LIB}
CFLAGS+=-DR2__UNIX__

all: ${ALL_TARGETS}

ALL_TARGETS=
ARCHS=bp.mk x86.mk arm.mk
include $(ARCHS)

clean:
	-rm -f *.so *.o ${STATIC_OBJ}

mrproper: clean
	-rm -f *.d

.PHONY: all clean mrproper
else
all clean mrproper:

.PHONY: all clean mrproper
endif
