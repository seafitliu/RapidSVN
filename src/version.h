/*
 * ====================================================================
 * Copyright (c) 2000 The Apache Software Foundation.  All rights
 * reserved.
 *
 * This software is licensed as described in the file LICENSE.txt,
 * which you should have received as part of this distribution.
 *
 * This software consists of voluntary contributions made by many
 * individuals.  For exact contribution history, see the revision
 * history and logs, available at http://rapidsvn.tigris.org/.
 * ====================================================================
 */
#ifndef _RAPIDSVN_VERSION_H_INCLUDED_
#define _RAPIDSVN_VERSION_H_INCLUDED_

/* Symbols that define the version number.
 *   XXX FIXME: Modify before each snapshot, milestone or release. 
 */

/* Version numbers: <major>.<minor>.<micro>-<release> */

/* Major version number.
   Modify when incompatible changes are made to published interfaces. */
#define RAPIDSVN_VER_MAJOR      0

/* Minor version number.
   Modify when new functionality is added or new interfaces are
   defined, but all changes are backward compatible. */
#define RAPIDSVN_VER_MINOR      0

/* Patch number.
   Modify for every released patch. */
#define RAPIDSVN_VER_MICRO      1

/* Symbolic name of the milestone
   Modify whenever Minor number is changed. */
#define RAPIDSVN_VER_MILESTONE "Alpha 1"

#endif
/* -----------------------------------------------------------------
 * local variables:
 * eval: (load-file "../rapidsvn-dev.el")
 * end:
 */
