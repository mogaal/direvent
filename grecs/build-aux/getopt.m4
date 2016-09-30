dnl This file is part of grecs
dnl Copyright (C) 2007, 2009-2012 Sergey Poznyakoff
dnl
dnl Grecs is free software; you can redistribute it and/or modify
dnl it under the terms of the GNU General Public License as published by
dnl the Free Software Foundation; either version 3, or (at your option)
dnl any later version.
dnl
dnl Grecs is distributed in the hope that it will be useful,
dnl but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl GNU General Public License for more details.
dnl
dnl You should have received a copy of the GNU General Public License
dnl along with Grecs.  If not, see <http://www.gnu.org/licenses/>.
divert(-1)
changequote([<,>])
changecom(/*,*/)

dnl _getopt_mangle_option(NAME)
dnl ---------------------------
dnl Convert NAME to a valid m4 identifier, by replacing invalid characters
dnl with underscores, and prepend the _GETOPT_OPTION_ suffix to it.
define([<_getopt_mangle_option>],
  [<[<_GETOPT_OPTION_>]patsubst($1, [<[^a-zA-Z0-9_]>], [<_>])>])

dnl _getopt_set_option(NAME[=VAL])
dnl ------------------------------
dnl Set option NAME.  
define([<_getopt_set_option>],
  [<ifelse(index([<$1>],=),-1,[<define(_getopt_mangle_option($1))>],
    [<define(regexp([<$1>],\([^=]+\)=\(.*\),
             [<_getopt_mangle_option(\1),[<\2>]>]))>])>])

dnl _getopt_get_option(NAME[,DEFAULT])
dnl ------------------------------
define([<_getopt_get_option>],
  [<_getopt_if_option_set($1,[<indir(_getopt_mangle_option($1))>],[<$2>])>])
  
dnl _getopt_if_option_set(NAME,IF-SET,IF-NOT-SET)
dnl ---------------------------------------------
dnl Check if option NAME is set.
define([<_getopt_if_option_set>],
  [<ifdef(_getopt_mangle_option([<$1>]),[<$2>],[<$3>])>])

dnl _getopt_if_option_null(NAME,IF-NULL,IF-NOT-NULL)
dnl ---------------------------------------------
dnl Check if option NAME is set.
define([<_getopt_if_option_null>],
  [<ifelse(indir(_getopt_mangle_option([<$1>])),,[<$2>],[<$3>])>])

dnl _getopt_option_switch(NAME1,IF-SET1,[NAME2,IF-SET2,[...]],[IF-NOT-SET])
dnl ------------------------------------------------------------------------
dnl If NAME1 is set, run IF-SET1.  Otherwise, if NAME2 is set, run IF-SET2.
dnl Continue the process for all name-if-set pairs within [...].  If none
dnl of the options is set, run IF-NOT-SET.
define([<_getopt_option_switch>],
  [<ifelse([<$4>],,[<_getopt_if_option_set($@)>],
           [<$3>],,[<_getopt_if_option_set($@)>],
     [<_getopt_if_option_set([<$1>],[<$2>],
                             [<_getopt_option_switch(shift(shift($@)))>])>])>])

dnl _getopt_if_option_val(NAME,val,IF-TRUE,IF-FALSE)
dnl ---------------------------------------------
dnl Check if option NAME is set.
define([<_getopt_if_option_val>],
  [<ifelse(_getopt_get_option([<$1>]),[<$2>],[<$3>],[<$4>])>])

