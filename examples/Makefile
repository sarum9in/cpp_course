COMPILER_FLAGS = -std=c++11 -Wall -Wextra -g -O0 -D_GCC_DEBUG -D_DEBUG

JAVAC = $(JAVA_HOME)/bin/javac

CFLAGS = $(COMPILER_FLAGS)
CXXFLAGS = $(COMPILER_FLAGS)

ctargets = $(basename $(wildcard *.cpp) $(wildcard *.cc) $(wildcard *.c))

jtargets = $(addsuffix .class,$(basename $(wildcard *.java)))

all: $(ctargets) $(jtargets)

%.class: %.java
	$(JAVAC) $<

clean:
	$(RM) $(ctargets) *.class

# vim:noexpandtab:
