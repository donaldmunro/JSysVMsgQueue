CC = gcc
CFLAGS = -I. -fPIC -fomit-frame-pointer
LD = gcc
LDFLAGS = -L. -shared
NAME = libmsgctl-amd64.so
OBJS = msgctl.o
LIBS =

all:	$(NAME)
	echo done

clean:
	rm *.o *.so*

$(NAME):	$(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) $(LIBS) -o $(NAME)

%.o:%.c msgctl.h
	$(CC) -c $(CFLAGS) $+
