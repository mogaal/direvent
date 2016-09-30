#line 414 "../grecs/build-aux/getopt.m4"
/* -*- buffer-read-only: t -*- vi: set ro:
   THIS FILE IS GENERATED AUTOMATICALLY.  PLEASE DO NOT EDIT.
*/
#line 1 "cmdline.opt"
#define EX_USAGE 1

#line 73 "cmdline.opt"

#line 73

#line 73
#ifdef HAVE_CONFIG_H
#line 73
# include <config.h>
#line 73
#endif
#line 73
#ifdef HAVE_GETOPT_H
#line 73
# include <getopt.h>
#line 73
#endif
#line 73
#include <unistd.h>
#line 73

#line 73
#include <grecs.h>
#line 73
#include <grecsopt.h>
#line 73
/* Option codes */
#line 73
enum {
#line 73
	_OPTION_INIT=255,
#line 73
	#line 73 "cmdline.opt"

#line 73
	OPTION_USAGE,

#line 73 "cmdline.opt"
	MAX_OPTION
#line 73
};
#line 73
#ifdef HAVE_GETOPT_LONG
#line 73
static struct option long_options[] = {
#line 73
	#line 10 "cmdline.opt"

#line 10
	{ "debug", no_argument, 0, 'd' },
#line 25 "cmdline.opt"

#line 25
	{ "facility", required_argument, 0, 'F' },
#line 31 "cmdline.opt"

#line 31
	{ "foreground", no_argument, 0, 'f' },
#line 37 "cmdline.opt"

#line 37
	{ "self-test", required_argument, 0, 'T' },
#line 43 "cmdline.opt"

#line 43
	{ "pidfile", required_argument, 0, 'P' },
#line 49 "cmdline.opt"

#line 49
	{ "lint", no_argument, 0, 't' },
#line 55 "cmdline.opt"

#line 55
	{ "user", required_argument, 0, 'u' },
#line 65 "cmdline.opt"

#line 65
	{ "config-help", no_argument, 0, 'H' },
#line 73 "cmdline.opt"

#line 73
	{ "help", no_argument, 0, 'h' },
#line 73 "cmdline.opt"

#line 73
	{ "usage", no_argument, 0, OPTION_USAGE },
#line 73 "cmdline.opt"

#line 73
	{ "version", no_argument, 0, 'V' },

#line 73 "cmdline.opt"
	{0, 0, 0, 0}
#line 73
};
#line 73
#endif
#line 73
static struct grecs_opthelp opthelp[] = {
#line 73
	#line 12 "cmdline.opt"

#line 12
	{
#line 12
#ifdef HAVE_GETOPT_LONG
#line 12
	  "-d, --debug",
#line 12
#else
#line 12
	  "-d",
#line 12
#endif
#line 12
				   NULL, 0, N_("increase debug level") },
#line 18 "cmdline.opt"

#line 18
	{
#line 18
#ifdef HAVE_GETOPT_LONG
#line 18
	  "-l",
#line 18
#else
#line 18
	  "-l",
#line 18
#endif
#line 18
				   N_("PRIO"), 0, N_("log everything with priority PRIO and higher to the stderr, as well as to the syslog") },
#line 27 "cmdline.opt"

#line 27
	{
#line 27
#ifdef HAVE_GETOPT_LONG
#line 27
	  "-F, --facility",
#line 27
#else
#line 27
	  "-F",
#line 27
#endif
#line 27
				   N_("NAME"), 0, N_("set syslog facility") },
#line 33 "cmdline.opt"

#line 33
	{
#line 33
#ifdef HAVE_GETOPT_LONG
#line 33
	  "-f, --foreground",
#line 33
#else
#line 33
	  "-f",
#line 33
#endif
#line 33
				   NULL, 0, N_("remain in foreground") },
#line 39 "cmdline.opt"

#line 39
	{
#line 39
#ifdef HAVE_GETOPT_LONG
#line 39
	  "-T, --self-test",
#line 39
#else
#line 39
	  "-T",
#line 39
#endif
#line 39
				   N_("PROG"), 0, N_("self-test mode") },
#line 45 "cmdline.opt"

#line 45
	{
#line 45
#ifdef HAVE_GETOPT_LONG
#line 45
	  "-P, --pidfile",
#line 45
#else
#line 45
	  "-P",
#line 45
#endif
#line 45
				   N_("FILE"), 0, N_("set PID file") },
#line 51 "cmdline.opt"

#line 51
	{
#line 51
#ifdef HAVE_GETOPT_LONG
#line 51
	  "-t, --lint",
#line 51
#else
#line 51
	  "-t",
#line 51
#endif
#line 51
				   NULL, 0, N_("check configuration file and exit") },
#line 57 "cmdline.opt"

#line 57
	{
#line 57
#ifdef HAVE_GETOPT_LONG
#line 57
	  "-u, --user",
#line 57
#else
#line 57
	  "-u",
#line 57
#endif
#line 57
				   N_("USER"), 0, N_("run as this user") },
#line 67 "cmdline.opt"

#line 67
	{
#line 67
#ifdef HAVE_GETOPT_LONG
#line 67
	  "-H, --config-help",
#line 67
#else
#line 67
	  "-H",
#line 67
#endif
#line 67
				   NULL, 0, N_("show configuration file summary") },
#line 73 "cmdline.opt"

#line 73
	{ NULL, NULL, 0, N_("Other options") },
#line 73 "cmdline.opt"

#line 73
	{
#line 73
#ifdef HAVE_GETOPT_LONG
#line 73
	  "-h, --help",
#line 73
#else
#line 73
	  "-h",
#line 73
#endif
#line 73
				   NULL, 0, N_("Give this help list") },
#line 73 "cmdline.opt"

#line 73
	{
#line 73
#ifdef HAVE_GETOPT_LONG
#line 73
	  "--usage",
#line 73
#else
#line 73
	  "",
#line 73
#endif
#line 73
				   NULL, 0, N_("Give a short usage message") },
#line 73 "cmdline.opt"

#line 73
	{
#line 73
#ifdef HAVE_GETOPT_LONG
#line 73
	  "-V, --version",
#line 73
#else
#line 73
	  "-V",
#line 73
#endif
#line 73
				   NULL, 0, N_("Print program version") },

#line 73 "cmdline.opt"
};
#line 3 "cmdline.opt"

