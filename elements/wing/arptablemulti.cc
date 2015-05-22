/*
 * arptablemulti.{cc,hh} -- ARP resolver element
 * Eddie Kohler, Stefano Testi, Roberto Riggio
 *
 * Copyright (c) 1999-2000 Massachusetts Institute of Technology
 * Copyright (c) 2005 Regents of the University of California
 * Copyright (c) 2008 Meraki, Inc.
 * Copyright (c) 2009 CREATE-NET
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, subject to the conditions
 * listed in the Click LICENSE file. These conditions include: you must
 * preserve this copyright notice, and you cannot mention the copyright
 * holders in advertising related to the Software without their permission.
 * The Software is provided WITHOUT ANY WARRANTY, EXPRESS OR IMPLIED. This
 * notice is a summary of the Click LICENSE file; the license in that file is
 * legally binding.
 */

#include <click/config.h>
#include "arptablemulti.hh"
CLICK_DECLS

ARPTableMulti::ARPTableMulti()
{
}

ARPTableMulti::~ARPTableMulti()
{
}

CLICK_ENDDECLS
EXPORT_ELEMENT(ARPTableMulti)
ELEMENT_MT_SAFE(ARPTableMulti)
