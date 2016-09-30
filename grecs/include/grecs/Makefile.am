GRECS_PKG_HDR =\
 doc.h\
 error.h\
 format.h\
 lex.h\
 list.h\
 locus.h\
 mem.h\
 node.h\
 opt.h\
 parser.h\
 preproc.h\
 sockaddr.h\
 symtab.h\
 table.h\
 tree.h\
 txtacc.h\
 types.h\
 util.h\
 value.h\
 version.h

if GRECS_COND_JSON
  GRECS_PKG_HDR += json.h
endif

if GRECS_COND_BUILD_INSTALL
  grecsincludedir = @GRECS_INCLUDE_DIR@
  grecsinclude_HEADERS = $(GRECS_PKG_HDR)
endif

if GRECS_COND_BUILD_SHARED
  if GRECS_COND_INSTALLHEADERS
    grecsincludedir = @GRECS_INCLUDE_DIR@
    grecsinclude_HEADERS = $(GRECS_PKG_HDR)
  else 
    noinst_HEADERS = $(GRECS_PKG_HDR)
  endif
endif

if GRECS_COND_BUILD_STATIC
  noinst_HEADERS = $(GRECS_PKG_HDR)
endif
