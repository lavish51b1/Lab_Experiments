# Experiment–3: Stack Using Array

## Objective -
	To study and implement Stack data structure using array in C programming language, and to perform operations like Push, Pop, Display, Expression Conversion, and Expression Evaluation using stack.

---

## Program–1 : Stack Implementation Using Array (Push, Pop, Display)

### Program Code
![Program Code](images/Screenshot%20from%202026-02-26%2023-36-33.png)
![Program Code](images/Screenshot%20from%202026-02-26%2023-36-49.png)

### Output
![Program Code](images/Screenshot%20from%202026-02-26%2023-37-53.png)

### Algorithm

	* Initialize stack array and top = -1.
	* Push → Increment top and insert element.
	* Pop → Delete element and decrement top.
	* Display → Print elements from top to 0.

### Observation

	Stack follows LIFO (Last In First Out).
	Overflow occurs when stack is full.
	Underflow occurs when stack is empty.
	Push and Pop operations take O(1) time.

---

## Program–2 : Reverse a String Using Stack

### Program Code
![Program Code](images/Screenshot%20from%202026-02-26%2023-38-45.png)

### Output
![Program Code](images/Screenshot%20from%202026-02-26%2023-39-20.png)

### Algorithm

	* Read input string.
	* Push each character into stack.
	* Pop characters and store back in string.
	* Print reversed string.

### Observation

	Uses LIFO property of stack.
	Simple and efficient method.
	Time Complexity → O(n).

---

## Program–3 : Infix to Postfix Conversion Using Stack

### Program Code
![Program Code](images/Screenshot%20from%202026-02-26%2023-39-49.png)
![Program Code](images/Screenshot%20from%202026-02-26%2023-40-04.png)

### Output
![Program Code](images/Screenshot%20from%202026-02-26%2023-41-37.png)

### Algorithm

	* Read infix expression.
	* If operand → add to postfix.
	* If '(' → push to stack.
	* If ')' → pop until '('.
	* If operator → compare precedence and push/pop accordingly.
	* Pop remaining operators.
	* Print postfix expression.

### Observation

	Stack temporarily stores operators.
	Operator precedence determines order.
	Time Complexity → O(n).

---

## Program–4 : Postfix Expression Evaluation Using Stack

### Program Code
![Program Code](images/Screenshot%20from%202026-02-26%2023-41-59.png)
![Program Code](images/Screenshot%20from%202026-02-26%2023-42-16.png)

### Output
![Program Code](images/Screenshot%20from%202026-02-26%2023-42-56.png)

### Algorithm

	* Read postfix expression.
	* If operand → push to stack.
	* If operator → pop two operands.
	* Perform operation.
	* Push result back.
	* Final value in stack is result.

### Observation

	No need for parentheses in postfix.
	Easy evaluation using stack.
	Time Complexity → O(n).

---