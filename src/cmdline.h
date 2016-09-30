#line 416 "../grecs/build-aux/getopt.m4"
/* -*- buffer-read-only: t -*- vi: set ro:
   THIS FILE IS GENERATED AUTOMATICALLY.  PLEASE DO NOT EDIT.
*/
#line 1 "cmdline.opt"
#define EX_USAGE 1

#line 79 "cmdline.opt"

#line 79

#line 79
#ifdef HAVE_CONFIG_H
#line 79
# include <config.h>
#line 79
#endif
#line 79
#ifdef HAVE_GETOPT_H
#line 79
# include <getopt.h>
#line 79
#endif
#line 79
#include <unistd.h>
#line 79

#line 79
#include <grecs.h>
#line 79
#include <grecs/opt.h>
#line 79
/* Option codes */
#line 79
enum {
#line 79
	_OPTION_INIT=255,
#line 79
	#line 79 "cmdline.opt"

#line 79
	OPTION_USAGE,

#line 79 "cmdline.opt"
	MAX_OPTION
#line 79
};
#line 79
#ifdef HAVE_GETOPT_LONG
#line 79
static struct option long_options[] = {
#line 79
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
	{ "include-directory", required_argument, 0, 'I' },
#line 43 "cmdline.opt"

#line 43
	{ "self-test", required_argument, 0, 'T' },
#line 49 "cmdline.opt"

#line 49
	{ "pidfile", required_argument, 0, 'P' },
#line 55 "cmdline.opt"

#line 55
	{ "lint", no_argument, 0, 't' },
#line 61 "cmdline.opt"

#line 61
	{ "user", required_argument, 0, 'u' },
#line 71 "cmdline.opt"

#line 71
	{ "config-help", no_argument, 0, 'H' },
#line 79 "cmdline.opt"

#line 79
	{ "help", no_argument, 0, 'h' },
#line 79 "cmdline.opt"

#line 79
	{ "usage", no_argument, 0, OPTION_USAGE },
#line 79 "cmdline.opt"

#line 79
	{ "version", no_argument, 0, 'V' },

#line 79 "cmdline.opt"
	{0, 0, 0, 0}
#line 79
};
#line 79
#endif
#line 79
static struct grecs_opthelp opthelp[] = {
#line 79
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
	  "-I, --include-directory",
#line 39
#else
#line 39
	  "-I",
#line 39
#endif
#line 39
				   N_("DIR"), 0, N_("add include directory") },
#line 45 "cmdline.opt"

#line 45
	{
#line 45
#ifdef HAVE_GETOPT_LONG
#line 45
	  "-T, --self-test",
#line 45
#else
#line 45
	  "-T",
#line 45
#endif
#line 45
				   N_("PROG"), 0, N_("self-test mode") },
#line 51 "cmdline.opt"

#line 51
	{
#line 51
#ifdef HAVE_GETOPT_LONG
#line 51
	  "-P, --pidfile",
#line 51
#else
#line 51
	  "-P",
#line 51
#endif
#line 51
				   N_("FILE"), 0, N_("set PID file") },
#line 57 "cmdline.opt"

#line 57
	{
#line 57
#ifdef HAVE_GETOPT_LONG
#line 57
	  "-t, --lint",
#line 57
#else
#line 57
	  "-t",
#line 57
#endif
#line 57
				   NULL, 0, N_("check configuration file and exit") },
#line 63 "cmdline.opt"

#line 63
	{
#line 63
#ifdef HAVE_GETOPT_LONG
#line 63
	  "-u, --user",
#line 63
#else
#line 63
	  "-u",
#line 63
#endif
#line 63
				   N_("USER"), 0, N_("run as this user") },
#line 73 "cmdline.opt"

#line 73
	{
#line 73
#ifdef HAVE_GETOPT_LONG
#line 73
	  "-H, --config-help",
#line 73
#else
#line 73
	  "-H",
#line 73
#endif
#line 73
				   NULL, 0, N_("show configuration file summary") },
#line 79 "cmdline.opt"

#line 79
	{ NULL, NULL, 0, N_("Other options") },
#line 79 "cmdline.opt"

#line 79
	{
#line 79
#ifdef HAVE_GETOPT_LONG
#line 79
	  "-h, --help",
#line 79
#else
#line 79
	  "-h",
#line 79
#endif
#line 79
				   NULL, 0, N_("Give this help list") },
#line 79 "cmdline.opt"

