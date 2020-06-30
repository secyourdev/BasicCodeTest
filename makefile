all:
	cd AFL && ${MAKE}
	cd CUnit && ${MAKE}
	cd doxygen && ${MAKE}
	cd Gcov && ${MAKE}
	cd Gprof && ${MAKE}
	cd src && ${MAKE}

clean:
	cd AFL && ${MAKE} clean
	cd CUnit && ${MAKE} clean
	cd doxygen && ${MAKE} clean
	cd Gcov && ${MAKE} clean
	cd Gprof && ${MAKE} clean
	cd src && ${MAKE} clean
