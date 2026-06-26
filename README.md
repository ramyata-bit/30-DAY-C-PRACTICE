# 30-Day C Programming Practice Sheet

Solutions for the 30-day C programming assignment — 4 programs per day, 120 in total.

**Suggested GitHub repo name:** `30-day-c-programming-practice`

## Folder layout

Each day has its own folder. Files are named after what the program actually does (not `q01.c`, `q02.c`, etc.).

```
day01/
  sum_natural_numbers.c
  multiplication_table.c
  factorial.c
  count_digits.c
day02/
  sum_of_digits.c
  reverse_number.c
  ...
day30/
  mini_project_attendance.c
```

## How to compile

```bash
gcc day01/sum_natural_numbers.c -o sum_natural_numbers
./sum_natural_numbers
```

Windows (MinGW):

```bash
gcc day01\sum_natural_numbers.c -o sum_natural_numbers.exe
sum_natural_numbers.exe
```

Programs that use `math.h` need `-lm`:

```bash
gcc day04/check_armstrong.c -o check_armstrong -lm
```

## Day-wise programs

### Day 1
| Q | File | Problem |
|---|------|---------|
| 1 | `sum_natural_numbers.c` | Calculate sum of first N natural numbers |
| 2 | `multiplication_table.c` | Print multiplication table of a given number |
| 3 | `factorial.c` | Find factorial of a number |
| 4 | `count_digits.c` | Count digits in a number |

### Day 2
| Q | File | Problem |
|---|------|---------|
| 5 | `sum_of_digits.c` | Find sum of digits of a number |
| 6 | `reverse_number.c` | Reverse a number |
| 7 | `product_of_digits.c` | Find product of digits |
| 8 | `palindrome_number.c` | Check whether a number is palindrome |

### Day 3
| Q | File | Problem |
|---|------|---------|
| 9 | `check_prime.c` | Check whether a number is prime |
| 10 | `primes_in_range.c` | Print prime numbers in a range |
| 11 | `gcd.c` | Find GCD of two numbers |
| 12 | `lcm.c` | Find LCM of two numbers |

### Day 4
| Q | File | Problem |
|---|------|---------|
| 13 | `fibonacci_series.c` | Generate Fibonacci series |
| 14 | `nth_fibonacci.c` | Find nth Fibonacci term |
| 15 | `check_armstrong.c` | Check Armstrong number |
| 16 | `armstrong_in_range.c` | Print Armstrong numbers in a range |

### Day 5
| Q | File | Problem |
|---|------|---------|
| 17 | `perfect_number.c` | Check perfect number |
| 18 | `strong_number.c` | Check strong number |
| 19 | `print_factors.c` | Print factors of a number |
| 20 | `largest_prime_factor.c` | Find largest prime factor |

### Day 6
| Q | File | Problem |
|---|------|---------|
| 21 | `decimal_to_binary.c` | Convert decimal to binary |
| 22 | `binary_to_decimal.c` | Convert binary to decimal |
| 23 | `count_set_bits.c` | Count set bits in a number |
| 24 | `power_without_pow.c` | Find x^n without pow() |

### Day 7
| Q | File | Problem |
|---|------|---------|
| 25 | `recursive_factorial.c` | Recursive factorial |
| 26 | `recursive_fibonacci.c` | Recursive Fibonacci |
| 27 | `recursive_sum_digits.c` | Recursive sum of digits |
| 28 | `recursive_reverse_number.c` | Recursive reverse number |

### Day 8
| Q | File | Problem |
|---|------|---------|
| 29 | `half_pyramid.c` | Print half pyramid pattern |
| 30 | `number_triangle.c` | Print number triangle |
| 31 | `character_triangle.c` | Print character triangle |
| 32 | `repeated_number_pattern.c` | Print repeated-number pattern |

### Day 9
| Q | File | Problem |
|---|------|---------|
| 33 | `reverse_star_pattern.c` | Print reverse star pattern |
| 34 | `reverse_number_triangle.c` | Print reverse number triangle |
| 35 | `repeated_character_pattern.c` | Print repeated character pattern |
| 36 | `hollow_square.c` | Print hollow square pattern |

### Day 10
| Q | File | Problem |
|---|------|---------|
| 37 | `star_pyramid.c` | Print star pyramid |
| 38 | `reverse_pyramid.c` | Print reverse pyramid |
| 39 | `number_pyramid.c` | Print number pyramid |
| 40 | `character_pyramid.c` | Print character pyramid |

### Day 11
| Q | File | Problem |
|---|------|---------|
| 41 | `function_sum_two_numbers.c` | Write function to find sum of two numbers |
| 42 | `function_find_maximum.c` | Write function to find maximum |
| 43 | `function_check_prime.c` | Write function to check prime |
| 44 | `function_factorial.c` | Write function to find factorial |

### Day 12
| Q | File | Problem |
|---|------|---------|
| 45 | `function_palindrome.c` | Write function for palindrome |
| 46 | `function_armstrong.c` | Write function for Armstrong |
| 47 | `function_fibonacci.c` | Write function for Fibonacci |
| 48 | `function_perfect_number.c` | Write function for perfect number |

### Day 13
| Q | File | Problem |
|---|------|---------|
| 49 | `input_display_array.c` | Input and display array |
| 50 | `array_sum_average.c` | Find sum and average of array |
| 51 | `largest_smallest_element.c` | Find largest and smallest element |
| 52 | `count_even_odd.c` | Count even and odd elements |

