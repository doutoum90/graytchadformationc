# Leçon C 17
## Organisation d'un projet et makefile

### Organisation
- le code source dans le dossier `src`
- les objets dans le dossier `obj`
- les executables(binaires) dans le dossier `bin`


### Makefile Avancé

[installation sur windows](http://gnuwin32.sourceforge.net/packages/make.htm)

``` makefile
cible: dependances
	commandes
```
quelques variables utiles

|||
| ------ | ------|
| Variable  | sens	|
|	$@		| cible |
|	$<		| premiere dependances |
|	$^		| liste des dependances	|
|	$?		| liste dépendances plus récente que la cible|
|	$*		| nom de fichier sans l'extension|


Convention de nommage des variables

|||
| ------ | ------|
|	CC  | compilateur	|
|	CFLAGS	| les drapeaux |
|	LDFLAGS		| édition des liens |
|	SRC		| le dossier source	|
|	OBJ	| le dossier contenant les objets|
|	BIN	| le dossier contenant les binaires|



exemple de makefile

``` makefile
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
	@echo " $(_OBJ)  $(OBJ)"

%.o : %.c
	@echo "géneration de l'oject $(patsubst $(SRCDIR)/%,$(OBJDIR)/%, $@) depuis ce code $< "
	$(CC) -o $(patsubst $(SRCDIR)/%,$(OBJDIR)/%, $@) -c $<

  
$(EXEC) : $(_OBJ)
	@echo "géneration de l'executable depuis le $(patsubst %,$(BINDIR)/%, $@) les dependances $(patsubst$(SRCDIR)/%,$(OBJDIR)/%,$^) "
	$(CC) -o $(patsubst %,$(BINDIR)/%, $@)  $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$^)

clean :
	rm -rf obj/*.o

mrproper :
	rm -rf $(EXEC)
```