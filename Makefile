.PHONY: test
test: build
	(cd build; make Test)
	./build/test.out


.PHONY: rebuild
rebuild:
	rm -r build
	mkdir build; cd build; cmake ../

.PHONY: cmake
cmake:
	cd build; cmake ../