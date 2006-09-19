/*
  Copyright Red Hat, Inc. 2005

  This program is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by the
  Free Software Foundation; either version 2, or (at your option) any
  later version.

  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; see the file COPYING.  If not, write to the
  Free Software Foundation, Inc.,  675 Mass Ave, Cambridge, 
  MA 02139, USA.
*/
/*
 * Author: Stanko Kupcevic <kupcevic@redhat.com>
 */
/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.iterate_access.conf,v 1.6 2003/09/29 22:30:36 hardaker Exp $
 */


#ifndef nodesMIB_h
#define nodesMIB_h

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>


void initialize_nodesMIB(void);

extern "C" {
config_require(rhcNodesTable_access)
       /** other required module components */
       config_require(rhcNodesTable_checkfns)
       
       /*
	* function declarations 
	*/
       void            init_rhcNodesTable(void);
       void            initialize_table_rhcNodesTable(void);
       Netsnmp_Node_Handler rhcNodesTable_handler;
};

#include "nodesMIB_columns.h"

#include "nodesMIB_enums.h"


#endif // nodesMIB_h