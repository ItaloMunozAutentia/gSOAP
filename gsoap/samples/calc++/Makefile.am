####### This is the input file for automake, which will generate Makefile.in ##########
## not a GNU package. You can remove this line, if
## you have all needed files, that a GNU package needs
AUTOMAKE_OPTIONS = foreign 1.4

noinst_PROGRAMS = calcclient calcserver
SOAPHEADER = calc.h

include ../Makefile.defines
include ../Makefile.cpp_proxy_rules
SOAP_NS = calc.nsmap calc.wsdl

calcclient_SOURCES = calcclient.cpp $(SOAPHEADER) $(SOAP_CPP_CORE) soapcalcProxy.cpp
calcclient_LDADD = $(SOAP_CPP_LIB) $(SAMPLE_EXTRA_LIBS)

calcserver_SOURCES = calcserver.cpp $(SOAPHEADER) $(SOAP_CPP_CORE) soapcalcService.cpp
calcserver_LDADD = $(SOAP_CPP_LIB) $(SAMPLE_EXTRA_LIBS) -lm
