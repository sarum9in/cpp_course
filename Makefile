TARGETS=$(addsuffix .pdf,$(basename $(wildcard lection*.tex)))
DEPFILES=$(addsuffix .d,$(TARGETS))

all: $(TARGETS)

-include $(DEPFILES)

%.pdf: %.tex %.pdf.d
	xelatex $< || (rm -f $@ && exit 1)
	xelatex $< || (rm -f $@ && exit 1)

%.pdf.d: %.tex
	@ sed -rn 's|^.*\\lstinputlisting\{(examples/.*\.cpp)}.*$$|\1|p' $^ | xargs -d '\n' echo "$(patsubst %.tex,%.pdf,$<): $< header.tex intro.tex" >$@

%.ps: %.dot
	dot -Tps:cairo -o$@ $<

clean:
	$(RM) *.ps *.pdf *.aux *.log *.toc *.nav *.snm *.out *.pdf.d

.PHONY: all open clean

# vim:noexpandtab:
