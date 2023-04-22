all: compile exec

compile:
	@echo "Compiling..."
	@gcc main.c -o main.x
	@echo "Compiled\n"
	@echo ""

exec:
	@echo "Execution :"
	@./main.x