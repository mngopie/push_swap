*This project has been created as part of the 42 curriculum by pjakosal*

# push_swap

## Description
push_swap is a sorting algorithm project from the 42 curriculum. The objective is to sort a stack of integers using a limited set of operations and the smallest possible number of moves.

The program receives a list of integers as arguments and must output a sequence of instructions that sorts the numbers in ascending order using only two stacks:

Stack A (initial stack containing the numbers)

Stack B (temporary stack used during sorting)

The allowed operations manipulate the stacks by `swapping`, `pushing`, `rotating`, or `reverse rotating` elements. The challenge of this project is to design an efficient algorithm that minimizes the total number of operations while correctly sorting the stack.

To optimize sorting, the program assigns each number an index corresponding to its position in the sorted order. Sorting decisions are then made using these indexes rather than raw values, allowing more efficient strategies such as `chunk-based sorting` for larger inputs.

## Instructions

### Compilation
Compile the program using the provided Makefile:

`make`

Other available commands:

`make clean`   # removes object files
`make fclean`  # removes executable and object files
`make re`      # recompiles the project

Manual compilation command:

`cc -Wall -Wextra -Werror -I include main.c commands/*.c parsing/*.c sorting/*.c srcs/*.c libft/libft.a -o push_swap`

The flags used are:

- Wall -Wextra -Werror – enable strict compiler warnings

- I include – include the project header directory

- o push_swap – name of the output executable

### Execution
Run the program by passing integers as arguments:

`./push_swap 3 2 1`

The program will output a list of stack operations required to sort the numbers.

Example output:

sa
rra

### Verifying the Result
To verify that the program sorts correctly, you can use the official checker provided by 42:

`ARG="3 2 1"; ./push_swap $ARG | ./checker_OS $ARG`

Expected result:

`OK`

### Sorting Strategy
Different strategies are used depending on the number of elements:

#### Small Inputs
- 2 elements: simple swap if needed

- 3 elements: handled with a small set of conditional operations

- 4–5 elements: smallest elements are pushed to stack B, remaining elements are sorted, then pushed back

#### Larger Inputs
For larger datasets, the program uses an `index-based chunk sorting strategy`:

Assign each node an index representing its position in the sorted order

Divide the indexes into ranges (chunks)

Push elements from stack A to stack B based on chunk ranges

Push elements back to stack A in sorted order

This reduces the number of operations required to sort the stack.

## Resources
The following resources were used to better understand sorting algorithms, linked lists, and the push_swap problem:

- 42 project subject documentation

- Discussions and examples related to push_swap sorting strategies such as Radix sort, small sorting and the such.
https://www.geeksforgeeks.org/dsa/quick-sort-algorithm/
https://github.com/AdrianWR/push_swap

- push_swap TUTORIAL! (YouTube)
https://www.youtube.com/watch?v=wRvipSG4Mmk

- Link list explanations
https://www.w3schools.com/c/c_structs.php
https://fahadsultan.com/csc122/data/linkedlists_doubly.html
https://www.geeksforgeeks.org/dsa/linked-list-data-structure/

- AI tools were used for clarifying concepts, better understanding of the flow of linked list and sorting strategies used for the program.