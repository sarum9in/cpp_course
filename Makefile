%.pdf: %.tex header.tex intro.tex
	xelatex $< || (rm -f $@ && exit 1)
	xelatex $< || (rm -f $@ && exit 1)

TARGETS=$(addsuffix .pdf,$(basename $(wildcard lection*.tex)))

all: $(TARGETS)

%.ps: %.dot
	dot -Tps:cairo -o$@ $<

clean:
	$(RM) *.ps *.pdf *.aux *.log *.toc *.nav *.snm *.out

.PHONY: all open clean

# vim:noexpandtab:
