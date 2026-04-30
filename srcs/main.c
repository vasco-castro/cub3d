
int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		// write(2, RED "Error\n" RESET, 7);
		return (clean_exit(), 1);
	}

	parse_map(argv[1]);
	load_map();

	return (clean_exit(), 0);
}
