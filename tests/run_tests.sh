#!/usr/bin/env bash
# Runs every program against a sample input and compares the output with the expected result.
# Usage: make test

cd "$(dirname "$0")/.." || exit 1
pass=0
fail=0

check() {
    local program=$1 input=$2 expected=$3 actual
    actual=$(printf '%b' "$input" | "build/$program" | sed 's/[[:space:]]*$//')
    expected=$(printf '%b' "$expected" | sed 's/[[:space:]]*$//')
    if [[ "$actual" == "$expected" ]]; then
        pass=$((pass + 1))
    else
        fail=$((fail + 1))
        printf 'FAIL %s (input: %q)\n--- expected\n%s\n--- actual\n%s\n' "$program" "$input" "$expected" "$actual"
    fi
}

D=01-conditionals-loops-patterns
check $D/char_type '4\nA z 7 #' 'Uppercase Letter\nLowercase Letter\nDigit\nSpecial Character'
check $D/sum_of_evens '10' '30'
check $D/sum_of_evens '1' '0'
check $D/prime_check_while '17' '17 is a Prime Number'
check $D/prime_check_while '21' '21 is divisible by 3\n21 is not a Prime Number'
check $D/prime_check_while '1' '1 is not a Prime Number'
check $D/pattern_square_stars '3' '***\n***\n***'
check $D/pattern_row_number '3' '111\n222\n333'
check $D/pattern_column_number '3' '123\n123\n123'
check $D/pattern_reverse_column '3' '321\n321\n321'
check $D/pattern_counting_square '3' '1 2 3\n4 5 6\n7 8 9'
check $D/pattern_star_triangle '3' '*\n**\n***'
check $D/pattern_row_triangle '3' '1\n22\n333'
check $D/pattern_counting_triangle '3' '1\n2 3\n4 5 6'

D=02-operators-and-loops
check $D/xor_odd_occurrence '7\n12 12 14 90 14 14 14' 'The odd occurring element is 90'
check $D/fibonacci '10' '0 1 1 2 3 5 8 13 21 34'
check $D/fibonacci '1' '0'
check $D/prime_check '2' 'Is a Prime Number'
check $D/prime_check '49' 'Not a Prime Number'
check $D/prime_check '0' 'Not a Prime Number'
check $D/continue_statement '' 'HI\nHEY\nHI\nHEY\nHI\nHEY\nHI\nHEY\nHI\nHEY\n1 3 5 7 9'
check $D/operator_precedence '' 'a + b * c   = 14\n(a + b) * c = 20\nc / a * b   = 6\na + b % c   = 5\n(b & 1) == 1 -> 1\nx || y && z is read as x || (y && z) -> 1\n(x || y) && z                         -> 0\npre = 6, post = 6, i = 7'
check $D/variable_scope '' 'a + b inside the block = 8\ninner a = 10\nouter a = 3\nglobalCount = 3'

D=03-number-systems
check $D/decimal_to_binary '10' '1010'
check $D/decimal_to_binary '0' '0'
check $D/decimal_to_binary '1023' '1111111111'
check $D/binary_to_decimal '1010' '10'
check $D/binary_to_decimal '111' '7'
check $D/binary_to_decimal '12' 'Invalid binary number'

D=04-leetcode
check $D/subtract_product_and_sum '234' '15'
check $D/subtract_product_and_sum '4421' '21'
check $D/number_of_1_bits '11' '3'
check $D/number_of_1_bits '4294967293' '31'

D=05-switch-and-functions
check $D/switch_statement '2' 'Two'
check $D/switch_statement '199' 'Default'
check $D/calculator '7\n2\n%' 'Enter the value of a\nEnter the value of b\nEnter the operation you want to perform (+ - * / %)\n1'
check $D/calculator '7\n0\n/' 'Enter the value of a\nEnter the value of b\nEnter the operation you want to perform (+ - * / %)\nCannot divide by zero'
check $D/power '2 10' '1024'
check $D/even_odd '8' 'Number is even'
check $D/even_odd '7' 'Number is odd'
check $D/ncr '5 2' '10'
check $D/ncr '20 10' '184756'
check $D/counting '5' '1 2 3 4 5'
check $D/prime_function '13' 'Number is Prime'
check $D/prime_function '1' 'Number is not Prime'
check $D/pass_by_value '5' 'Dummy Value is 6\nMain Function Value is 5\nReference Value is 6\nMain Function Value is 6'

D=06-arrays
check $D/array_basics '' '7\n1\n12 4 16 0 0 0 0 0 0 0 0 0 0 0 0\n0 0 0 0 0 0 0 0 0 0'
check $D/array_with_function '' '1 2 3 4 5\nThe size of the array is: 5'
check $D/char_array '' 'd\na b c d e'
check $D/min_max '3\n4 -2 9' 'Enter the size of the array (1-100)\nEnter element 0 of the array\nEnter element 1 of the array\nEnter element 2 of the array\nThe maximum value is: 9\nThe minimum value is: -2'
check $D/array_scope '' 'Inside the function\n120 2 3\nBack in main\n120 2 3'

echo "$pass passed, $fail failed"
[[ $fail -eq 0 ]]
