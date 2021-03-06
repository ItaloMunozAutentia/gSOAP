/* QuoteStub.h
   Generated by gSOAP 2.8.12 from quote.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef QuoteStub_H
#define QuoteStub_H
#ifndef WITH_NOGLOBAL
#define WITH_NOGLOBAL
#endif
#include "stdsoap2.h"
#if GSOAP_VERSION != 20812
# error "GSOAP VERSION MISMATCH IN GENERATED CODE: PLEASE REINSTALL PACKAGE"
#endif


namespace Quote {

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_Quote_ns__getQuoteResponse
#define SOAP_TYPE_Quote_ns__getQuoteResponse (10)
/* ns:getQuoteResponse */
struct ns__getQuoteResponse
{
public:
	float *Result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:float */
public:
	int soap_type() const { return 10; } /* = unique id SOAP_TYPE_Quote_ns__getQuoteResponse */
};
#endif

#ifndef SOAP_TYPE_Quote_ns__getQuote
#define SOAP_TYPE_Quote_ns__getQuote (11)
/* ns:getQuote */
struct ns__getQuote
{
public:
	char *symbol;	/* optional element of type xsd:string */
public:
	int soap_type() const { return 11; } /* = unique id SOAP_TYPE_Quote_ns__getQuote */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Quote_SOAP_ENV__Header
#define SOAP_TYPE_Quote_SOAP_ENV__Header (12)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	int soap_type() const { return 12; } /* = unique id SOAP_TYPE_Quote_SOAP_ENV__Header */
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Quote_SOAP_ENV__Code
#define SOAP_TYPE_Quote_SOAP_ENV__Code (13)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
public:
	int soap_type() const { return 13; } /* = unique id SOAP_TYPE_Quote_SOAP_ENV__Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Quote_SOAP_ENV__Detail
#define SOAP_TYPE_Quote_SOAP_ENV__Detail (15)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
public:
	int soap_type() const { return 15; } /* = unique id SOAP_TYPE_Quote_SOAP_ENV__Detail */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Quote_SOAP_ENV__Reason
#define SOAP_TYPE_Quote_SOAP_ENV__Reason (18)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
public:
	int soap_type() const { return 18; } /* = unique id SOAP_TYPE_Quote_SOAP_ENV__Reason */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Quote_SOAP_ENV__Fault
#define SOAP_TYPE_Quote_SOAP_ENV__Fault (19)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
public:
	int soap_type() const { return 19; } /* = unique id SOAP_TYPE_Quote_SOAP_ENV__Fault */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE_Quote__QName
#define SOAP_TYPE_Quote__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE_Quote__XML
#define SOAP_TYPE_Quote__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


} // namespace Quote


#endif

/* End of QuoteStub.h */
