all : main product.c main.c

main : src/OperationBetweenMatrix/product.c src/main.c
	cc src/OperationBetweenMatrix/product.c src/main.c -o main