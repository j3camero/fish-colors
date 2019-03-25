CC=$(CXX)
CPPFLAGS = -Dcimg_display=0 -I/usr/X11R6/include
LDFLAGS = -ljsoncpp

all: render

clean:
	rm -f *.o render

render: render.o
