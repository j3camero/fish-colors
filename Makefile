CC=$(CXX)
CPPFLAGS = -Dcimg_display=0 -I/usr/X11R6/include
LDFLAGS = -L/usr/X11R6/lib

all: render

clean:
	rm -f *.o render

render: render.o
