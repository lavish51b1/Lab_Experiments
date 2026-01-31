# Experiment–1: Array & Structure

## Objective:
    To apply the concept of array, structure and experiment on nested array and array of structures.

---

## Program–1: Find sum of all array elements using recursion

### Program Code
![Program Code](images/Screenshot%20from%202026-01-30%2008-18-38.png) 

### Output
![Output](images/Screenshot%20from%202026-01-30%2008-47-43.png)

### Observation

	* The program finds the sum of array elements using recursion.
	* A recursive function calls itself until the base condition is met.
	* Base case: when n = 0, the function returns 0.
	* Each call adds the last element to the sum of remaining elements.
	* The process continues until all elements are added.
	* Finally, the total sum is displayed as output.

### Algorithm

	* Start
	* Input number of elements (n)
	* Input array elements
	* Call recursive function sum(arr, n)
	* If n == 0, return 0
	* Else return arr[n-1] + sum(arr, n-1)
	* Print the sum
	* Stop
---

## Program–2: Create an array 'al' with 'n' elements. Insert an element in i^th position of 'al' and also delete an element from j^th position of 'al'.

### Program Code
![Program Code](images/Screenshot%20from%202026-01-30%2008-51-32.png) 

### Output
![Output](images/Screenshot%20from%202026-01-30%2008-54-00.png)

### Observation

	* The program performs insertion and deletion at specified positions in an array.
	* Elements are shifted right during insertion to create space.
	* Elements are shifted left during deletion to fill the gap.
	* Array size is updated after each operation.
	* Final array is displayed after changes.

### Algorithm

	* Start
	* Input number of elements and array
	* Input position and value for insertion
	* Shift elements to the right from the position
	* Insert the new value
	* Increase array size
	* Input position for deletion
	* Shift elements left from that position
	* Decrease array size
	* Display final array
	* Stop
---

## Program–3: Convert uppercase string to lowercase using for loop.

### Program Code
![Program Code](images/Screenshot%20from%202026-01-30%2008-54-56.png) 

### Output
![Output](images/Screenshot%20from%202026-01-30%2008-55-53.png)

### Observation

	* The program converts uppercase characters to lowercase using a loop.
	* Each character is checked using ASCII values.
	* If a character is uppercase, 32 is added to convert it.
	* The loop continues until the null character is reached.
	* The modified lowercase string is printed.

### Algorithm

	* Start
	* Input a string
	* Traverse each character using a loop
	* Check if character is uppercase
	* Convert it to lowercase
	* Repeat until end of string
	* Display the result
	* Stop
---

## Program–4: Find the sum of rows and columns of matrix of given order (row * column)

### Program Code
![Program Code](images/Screenshot%20from%202026-01-30%2008-56-40.png) 

### Output
![Output](images/Screenshot%20from%202026-01-30%2009-00-26.png)

### Observation

	* The program calculates row-wise and column-wise sums of a matrix.
	* Nested loops are used to traverse matrix elements.
	* Row sums are calculated by fixing rows and varying columns.
	* Column sums are calculated by fixing columns and varying rows.
	* Results are printed for each row and column.

### Algorithm

	* Start
	* Input number of rows and columns
	* Input matrix elements
	* For each row, calculate sum
	* Print row sums
	* For each column, calculate sum
	* Print column sums
	* Stop
---

## Program–5: Find the product th two matrices using pointers.

### Program Code
![Program Code](images/Screenshot%20from%202026-01-30%2009-01-23.png)
![Program Code](images/Screenshot%20from%202026-01-30%2009-01-55.png)

### Output
![Output](images/Screenshot%20from%202026-01-30%2009-03-19.png)

### Observation

	* The program multiplies two matrices using pointer notation.
	* It checks compatibility for multiplication (columns of A = rows of B).
	* Pointer arithmetic is used to access matrix elements.
	* Nested loops perform multiplication and summation.
	* The resultant matrix is displayed.

### Algorithm

	* Start
	* Input matrix A and B
	* Check if multiplication is possible
	* Use nested loops for multiplication
	* Multiply corresponding elements
	* Add results and store in new matrix
	* Display product matrix
	* Stop
---

## Program–6: Store 'n' numbers (integers or real) in an array. Conduct a linear search for a given number and report success or failure in the form of a suitable message.

### Program Code
![Program Code](images/Screenshot%20from%202026-01-30%2009-06-03.png) 

### Output
![Output](images/Screenshot%20from%202026-01-30%2009-06-59.png)


### Observation

	* The program searches for a given element using linear search.
	* Each element is compared sequentially with the key value.
	* If found, the position is reported.
	* If not found, a failure message is shown.
	* This method is simple and works for unsorted arrays.

### Algorithm

	* Start
	* Input number of elements
	* Input array elements
	* Input element to search
	* Compare each element with the key
	* If match found, display position
	* Else display not found message
	* Stop