#line 3

#line 3
static struct grecs_proginfo proginfo = {
#line 3
	"direvent", /* progname */
#line 3
	NULL, /* subcommands */
#line 3
	N_("GNU direvent monitors changes in directories"), /* docstring */
#line 3
	N_("[CONFIG]"), /* args_doc */
#line 3
	opthelp, /* opthelp */
#line 3
	sizeof(opthelp)/sizeof(opthelp[0]), /* optcount */
#line 3
	NULL, /* print_help_hook */
#line 3
	NULL, /* print_version_hook */
#line 3
	PACKAGE_NAME,    /* package */
#line 3
	PACKAGE_VERSION, /* version */
#line 3
	NULL, /* license */
#line 3
	"2012-2014",/* copyright_year */
#line 3
	"Sergey Poznyakoff", /* copyright_holder */
#line 3
	NULL, /* *authors */
#line 3
	"<" PACKAGE_BUGREPORT ">", /* bug_address */
#line 3
	PACKAGE_URL, /* url */
#line 3
	NULL  /* epilogue */
#line 3
};
#line 3
static struct grecs_node *cmdline_tree;
#line 3

#line 3

#line 73 "cmdline.opt"

#line 73


static void
help_hook(FILE *fp)
{
	fprintf(fp,
		_("The optional CONFIG argument supplies the name of the "
		  "configuration file\n"
	          "to use instead of %s.\n\n"), DEFAULT_CONFFILE); 
	/* TRANSLATORS: %s is one of: inotify, kqueue */
	fprintf(fp, _("This direvent uses %s interface.\n\n"), INTERFACE);
}

