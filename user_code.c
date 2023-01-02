/******************************************************************************
** This file is an amalgamation of many separate C source files from SQLite
** version 3.37.0.  By combining all the individual C code files into this
** single large file, the entire code can be compiled as a single translation
** unit.  This allows many compilers to do optimizations that would not be
** possible if the files were compiled separately.  Performance improvements
** of 5% or more are commonly seen when SQLite is compiled as a single
** translation unit.
**
** This file is all you need to compile SQLite.  To use SQLite in other
** programs, you need this file and the "sqlite3.h" header file that defines
** the programming interface to the SQLite library.  (If you do not have
** the "sqlite3.h" header file at hand, you will find a copy embedded within
** the text of this file.  Search for "Begin file sqlite3.h" to find the start
** of the embedded sqlite3.h header file.) Additional code files may be needed
** if you want a wrapper to interface SQLite with your choice of programming
** language. The code for the "sqlite3" command-line shell is also in a
** separate file. This file contains only code for the core SQLite library.
*/
#define SQLITE_CORE 1
#define SQLITE_AMALGAMATION 1
#ifndef SQLITE_PRIVATE
# define SQLITE_PRIVATE static
#endif

/*
** Include the configuration header output by 'configure' if we're using the
** autoconf-based build
*/
#include "sqlite3_config.h"

#ifdef SQLITE_CORE
#undef SQLITE_CORE
#endif

#include "sqlite3.h"
#include "sqlite3ext.h"

SQLITE_EXTENSION_INIT1


#if defined(SQLITE_ENABLE_SQLLOG)
extern void sqlite3_init_sqllog(void);

#if 0
void sqlite3_init_sqllog(void) {
	/* nothing */
}
#endif

#endif