define([<__getopt_switch_option_val>],
[<ifelse([<$#>],2,[<$2>],dnl
         [<$#>],3,[<ifelse([<$1>],[<$2>],[<$3>])>],dnl
[<ifelse([<$1>],[<$2>],[<$3>],dnl
[<__getopt_switch_option_val([<$1>],shift(shift(shift($@))))>])>])>])
	            
dnl _getopt_switch_option_val(NAME,val1,IF-VAL1,val2,IF-VAL2...,ELSE)
dnl -----------------------------------------------------------------
dnl Check if option NAME is set.
define([<_getopt_switch_option_val>],
[<pushdef([<val>],[<_getopt_get_option($1)>])dnl
__getopt_switch_option_val(val, shift($@))[<>]dnl
popdef([<val>])>])

dnl _getopt_set_options(OPTION[,OPTION...])
dnl ---------------------------------------
dnl Set options given as arguments.
define([<_getopt_set_options>],
  [<ifelse([<$1>],,,
     [<_getopt_set_option([<$1>])
       _getopt_set_options(shift($@))>])>])

dnl format_authors(name[,name...])
dnl ------------------------------
define([<format_authors>],dnl
	[<ifelse([<$1>],,NULL,[<"$1",
format_authors(shift($@))>])>])
       
dnl upcase(ARGS...)
dnl Concatenate and convert ARGS to upper case.
dnl
define([<upcase>], [<translit([<$*>], [<a-z>], [<A-Z>])>])

dnl concat(ARGS...)
dnl Concatenate arguments, inserting ", " between each pair of them.
dnl
define([<concat>],[<ifelse([<$#>],1,[<$1>],[<$1, concat(shift($@))>])>])

dnl flushleft(ARGS...)
dnl Concatenate ARGS and remove any leading whitespace
dnl
define([<flushleft>],
 [<patsubst([<concat($*)>], [<^[	]+>])>])

dnl chop(ARGS...)
dnl Concatenate ARGS and remove any trailing whitespace
dnl
define([<chop>],
 [<patsubst([<$*>], [<[	]+$>])>])

dnl escape(ARGS...)
dnl Concatenate ARGS and escape any occurrences of double-quotes with
dnl backslashes.
dnl
define([<escape>],
[<patsubst([<concat($*)>],[<[\"]>],[<\\\&>])>])

dnl prep(ARG)
dnl Prepare ARG for including in C strings: replace newlines and any 
dnl preceding and following whitespace by a single space character, remove
dnl leading whitespace, and escape double-quotes.
dnl
define([<prep>],
 [<escape(flushleft(patsubst([<$1>],[<[	]*
+[	]*>],[< >])))>])

dnl SHORT_OPTS
dnl Accumulator for the 3rd argument of getopt_long
dnl
define([<SHORT_OPTS>],[<_getopt_if_option_set([<nopermute>],+)>])

dnl GROUP(STRING)
dnl Begin a named group of options
dnl
define([<GROUP>],[<dnl
divert(3)
	{ NULL, NULL, 0, N_("prep([<$1>])") },
divert(-1)>])

# quote(args) - convert args to single-quoted string
define([<quote>], [<ifelse([<$#>], [<0>], [<>], [<[<$*>]>])>])
define([<dquote>], [<[<$@>]>])

define([<__GATHER_OPTIONS>],[<
define([<KEY>],ifelse([<$2>],,[<OPTION_>]upcase(patsubst($1,-,_)),'$2'))
ifelse([<$2>],,[<
divert(1)
	KEY,
divert(-1)
>])
define([<SELECTOR>],ifdef([<SELECTOR>],SELECTOR) case KEY:)
ifelse([<$1>],,,[<
divert(2)
	{ "$1", ARGTYPE, 0, KEY },
divert(-1)>])
dnl
define([<SHORT_OPTS>],dquote(SHORT_OPTS[<>]dnl
ifelse([<$2>],,,[<$2>]ifelse(ARGTYPE,[<no_argument>],,ARGTYPE,[<required_argument>],:,ARGTYPE,[<optional_argument>],::))))
dnl
ifelse([<$1>],,,dnl
[<define([<LONG_TAG>],ifelse(LONG_TAG,,[<--$1>],[<LONG_TAG; --$1>]))>])
ifelse([<$2>],,,dnl
[<define([<SHORT_TAG>],ifelse(SHORT_TAG,,[<-$2>],[<SHORT_TAG; -$2>]))>])
>])

dnl OPTION(long-opt, short-opt, [arg], [descr])
dnl Introduce a command line option. Arguments:
dnl   long-opt     Long option.
dnl   short-opt    Short option (a single char)
dnl   (At least one of long-opt or short-opt must be present)
dnl
dnl   Optional arguments:
dnl   arg          Option argument.
dnl   descr        Option description
dnl
dnl If arg is absent, the option does not take any arguments. If arg is
dnl enclosed in square brackets, the option takes an optional argument.
dnl Otherwise, the argument is required.
dnl
dnl If descr is not given the option will not appear in the --help and
dnl --usage outputs.
dnl
define([<OPTION>],[<
pushdef([<LONG_TAG>])
pushdef([<SHORT_TAG>])
pushdef([<ARGNAME>],[<$3>])
pushdef([<HIDDEN>],ifelse([<$4>],,1,0))
pushdef([<DOCSTRING>],[<prep([<$4>])>])
pushdef([<ARGTYPE>],[<ifelse([<$3>],,[<no_argument>],dnl
patsubst([<$3>],[<\[.*\]>]),,[<optional_argument>],dnl
[<required_argument>])>])
__GATHER_OPTIONS($@)
>])

dnl ALIAS(long-opt, short-opt)
dnl Declare aliases for the previous OPTION statement.
dnl   long-opt     Long option.
dnl   short-opt    Short option (a single char)
dnl   (At least one of long-opt or short-opt must be present)
dnl An OPTION statement may be followed by any number of ALIAS statements.
dnl
define([<ALIAS>],[<
__GATHER_OPTIONS($1,$2)
>])

dnl BEGIN
dnl Start an action associated with the declared option. Must follow OPTION
dnl statement, with optional ALIAS statements in between.
dnl
define([<BEGIN>],[<
ifelse(HIDDEN,1,,[<
divert(3)
	{
#ifdef HAVE_GETOPT_LONG
	  "translit(dnl
ifelse(SHORT_TAG,,LONG_TAG,[<SHORT_TAG[<>]ifelse(LONG_TAG,,,; LONG_TAG)>]),
		    [<;>],[<,>])",
#else
	  "translit(SHORT_TAG, [<;>],[<,>])",
#endif
				   ifelse(ARGNAME,,[<NULL, 0>],
[<ifelse(ARGTYPE,[<optional_argument>],
[<N_(>]"[<patsubst(ARGNAME,[<\[\(.*\)\]>],[<\1>])>][<"), 1>],[<N_("ARGNAME"), 0>])>]), N_("DOCSTRING") },
divert(-1)>])
popdef([<ARGTYPE>])
popdef([<ARGNAME>])
popdef([<DOCSTRING>])
popdef([<HIDDEN>])
divert(4)dnl
popdef([<LONG_TAG>])dnl
popdef([<SHORT_TAG>])dnl
	SELECTOR
	  {
>])

dnl END
dnl Finish the associated action
dnl
define([<END>],[<
	     break;
	  }
divert(-1)
undefine([<SELECTOR>])>])

dnl OPTNODE(name, value)
define([<OPTNODE>],[<do {
   struct grecs_node *node = grecs_node_from_path($1, $2);
   if (!cmdline_tree)
	cmdline_tree = node;
   else
	grecs_node_bind(cmdline_tree, node, 0);
} while(0)
>])

dnl GETOPT(argc, argv, [long_index], [onerr])
dnl Emit option parsing code. Arguments:
dnl
dnl  argc        Name of the 1st argument to getopt_long.
dnl  argv        Name of the 2nd argument to getopt_long.
dnl  long_index  5th argument to getopt_long.  If not given,
dnl              NULL will be passed.
dnl  onerr       Action to take if parsing fails.
dnl
define([<GETOPT>],[<
 {
  int c;

  optind = 0;
#ifdef HAVE_GETOPT_LONG
  while ((c = getopt_long($1, $2, "SHORT_OPTS",
			  long_options, NULL)) != EOF)
#else
  while ((c = getopt($1, $2, "SHORT_OPTS")) != EOF)
#endif
    {
      switch (c)
	{
	default:
	   ifelse([<$4>],,,[<$4;>])dnl
	   exit(EX_USAGE);
	undivert(4)
	}
    }
  ifelse([<$3>],,[<
    if (optind < argc) {
	fprintf(stderr, "%s: unexpected arguments\n", $2[0]);
	exit(EX_USAGE);
    }
>],[<$3 = optind;>])
  if (cmdline_tree)
    {
      struct grecs_node *rn = grecs_node_create(grecs_node_root, NULL);
      rn->down = cmdline_tree;
      cmdline_tree = rn;
    }
 }
>])

define([<_getopt_sc_array>],
  [<ifelse([<$1>],,,[<[<"$1", >]_getopt_sc_array(shift($@))>])>])

define([<STDFUNC>],[<
divert(5)
ifelse([<$3>],,,[<
static char *subcommands[] = {
	_getopt_sc_array($3)
	NULL
};>])
static struct grecs_proginfo proginfo = {
	$2, /* progname */
	ifelse([<$3>],,NULL,subcommands), /* subcommands */
	ifelse([<$4>],,"",N_("$4")), /* docstring */
	ifelse([<$5>],,"",N_("$5")), /* args_doc */
	opthelp, /* opthelp */
	sizeof(opthelp)/sizeof(opthelp[0]), /* optcount */
	NULL, /* print_help_hook */
	NULL, /* print_version_hook */
	PACKAGE_NAME,    /* package */
	PACKAGE_VERSION, /* version */
	NULL, /* license */
_getopt_if_option_set([<copyright_year>],dnl
	"[<_getopt_get_option(copyright_year)>]",NULL),/* copyright_year */
_getopt_if_option_set([<copyright_holder>],dnl
	"[<_getopt_get_option(copyright_holder)>]",NULL), /* copyright_holder */
	NULL, /* *authors */
	"<" PACKAGE_BUGREPORT ">", /* bug_address */
	PACKAGE_URL, /* url */
	NULL  /* epilogue */
};
static struct grecs_node *cmdline_tree;

_getopt_if_option_set([<program_version>],dnl
[<const char *_getopt_if_option_null(program_version,program_version,[<_getopt_get_option(program_version)>]) = $2 " (" PACKAGE_NAME ") " PACKAGE_VERSION;
>])
divert(-1)
>])

define([<OPTIONS_BEGIN>],
   [<divert(-1)
     _getopt_set_options(shift(shift(shift($@))))
     _getopt_if_option_set([<gnu>],
        [<STDFUNC([<$1 " (" PACKAGE_NAME ") " PACKAGE_VERSION>],
	          [<$1>], [<>], [<$2>], [<$3>])>])
>])

define([<OPTIONS_COMMAND_BEGIN>],
   [<divert(-1)
     _getopt_set_options(shift(shift(shift(shift($@)))))
     _getopt_if_option_set([<gnu>],
        [<STDFUNC([<$1 " (" PACKAGE_NAME ") " PACKAGE_VERSION>],
	          [<$1>], [<$2>], [<$3>], [<$4>])>])
>])

define([<OPTIONS_END>],[<
_getopt_if_option_set([<gnu>],[<
	 GROUP([<Other options>])
	 OPTION([<help>],h,,[<Give this help list>])
	 BEGIN
		grecs_print_help(&proginfo);
		exit(0);
	 END
_getopt_if_option_set([<nousage>],,[<
         OPTION([<usage>],,,[<Give a short usage message>])
	 BEGIN
		grecs_print_usage(&proginfo);
		exit(0);
	 END>])
_getopt_if_option_set([<noversion>],,[<	 
	 OPTION([<version>],V,,[<Print program version>])
	 BEGIN
		/* Give version */
		grecs_print_version(&proginfo, stdout);
		exit(0);
	 END>])>])
divert
_getopt_if_option_set([<nostdincl>],,[<
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#ifdef HAVE_GETOPT_H
# include <getopt.h>
#endif
#include <unistd.h>
>])
#include <grecs.h>
#include <grecsopt.h>
/* Option codes */
enum {
	_OPTION_INIT=255,
	undivert(1)
	MAX_OPTION
};
#ifdef HAVE_GETOPT_LONG
static struct option long_options[] = {
	undivert(2)
	{0, 0, 0, 0}
};
#endif
static struct grecs_opthelp opthelp[] = {
	undivert(3)
};
undivert(5)
>])

divert(0)dnl
/* -*- buffer-read-only: t -*- vi: set ro:
   THIS FILE IS GENERATED AUTOMATICALLY.  PLEASE DO NOT EDIT.
*/
