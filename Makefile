%.pdf: %.tex $(wildcard *.tex) $(addsuffix .ps,$(basename $(wildcard *.dot))) $(wildcard examples/*.cpp)
	xelatex $<
	xelatex $<

TARGETS=$(addsuffix .pdf,$(basename $(wildcard lection*.tex)))

all: $(TARGETS)

%.ps: %.dot
	dot -Tps:cairo -o$@ $<

clean:
	$(RM) *.ps *.pdf *.aux *.log *.toc *.nav *.snm *.out

.PHONY: all open clean

# vim:noexpandtab:
