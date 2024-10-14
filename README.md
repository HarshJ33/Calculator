# Simple Calculator in C

This repository contains a simple calculator written in C. The calculator provides two modes: a **Simple Mode** for basic arithmetic operations and an **Advanced Mode** for more complex mathematical functions like trigonometric operations, exponentiation, and logarithms.

## Features
1. **Simple Mode**: 
   - Add (`+`)
   - Subtract (`-`)
   - Multiply (`*`)
   - Divide (`/`), with division by zero error handling.

2. **Advanced Mode**:
   - Trigonometric functions (`sin`, `cos`, `tan`)
   - Natural logarithm (`ln`)
   - Exponentiation (`x^y`)
   - Square root (`√x`), with negative root error handling.

## Operations

### Simple Mode Operations:
| Operator | Description   | Example   |
|----------|---------------|-----------|
| `+`      | Addition       | 5 + 3 = 8 |
| `-`      | Subtraction    | 5 - 3 = 2 |
| `*`      | Multiplication | 5 * 3 = 15 |
| `/`      | Division       | 6 / 3 = 2 |



### Advanced Mode Operations:
| Function       | Description            | Input Example  | Output Example   |
|----------------|------------------------|----------------|------------------|
| `sin(x)`       | Sine function           | sin(π/2)       | 1.000            |
| `cos(x)`       | Cosine function         | cos(π)         | -1.000           |
| `tan(x)`       | Tangent function        | tan(π/4)       | 1.000            |
| `log(x)`       | Natural logarithm (ln)  | log(2.718)     | 1.000            |
| `x^y`          | Exponentiation          | 2^3            | 8.000            |
| `√x`           | Square root             | √16            | 4.000            |

### Error Handling:
- **Division by zero** in Simple Mode will display an error message: `Error Code: DivisionBy0`.
- **Negative logarithm** input will trigger: `Error Code: NegativeLog`.
- **Square root of a negative number** will trigger: `Error Code: NegativeRoot`.
- **Invalid operator or function** selection will raise appropriate error codes.
