CC = gcc
EXEC = programme

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SRC =$(wildcard $(SRCDIR)/*.c)
#INC =$(wilcard $(SRCDIR)/*.h)
_OBJ =$(SRC:.c=.o)

OBJ = $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(_OBJ))

all :$(EXEC)
	@echo " $(_OBJ) $(OBJ)"

%.o : %.c
	@echo "géneration de l'oject $(patsubst $(SRCDIR)/%,$(OBJDIR)/%, $@) depuis ce code $< "
	$(CC) -o $(patsubst $(SRCDIR)/%,$(OBJDIR)/%, $@) -c $<


$(EXEC) : $(_OBJ)
	@echo "géneration de l'executable depuis le $(patsubst %,$(BINDIR)/%, $@) les dependances $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$^) "
	$(CC) -o $(patsubst %,$(BINDIR)/%, $@) $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$^)
clean :
	rm -rf obj/*.o

mrproper :
	rm -rf $(EXEC)