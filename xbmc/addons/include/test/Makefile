.PHONY: firstrule all cpptest ctest clean

HDEPFILES=$(wildcard ../*.h)
CDEPFILES=test.c $(HDEPFILES)
CPPDEPFILES=test.cc $(HDEPFILES)

firstrule: all

all: cpptest ctest

cpptest: cpp_add.o cpp_vis.o cpp_scr.o cpp_pvr.o

ctest: c_add.o c_vis.o c_scr.o c_pvr.o

clean::
	rm -f *.o

cpp_add.o: $(CDEPFILES)
	$(CXX) -c -DO_TEST_ADDON -o $@ $<

cpp_vis.o: $(CDEPFILES)
	$(CXX) -c -DO_TEST_VIS -o $@ $<

cpp_scr.o: $(CDEPFILES)
	$(CXX) -c -DO_TEST_SCR -o $@ $<

cpp_pvr.o: $(CDEPFILES)
	$(CXX) -c -DO_TEST_PVR -o $@ $<

c_add.o: $(CDEPFILES)
	$(CC) -c -DO_TEST_ADDON -o $@ $<

c_vis.o: $(CDEPFILES)
	$(CC) -c -DO_TEST_VIS -o $@ $<

c_scr.o: $(CDEPFILES)
	$(CC) -c -DO_TEST_SCR -o $@ $<

c_pvr.o: $(CDEPFILES)
	$(CC) -c -DO_TEST_PVR -o $@ $<

