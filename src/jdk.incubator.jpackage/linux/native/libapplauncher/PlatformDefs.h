/*
 * Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

#ifndef PLATFORM_DEFS_H
#define PLATFORM_DEFS_H

#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dlfcn.h>
#include <libgen.h>
#include <string>

using namespace std;

#ifndef LINUX
#define LINUX
#endif

#define _T(x) x

typedef char TCHAR;
typedef std::string TString;
#define StringLength strlen

typedef unsigned long DWORD;

#define TRAILING_PATHSEPARATOR '/'
#define BAD_TRAILING_PATHSEPARATOR '\\'
#define PATH_SEPARATOR ':'
#define BAD_PATH_SEPARATOR ';'
#define MAX_PATH 1000

typedef long TPlatformNumber;
typedef pid_t TProcessID;

#define HMODULE void*

typedef void* Module;
typedef void* Procedure;

#define StringToFileSystemString PlatformString
#define FileSystemStringToString PlatformString

#endif // PLATFORM_DEFS_H
