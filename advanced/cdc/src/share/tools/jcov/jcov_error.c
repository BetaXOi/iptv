/*
 * @(#)jcov_error.c	1.11 06/10/10
 *
 * Copyright  1990-2008 Sun Microsystems, Inc. All Rights Reserved.  
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER  
 *   
 * This program is free software; you can redistribute it and/or  
 * modify it under the terms of the GNU General Public License version  
 * 2 only, as published by the Free Software Foundation.   
 *   
 * This program is distributed in the hope that it will be useful, but  
 * WITHOUT ANY WARRANTY; without even the implied warranty of  
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  
 * General Public License version 2 for more details (a copy is  
 * included at /legal/license.txt).   
 *   
 * You should have received a copy of the GNU General Public License  
 * version 2 along with this work; if not, write to the Free Software  
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  
 * 02110-1301 USA   
 *   
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa  
 * Clara, CA 95054 or visit www.sun.com if you need additional  
 * information or have any questions. 
 *
 */

#include "javavm/include/porting/ansi/stdio.h"
#include "javavm/include/porting/ansi/stdlib.h"
#include "jcov.h"

void jcov_internal_error(const char *message) {
    fprintf(stderr, "*** JCOV internal error: %s\n", message);
    CALL(ProfilerExit)((jint)1);
}

void jcov_error(const char *message) {
    fprintf(stderr, "*** JCOV error : %s\n", message);
}

void jcov_warn(const char *message) {
    fprintf(stderr, "*** JCOV WARNING : %s\n", message);
}

void jcov_info(const char *message) {
    fprintf(stdout, "### JCOV INFO : %s\n", message);
}

void jcov_error_stop(const char *message) {
    jcov_error(message);
    CALL(ProfilerExit)((jint)1);
}