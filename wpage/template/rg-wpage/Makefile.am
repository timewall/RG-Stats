ACLOCAL_AMFLAGS = -I m4 --install
AUTOMAKE_OPTIONS = subdir-objects

bin_PROGRAMS = rg-wpage

ecppSources = \
	rg-wpage.ecpp

staticSources = \
	resources/rg-wpage.css

rg_wpage_SOURCES = \
	main.cpp \
	$(ecppSources)

nodist_rg_wpage_SOURCES = \
	resources.cpp

rg_wpage_LDADD = -lcxxtools -ltntnet

nobase_dist_noinst_DATA = $(staticSources)

CLEANFILES = $(ecppSources:.ecpp=.cpp) $(ecppSources:.ecpp=.deps) resources.cpp

#
# Rules for tntnet applications
#
ECPPFLAGS=-I$(srcdir)

resources.cpp: $(staticSources) Makefile.am
	$(AM_V_GEN)$(ECPPC) -bb -z -n resources -p -o resources.cpp $(ECPPFLAGS) $(staticSources)

SUFFIXES=.ecpp .cpp

.ecpp.cpp:
	$(AM_V_GEN)$(ECPPC) -n `echo $<|$(SED) 's|^$(srcdir)/||; s|\.ecpp$$||'` $(ECPPFLAGS) -o $@ $<
.ecpp.deps:
	$(AM_V_GEN)$(ECPPC) -M $(ECPPFLAGS) $< | $(SED) '1s/\(.*\).cpp:/\1.cpp \1.deps:/' > $@

-include $(ecppSources:.ecpp=.deps)