### Day 14
| Q | File | Problem |
|---|------|---------|
| 53 | `linear_search.c` | Linear search |
| 54 | `element_frequency.c` | Frequency of an element |
| 55 | `second_largest.c` | Second largest element |
| 56 | `find_duplicates.c` | Find duplicates in array |

### Day 15
| Q | File | Problem |
|---|------|---------|
| 57 | `reverse_array.c` | Reverse array |
| 58 | `rotate_array_left.c` | Rotate array left |
| 59 | `rotate_array_right.c` | Rotate array right |
| 60 | `move_zeroes_to_end.c` | Move zeroes to end |

### Day 16
| Q | File | Problem |
|---|------|---------|
| 61 | `missing_number.c` | Find missing number in array |
| 62 | `max_frequency_element.c` | Find maximum frequency element |
| 63 | `pair_with_given_sum.c` | Find pair with given sum |
| 64 | `remove_duplicates.c` | Remove duplicates from array |

### Day 17
| Q | File | Problem |
|---|------|---------|
| 65 | `merge_arrays.c` | Merge arrays |
| 66 | `union_of_arrays.c` | Union of arrays |
| 67 | `intersection_of_arrays.c` | Intersection of arrays |
| 68 | `common_elements.c` | Find common elements |

### Day 18
| Q | File | Problem |
|---|------|---------|
| 69 | `bubble_sort.c` | Bubble sort |
| 70 | `selection_sort.c` | Selection sort |
| 71 | `binary_search.c` | Binary search |
| 72 | `sort_descending.c` | Sort array in descending order |

### Day 19
| Q | File | Problem |
|---|------|---------|
| 73 | `matrix_addition.c` | Add matrices |
| 74 | `matrix_subtraction.c` | Subtract matrices |
| 75 | `matrix_transpose.c` | Transpose matrix |
| 76 | `diagonal_sum.c` | Find diagonal sum |

### Day 20
| Q | File | Problem |
|---|------|---------|
| 77 | `matrix_multiplication.c` | Multiply matrices |
| 78 | `symmetric_matrix.c` | Check symmetric matrix |
| 79 | `row_wise_sum.c` | Find row-wise sum |
| 80 | `column_wise_sum.c` | Find column-wise sum |

### Day 21
| Q | File | Problem |
|---|------|---------|
| 81 | `string_length.c` | Find string length without strlen() |
| 82 | `reverse_string.c` | Reverse a string |
| 83 | `count_vowels_consonants.c` | Count vowels and consonants |
| 84 | `lowercase_to_uppercase.c` | Convert lowercase to uppercase |

### Day 22
| Q | File | Problem |
|---|------|---------|
| 85 | `string_palindrome.c` | Check palindrome string |
| 86 | `count_words.c` | Count words in a sentence |
| 87 | `character_frequency.c` | Character frequency |
| 88 | `remove_spaces.c` | Remove spaces from string |

### Day 23
| Q | File | Problem |
|---|------|---------|
| 89 | `first_non_repeating_char.c` | Find first non-repeating character |
| 90 | `first_repeating_char.c` | Find first repeating character |
| 91 | `check_anagram.c` | Check anagram strings |
| 92 | `max_occurring_character.c` | Find maximum occurring character |

### Day 24
| Q | File | Problem |
|---|------|---------|
| 93 | `string_rotation.c` | Check string rotation |
| 94 | `compress_string.c` | Compress a string |
| 95 | `longest_word.c` | Find longest word |
| 96 | `remove_duplicate_characters.c` | Remove duplicate characters |

### Day 25
| Q | File | Problem |
|---|------|---------|
| 97 | `merge_sorted_arrays.c` | Merge two sorted arrays |
| 98 | `common_characters.c` | Find common characters in strings |
| 99 | `sort_names_alphabetically.c` | Sort names alphabetically |
| 100 | `sort_words_by_length.c` | Sort words by length |

### Day 26
| Q | File | Problem |
|---|------|---------|
| 101 | `number_guessing_game.c` | Create number guessing game |
| 102 | `voting_eligibility.c` | Create voting eligibility system |
| 103 | `atm_simulation.c` | Create ATM simulation |
| 104 | `quiz_application.c` | Create quiz application |

### Day 27
| Q | File | Problem |
|---|------|---------|
| 105 | `student_record_management.c` | Create student record management system |
| 106 | `employee_management.c` | Create employee management system |
| 107 | `salary_management.c` | Create salary management system |
| 108 | `marksheet_generation.c` | Create marksheet generation system |

### Day 28
| Q | File | Problem |
|---|------|---------|
| 109 | `library_management.c` | Create library management system |
| 110 | `bank_account_system.c` | Create bank account system |
| 111 | `ticket_booking_system.c` | Create ticket booking system |
| 112 | `contact_management.c` | Create contact management system |

### Day 29
| Q | File | Problem |
|---|------|---------|
| 113 | `menu_calculator.c` | Create menu-driven calculator |
| 114 | `menu_array_operations.c` | Create menu-driven array operations system |
| 115 | `menu_string_operations.c` | Create menu-driven string operations system |
| 116 | `inventory_management.c` | Create inventory management system |

### Day 30
| Q | File | Problem |
|---|------|---------|
| 117 | `student_record_arrays_strings.c` | Create student record system using arrays and strings |
| 118 | `mini_library_system.c` | Create mini library system |
| 119 | `mini_employee_management.c` | Create mini employee management system |
| 120 | `mini_project_attendance.c` | Develop complete mini project using arrays, strings and functions |
