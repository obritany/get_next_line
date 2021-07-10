# get_next_line

A C function that reads any valid file line by line until the end.

### What is get_next_line?

It is an individual project that basically reads a file line by line.

The goal here is to be able to do it by using any functions from my `libft` and only the standard functions `read`, `malloc` and `free`.

So it makes the project a little harder.

I definitely learn some more about static variables, pointers, arrays, linked lists (if you decide to do the bonus part), dynamic memory allocation and file manipulation.

### Build the executable:
	
	gcc -Wall -Wextra -Werror -I./libft/includes/ -L./libft -lft -o gnl get_next_line.c main.c

-I tells the compiler where your library header files are. `./libft/includes/` in this case

-L tells it where your library resides. `./libft` here

-l takes the name of your library. This is the set of characters that come after `lib` in your library name.

Alright, the last command created a `gnl` executable in your directory. Now test it with:

	./gnl test.txt

It should read the whole file to you. Kinda like a basic `cat` implementation.
