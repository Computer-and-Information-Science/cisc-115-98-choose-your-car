# Car Dealer

You're building a car dealer program that lets customers configure their dream vehicle and see the total cost.

Your program should:

1. Ask the user for their **budget** (an integer)
2. Let them choose a **car type** from:
   - Sedan ($18,000)
   - SUV ($28,000)
   - Truck ($32,000)
3. Let them choose a **color** from:
   - White (no extra cost)
   - Black ($500)
   - Blue ($750)
   - Red ($1,000)
4. Let them choose an **engine** from:
   - 4-cylinder (no extra cost)
   - V6 ($2,500)
   - V8 ($5,000)

## Validation Rules

The following feature requirements must be enforced using selection statements (`if`/`else if`/`else`):

- **Truck** models cannot have a **V8** engine (invalid combination)
- **Red** color is only available for **Sedan** and **SUV** (not for Trucks)
- Any input outside the allowed options (e.g., a color other than White/Black/Blue/Red, an engine other than 4-cylinder/V6/V8, or a car type other than Sedan/SUV/Truck) makes the entire configuration invalid

If **any** invalid choice is selected, output only:
```
The configuration is invalid.
```

Otherwise, output the total cost and whether it fits within the budget:
```
Total cost: $XXXXX
In budget
```
or
```
Total cost: $XXXXX
Not in budget
```

## Assumptions

- You may assume that valid input is in the correct case (e.g., "Sedan" is allowed, but "sedan" is not).
- You may assume all numbers are integers.

## Example Run 1

```
Enter your budget: 25000
Choose car type (Sedan/SUV/Truck): Sedan
Choose color (White/Black/Blue/Red): White
Choose engine (4-cylinder/V6/V8): 4-cylinder
```

Output:
```
Total cost: $18000
In budget
```

## Example Run 2

```
Enter your budget: 55000
Choose car type (Sedan/SUV/Truck): Sedan
Choose color (White/Black/Blue/Red): Red
Choose engine (4-cylinder/V6/V8): V8
```

Output:
```
Total cost: $24500
In budget
```

## Example Run 3

```
Enter your budget: 100000
Choose car type (Sedan/SUV/Truck): Sedan
Choose color (White/Black/Blue/Red): Purple
Choose engine (4-cylinder/V6/V8): V8
```

Output:
```
The configuration is invalid.
```

## Example Run 4

```
Enter your budget: 50000
Choose car type (Sedan/SUV/Truck): Truck
Choose color (White/Black/Blue/Red): White
Choose engine (4-cylinder/V6/V8): V8
```

Output:
```
The configuration is invalid.
```

## Example Run 5

```
Enter your budget: 50000
Choose car type (Sedan/SUV/Truck): Truck
Choose color (White/Black/Blue/Red): Red
Choose engine (4-cylinder/V6/V8): 4-cylinder
```

Output:
```
The configuration is invalid.
```

## What You'll Practice

- Using `if`/`else if`/`else` for selection
- Validating user input against allowed values
- Combining multiple conditions
- Calculating totals based on choices
