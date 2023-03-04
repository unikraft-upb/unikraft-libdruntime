/* SPDX-License-Identifier: BSD-3-Clause */
/*
 *
 * Authors: Marius-Cristian Baciu <marius.baciu@stud.acs.upb.ro>
 *
 *
 * Copyright (c) 2020, University Politehnica of Bucharest. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *	  notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *	  notice, this list of conditions and the following disclaimer in the
 *	  documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *	  contributors may be used to endorse or promote products derived from
 *	  this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */



#include <bits/alltypes.h>
#include <sys/stat.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>
#include <stdint.h>

FILE * _stdin;
FILE *_stdout;
FILE *_stderr;

void initStdIO(void)
{
	_stdin = stdin;
	_stdout = stdout;
	_stderr = stderr;
}

const struct _pthread_cleanup_buffer {};

const struct tls_index {};

const struct msghdr {};
const struct cmsghdr {};
struct cmsghdr *__cmsg_nxthdr(const struct msghdr *msg,
		const struct cmsghdr *cmsg)
{
	return NULL;
}

/*
 *math.d
 */
int __isinf(double x)
{
	return isinf(x);
}

int __isinfl(long double x)
{
	return isinf(x);
}

int __isinff(float x)
{
	return isinf(x);
}

int __isnan(double x)
{
	return isnan(x);
}

int __isnanf(float x)
{
	return isnan(x);
}

int __isnanl(long double x)
{
	return isnan(x);
}

int __finite(double x)
{
	return 0;
}

int __finitel(long double x)
{
	return 0;
}

int __finitef(float x)
{
	return 0;
}

char *tzname[2];
