%.pdf: %.tex $(wildcard *.tex) $(addsuffix .ps,$(basename $(wildcard *.dot))) $(wildcard examples/*.cpp)
	xelatex $<
	xelatex $<

TARGETS=$(addsuffix .pdf,$(basename $(wildcard lection*.tex)))

$(TARGETS):

%.ps: %.dot
	dot -Tps:cairo -o$@ $<

clean:
	$(RM) *.ps *.pdf *.aux *.log *.toc *.nav *.snm *.out

.PHONY: open clean

# vim:noexpandtab:
