#! /bin/bash
#
# SQLite source tree is assumed to sit in    ../sqlite/
# 

REPODIR=$( pwd )
echo "REPODIR=$REPODIR"

cd ../sqlite/
make clean
# make sqlite3_config.h
make amalgamation

echo "Copy generated files to amalgamation repo in $REPODIR..."
cp shell.c sqlite3.[1ch] sqlite3_analyzer.c sqlite3_checker.c sqlite3ext.* sqlite3rc.* sqlite3session.* src/obj_interfaces.h  $REPODIR
