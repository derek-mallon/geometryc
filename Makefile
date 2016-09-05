all:
	clang -Ofast -Wall -dynamiclib -o libgeometry.dylib geometry.c 
install:
	mv libgeometry.dylib /usr/lib
	cp geometry.h /usr/local/include
remove:
	rm /usr/lib/libgeometry.dylib
	rm /usr/local/inclue/geometry.h
