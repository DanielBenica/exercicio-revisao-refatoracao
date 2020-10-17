CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=program

BUILD_DIR    = ./build
SRC_DIR    = ./src
INCLUDE_DIR  = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Vendedor.o ${BUILD_DIR}/Engenheiro.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Vendedor.o: ${INCLUDE_DIR}/Empregado/Vendedor.hpp ${SRC_DIR}/Empregado/Vendedor.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/Empregado/Vendedor.cpp -o ${BUILD_DIR}/Vendedor.o

${BUILD_DIR}/Engenheiro.o: ${INCLUDE_DIR}/Empregado/Engenheiro.hpp ${SRC_DIR}/Empregado/Engenheiro.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/Empregado/Engenheiro.cpp -o ${BUILD_DIR}/Engenheiro.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Empregado/Vendedor.hpp ${INCLUDE_DIR}/Empregado/Engenheiro.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/* 
