CC=$(CXX)
CPPFLAGS = -Dcimg_display=0 -I/usr/X11R6/include
LDFLAGS = -ljsoncpp

all: render test

clean:
	rm -f *.o render test-main

render: render.o

test: test-main
	./test-main

test-main: test-main.o \
           phenome.o phenome-test.o \