#line 79
	{
#line 79
#ifdef HAVE_GETOPT_LONG
#line 79
	  "--usage",
#line 79
#else
#line 79
	  "",
#line 79
#endif
#line 79
				   NULL, 0, N_("Give a short usage message") },
#line 79 "cmdline.opt"

#line 79
	{
#line 79
#ifdef HAVE_GETOPT_LONG
#line 79
	  "-V, --version",
#line 79
#else
#line 79
	  "-V",
#line 79
#endif
#line 79
				   NULL, 0, N_("Print program version") },

#line 79 "cmdline.opt"
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

#line 79 "cmdline.opt"

#line 79


static int
print_dir(int flag, const char *dir, void *data)
{
	FILE *fp = data;
	fprintf(fp, "%s\n", dir);
	return 0;
}

static void
help_hook(FILE *fp)
{
	fprintf(fp,
		_("The optional CONFIG argument supplies the name of the "
		  "configuration file\n"
	          "to use instead of %s.\n\n"), DEFAULT_CONFFILE); 
	/* TRANSLATORS: %s is one of: inotify, kqueue */
	fprintf(fp, _("This direvent uses %s interface.\n\n"), INTERFACE);

	if (grecs_include_path_count(GRECS_STD_INCLUDE)) {
		fprintf(fp, _("Include search path:\n"));
		grecs_foreach_include_dir(GRECS_STD_INCLUDE, print_dir, fp);
	} else
		fprintf(fp, _("No include search path.\n"));
	fprintf(fp, "\n");
}

void
parse_options(int argc, char *argv[], int *index)
{
	proginfo.print_help_hook = help_hook;
	
#line 111
 {
#line 111
  int c;
#line 111

#line 111
  optind = 0;
#line 111
#ifdef HAVE_GETOPT_LONG
#line 111
  while ((c = getopt_long(argc, argv, "dl:F:fI:T:P:tu:HhV",
#line 111
			  long_options, NULL)) != EOF)
#line 111
#else
#line 111
  while ((c = getopt(argc, argv, "dl:F:fI:T:P:tu:HhV")) != EOF)
#line 111
#endif
#line 111
    {
#line 111
      switch (c)
#line 111
	{
#line 111
	default:
#line 111
	   	   exit(EX_USAGE);
#line 111
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
	 case 'I':
#line 39
	  {
#line 39

        grecs_preproc_add_include_dir(optarg);

#line 41
	     break;
#line 41
	  }
#line 45 "cmdline.opt"
	 case 'T':
#line 45
	  {
#line 45

	self_test_prog = optarg;

#line 47
	     break;
#line 47
	  }
#line 51 "cmdline.opt"
	 case 'P':
#line 51
	  {
#line 51
       
	opt_pidfile = optarg;

#line 53
	     break;
#line 53
	  }
#line 57 "cmdline.opt"
	 case 't':
#line 57
	  {
#line 57
       
	lint_only = 1;

#line 59
	     break;
#line 59
	  }
#line 63 "cmdline.opt"
	 case 'u':
#line 63
	  {
#line 63

	opt_user = optarg;
	if (!getpwnam(opt_user)) {
		diag(LOG_CRIT, "no such user: %s", opt_user);
		exit(1);
	}

#line 69
	     break;
#line 69
	  }
#line 73 "cmdline.opt"
	 case 'H':
#line 73
	  {
#line 73

	config_help();
	exit(0);

#line 76
	     break;
#line 76
	  }
#line 79 "cmdline.opt"
	 case 'h':
#line 79
	  {
#line 79

#line 79
		grecs_print_help(&proginfo);
#line 79
		exit(0);
#line 79
	 
#line 79
	     break;
#line 79
	  }
#line 79 "cmdline.opt"
	 case OPTION_USAGE:
#line 79
	  {
#line 79

#line 79
		grecs_print_usage(&proginfo);
#line 79
		exit(0);
#line 79
	 
#line 79
	     break;
#line 79
	  }
#line 79 "cmdline.opt"
	 case 'V':
#line 79
	  {
#line 79

#line 79
		/* Give version */
#line 79
		grecs_print_version(&proginfo, stdout);
#line 79
		exit(0);
#line 79
	 
#line 79
	     break;
#line 79
	  }

#line 111 "cmdline.opt"
	}
#line 111
    }
#line 111
  *index = optind;
#line 111
  if (cmdline_tree)
#line 111
    {
#line 111
      struct grecs_node *rn = grecs_node_create(grecs_node_root, NULL);
#line 111
      rn->down = cmdline_tree;
#line 111
      cmdline_tree = rn;
#line 111
    }
#line 111
 }
#line 111

}
  