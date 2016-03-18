museo.exe:	obras.o esculturas.o pinturas.o arquitectonico.o literatura.o main.o
	g++ obras.o esculturas.o pinturas.o arquitectonico.o literatura.o main.o -o museo

main.o:	main.cpp obras.h esculturas.h pinturas.h arquitectonico.h literatura.h 
	g++ -c main.cpp

literatura.o:	literatura.cpp obras.h pinturas.h literatura.h
	g++ -c literatura.cpp

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
