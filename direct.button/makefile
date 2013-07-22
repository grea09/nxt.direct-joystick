# Makefile Generique
 
EXT_SRC = nxc
CXX = nbc
EXT_EXEC = rxe

COMPIL = ./COMPIL
CXXFLAGS = -v=107 -EF

SRC = $(wildcard *.$(EXT_SRC))
EXEC = $(SRC:.$(EXT_SRC)=.$(EXT_EXEC))
EXEC := $(addprefix $(COMPIL)/, $(EXEC))
 
all: $(EXEC)

$(COMPIL)/%.$(EXT_EXEC): %.$(EXT_SRC)
	@echo "Compilation de $< vers $@ ..."
	@echo `mkdir $(COMPIL) 2>/dev/null` >/dev/null
	@$(CXX) "$<" -O="$@" $(CXXFLAGS)
	@echo "Envois vers la brique NXT de $@..."
	@echo "y" | t2n -put $@ 2>/dev/null

exec:
	@echo "Envois vers la brique NXT ..."
	@t2n -put "$<"
 
clean:
	@echo "Nettoyage de primtemps."
	@rm -rf $(EXEC)
 
mrproper:
	@echo "Sa magie c'est sa puissance !"
	@rm -rf $(COMPIL)/*
	@rmdir --ignore-fail-on-non-empty $(COMPIL)
