/*
 * Copyright (C) 1998-2000  Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM
 * DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL
 * INTERNET SOFTWARE CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING
 * FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef GENERIC_HINFO_13_H
#define GENERIC_HINFO_13_H 1

/* $Id: hinfo_13.h,v 1.21 2000/08/01 01:25:18 tale Exp $ */

typedef struct dns_rdata_hinfo {
	dns_rdatacommon_t	common;
	isc_mem_t		*mctx;
	char			*cpu;
	char			*os;
	isc_uint8_t		cpu_len;
	isc_uint8_t		os_len;
} dns_rdata_hinfo_t;

#endif /* GENERIC_HINFO_13_H */
