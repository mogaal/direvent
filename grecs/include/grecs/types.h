#ifndef _GRECS_TYPES_H
#define _GRECS_TYPES_H

#define GRECS_VERSION_MAJOR 1
#define GRECS_VERSION_MINOR 0

#define GRECS_TREE_API 1
#define GRECS_SOCKADDR_LIST 0

#if ENABLE_NLS
# include "gettext.h"
#else
# ifndef gettext
#  define gettext(msgid) msgid
# endif
#endif
#ifndef _
# define _(msgid) gettext(msgid)
#endif
#ifndef N_
# define N_(s) s
#endif

#endif
