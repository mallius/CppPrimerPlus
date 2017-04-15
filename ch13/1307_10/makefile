prgo = a b
all: ${prgo}
a: brass.cpp usebrass1.cpp
	g++ brass.cpp usebrass1.cpp -o $@
b: brass.cpp usebrass2.cpp
	g++ brass.cpp usebrass2.cpp -o $@
clean:
	rm -f ${prgo}
