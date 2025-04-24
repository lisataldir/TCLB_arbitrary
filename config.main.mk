
CPU = 1

TOOLS = tools
RT = $(TOOLS)/RT -b
MKPATH = $(TOOLS)/mkpath
RS = R --slave --quiet --vanilla -f
TAPENADE = 
ADMOD = tools/ADmod.R

RTOPT=
RTOPT_ADJ=ADJOINT=1
SRC=src
DEST=CLB

CP=cp
