%.pdf: $(wildcard *.tex) $(addsuffix .ps,$(basename $(wildcard *.dot)))
	xelatex $<
	xelatex $<

main.pdf:

open: main.pdf
	xdg-open $<

%.ps: %.dot
	dot -Tps:cairo -o$@ $<

clean:
	$(RM) *.ps *.pdf *.aux *.log *.toc *.nav *.snm *.out

.PHONY: open clean
