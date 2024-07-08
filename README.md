# libft
Development repo for libft project
## About
This project is about coding a C library.
It will contain a lot of general purpose functions your programs will rely upon.
### Libc Library Functions
#### Functions from <ctype.h> library
- [x] ft_isalpha
- [x] ft_isdigit
- [x] ft_isalnum
- [x] ft_isascii
- [x] ft_isprint
- [x] ft_toupper
- [x] ft_tolower
#### Functions from <stdlib.h> library
- [x] ft_atoi
- [x] ft_calloc
#### Functions from <string.h> library
##### String manipulation functions
- [x] ft_strlen
- [x] ft_strlcpy
- [x] ft_strlcat
- [x] ft_strchr
- [x] ft_strrchr
- [x] ft_strncmp
- [x] ft_strnstr
- [x] ft_strdup
##### Memory manipulation functions
- [x] ft_memcpy
- [x] ft_memset
- [x] ft_bzero
- [x] ft_memmove
- [x] ft_memchr
- [x] ft_memcmp
### Additional functions not from libc library
#### Functions from <stdlib.h> library
- [x] ft_itoa
#### Functions from <string.h> library
##### String manipulation functions
- [x] ft_substr
- [x] ft_strjoin
- [x] ft_strtrim
- [x] ft_split
##### String transformation functions
- [x] ft_strmapi
- [x] ft_striteri
#### Functions from <unistd.h> library
##### File manipulation functions
- [x] ft_putchar_fd
- [x] ft_putstr_fd
- [x] ft_putendl_fd
- [x] ft_putnbr_fd
### Bonus functions
#### Functions from <list.h> library
##### Linked list functions
- [x] ft_lstnew
- [x] ft_lstadd_front
- [x] ft_lstsize
- [x] ft_lstlast
- [x] ft_lstadd_back
- [x] ft_lstdelone
- [x] ft_lstclear
- [x] ft_lstiter
- [x] ft_lstmap
### Other functions (not mandatory)
#### Functions from <ctype.h> library
- [x] ft_islower
- [x] ft_isupper
- [x] ft_isspace
- [x] ft_isblank
- [x] ft_iscntrl
- [x] ft_isgraph
- [x] ft_ispunct
- [x] ft_isxdigit
#### Functions from <string.h> library
##### String manipulation functions
- [x] ft_strcpy
- [x] ft_strncpy
- [x] ft_strcat
- [x] ft_strncat
- [x] ft_strstr
- [x] ft_strcmp
#### Functions from <unistd.h> library
##### Standard I/O functions
- [x] ft_putchar
- [x] ft_putstr
- [x] ft_putendl
- [x] ft_putnbr
#### Custom Functions from <ft_func.h> library
##### Custom functions
- [x] ft_ternary
- [x] ft_foreach
- [x] ft_any
- [x] ft_map
- [x] ft_reduce
#### Functions from <queue.h> library
##### Queue functions
- [x] ft_queue_init
- [x] ft_queue_enqueue
- [x] ft_queue_dequeue
- [x] ft_queue_is_full
- [x] ft_queue_is_empty
- [x] ft_queue_clear
#### Functions from <btree.h> library
##### Binary tree functions
- [x] ft_btree_create_node
- [x] ft_btree_apply_prefix
- [x] ft_btree_apply_infix
- [x] ft_btree_apply_suffix
- [x] ft_btree_insert_data
- [x] ft_btree_search_item
- [x] ft_btree_level_count
- [x] ft_btree_apply_by_level
#### Functions from <stack.h> library
##### Stack functions
- [x] ft_stack_new
- [x] ft_stack_push
- [x] ft_stack_pop
- [x] ft_stack_top
- [x] ft_stack_size
- [x] ft_stack_is_empty
- [x] ft_stack_clear
#### Functions from <sort.h> library
##### Stack functions
- [ ] ft_sort_bubble
- [ ] ft_sort_insertion
- [ ] ft_sort_selection
- [ ] ft_sort_quick
- [ ] ft_sort_merge
#### Functions from <vector.h> library
##### Vector functions
- [ ] ft_vector_new
- [ ] ft_vector_push_back
- [ ] ft_vector_pop_back
- [ ] ft_vector_size
- [ ] ft_vector_capacity
- [ ] ft_vector_is_empty
- [ ] ft_vector_clear
- [ ] ft_vector_at
- [ ] ft_vector_reserve
- [ ] ft_vector_resize
- [ ] ft_vector_shrink_to_fit
#### Functions from <map.h> library
##### Map functions
- [ ] ft_map_new
- [ ] ft_map_insert
- [ ] ft_map_erase
- [ ] ft_map_find
- [ ] ft_map_size
- [ ] ft_map_is_empty
- [ ] ft_map_clear
#### Functions from <set.h> library
##### Set functions
- [ ] ft_set_new
- [ ] ft_set_insert
- [ ] ft_set_erase
- [ ] ft_set_find
- [ ] ft_set_size
- [ ] ft_set_is_empty
- [ ] ft_set_clear
#### Functions from <stdio.h> library
##### Printf functions
- [ ] ft_printf
- [ ] ft_vprintf
