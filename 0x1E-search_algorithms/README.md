# 0x1E-search_algorithms

# About this project:

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

[search_algos.h](0x1E-search_algorithms/search_algos.h) - Header file containing definitions and prototypes for all types and functions
[listint](0x1E-search_algorithms/listint) -  Folder of helper files for task 12, singly linked list jump search
 - [create_list.c](0x1E-search_algorithms/listint/create_list.c) - C function that creates a listint_t singly linked list.
 - [free_list.c](0x1E-search_algorithms/listint/free_list.c) - C function that frees a listint_t singly linked list.
 - [print_list.c](0x1E-search_algorithms/listint/print_list.c) - C function that prints the contents of a listint_t singly linked list.

[skiplist](0x1E-search_algorithms/skiplist) - Folder of helper files for task 13, singly skipped list jump search.
 - [create_skiplist.c](0x1E-search_algorithms/skiplist/create_skiplist.c) - C function that creates a skiplist_t singly skipped list.
 - [free_skiplist.c](0x1E-search_algorithms/skiplist/free_skiplist.c) - C function that frees a skiplist_t singly skipped list.
 - [print_skiplist.c](0x1E-search_algorithms/skiplist/print_skiplist.c:) - C function that prints the contents of a skiplist_t singly skipped list.

[0-linear.c](0x1E-search_algorithms/0-linear.c) - C function that searches for a value in an array of integers using linear search.
 * If the value is not present or the array is NULL, returns -1.
    * Otherwise, returns the first index where value is located.

[1-binary.c](0x1E-search_algorithms/1-binary.c) - C function that searches for a value in a sorted array of integers using binary search.
 * Assumes the array is sorted in ascending order and that the value to search for is not repeated in the array.
    - If the value is not present or the array is NULL, returns -1
    - Otherwise, returns the index where value is located.
[2-O](0x1E-search_algorithms/2-O) -  Text file containing the worst case time complexity of linear search.
[3-O](0x1E-search_algorithms/3-O) -  Text file containing the worst case space complexity of iterative linear search.
[4-O](0x1E-search_algorithms/4-O) - Text file containing worst case case time complexity of binary search.
[5-O](0x1E-search_algorithms/5-O) - Text file containing the worst case space complexity of binary search.
[6-O](0x1E-search_algorithms/6-O) - Text file containing the space complexity of the following algorithm:

```
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
		}
		return (map);
}

```

