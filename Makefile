CC=$(CXX)
CPPFLAGS = -I/usr/X11R6/include
LDFLAGS = -L/usr/X11R6/lib -lm -lpthread -lX11

all: render

clean:
	rm -f *.o render

render: render.o