void
parse_options(int argc, char *argv[], int *index)
{
	proginfo.print_help_hook = help_hook;
	
#line 90
 {
#line 90
  int c;
#line 90

#line 90
  optind = 0;
#line 90
#ifdef HAVE_GETOPT_LONG
#line 90
  while ((c = getopt_long(argc, argv, "dl:F:fT:P:tu:HhV",
#line 90
			  long_options, NULL)) != EOF)
#line 90
#else
#line 90
  while ((c = getopt(argc, argv, "dl:F:fT:P:tu:HhV")) != EOF)
#line 90
#endif
#line 90
    {
#line 90
      switch (c)
#line 90
	{
#line 90
	default:
#line 90
	   	   exit(EX_USAGE);
#line 90
	#line 12 "cmdline.opt"
	 case 'd':
#line 12
	  {
#line 12
       
	opt_debug_level++;

#line 14
	     break;
#line 14
	  }
#line 18 "cmdline.opt"
	 case 'l':
#line 18
	  {
#line 18

	if (strcmp(optarg, "none") == 0)
		log_to_stderr = -1;
	else
		log_to_stderr = get_priority(optarg);

#line 23
	     break;
#line 23
	  }
#line 27 "cmdline.opt"
	 case 'F':
#line 27
	  {
#line 27
       
	opt_facility = get_facility(optarg);

#line 29
	     break;
#line 29
	  }
#line 33 "cmdline.opt"
	 case 'f':
#line 33
	  {
#line 33
       
	opt_foreground++;

#line 35
	     break;
#line 35
	  }
#line 39 "cmdline.opt"
	 case 'T':
#line 39
	  {
#line 39

	self_test_prog = optarg;

#line 41
	     break;
#line 41
	  }
#line 45 "cmdline.opt"
	 case 'P':
#line 45
	  {
#line 45
       
	opt_pidfile = optarg;

#line 47
	     break;
#line 47
	  }
#line 51 "cmdline.opt"
	 case 't':
#line 51
	  {
#line 51
       
	lint_only = 1;

#line 53
	     break;
#line 53
	  }
#line 57 "cmdline.opt"
	 case 'u':
#line 57
	  {
#line 57

	opt_user = optarg;
	if (!getpwnam(opt_user)) {
		diag(LOG_CRIT, "no such user: %s", opt_user);
		exit(1);
	}

#line 63
	     break;
#line 63
	  }
#line 67 "cmdline.opt"
	 case 'H':
#line 67
	  {
#line 67

	config_help();
	exit(0);

#line 70
	     break;
#line 70
	  }
#line 73 "cmdline.opt"
	 case 'h':
#line 73
	  {
#line 73

#line 73
		grecs_print_help(&proginfo);
#line 73
		exit(0);
#line 73
	 
#line 73
	     break;
#line 73
	  }
#line 73 "cmdline.opt"
	 case OPTION_USAGE:
#line 73
	  {
#line 73

#line 73
		grecs_print_usage(&proginfo);
#line 73
		exit(0);
#line 73
	 
#line 73
	     break;
#line 73
	  }
#line 73 "cmdline.opt"
	 case 'V':
#line 73
	  {
#line 73

#line 73
		/* Give version */
#line 73
		grecs_print_version(&proginfo, stdout);
#line 73
		exit(0);
#line 73
	 
#line 73
	     break;
#line 73
	  }

#line 90 "cmdline.opt"
	}
#line 90
    }
#line 90
  *index = optind;
#line 90
  if (cmdline_tree)
#line 90
    {
#line 90
      struct grecs_node *rn = grecs_node_create(grecs_node_root, NULL);
#line 90
      rn->down = cmdline_tree;
#line 90
      cmdline_tree = rn;
#line 90
    }
#line 90
 }
#line 90

}
  