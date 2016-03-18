obras:	obras.o esculturas.o pinturas.o arquitectonico.o main.o
	g++ obras.o esculturas.o pinturas.o arquitectonico.o main.o -o figure

main.o:	main.cpp obras.h esculturas.h pinturas.h arquitectonico.h 
	g++ -c main.cpp

arquitectonico.o:	arquitectonico.cpp obras.h pinturas.h arquitectonico.h
	g++ -c arquitectonico.cpp

pinturas.o:	pinturas.cpp obras.h pinturas.h
	g++ -c pinturas.cpp

esculturas.o:	esculturas.cpp obras.h esculturas.h
	g++ -c esculturas.cpp

obras.o:	obras.cpp obras.h
	g++ -c obras.cpp

clear:
	rm *.o
