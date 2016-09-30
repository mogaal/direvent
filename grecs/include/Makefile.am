SUBDIRS = grecs
GRECS_HDR = grecs.h wordsplit.h

if GRECS_COND_BUILD_INSTALL
  include_HEADERS = $(GRECS_HDR)
endif

if GRECS_COND_BUILD_SHARED
  if GRECS_COND_INSTALLHEADERS
    grecsincludedir = @GRECS_INCLUDE_DIR@
    grecsinclude_HEADERS = $(GRECS_HDR)
  else 
    noinst_HEADERS = $(GRECS_HDR)
  endif
endif

if GRECS_COND_BUILD_STATIC
  noinst_HEADERS = $(GRECS_HDR)
endif
