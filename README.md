#  C++ Calculator with Login Authentication

A simple yet functional **console-based calculator** in C++ that includes a **login authentication** feature to restrict access to authorized users.

---

##  Login Credentials

| Credential | Value   |
|------------|---------|
| User ID    | `10004` |
| Password   | `1234`  |

Only the above credentials will grant access to the calculator.

---

##  Features

✅ User authentication via hardcoded credentials  
✅ Menu-driven calculator for basic arithmetic operations  
✅ Clean console output for better user experience  
✅ Handles invalid inputs gracefully

---

##  Functional Overview

After successful login, the user is presented with a menu to choose one of the following operations:

| Choice | Operation    |
|--------|--------------|
| `1`    | Addition     |
| `2`    | Subtraction  |
| `3`    | Multiplication |
| `4`    | Division     |

User enters two numbers (`a` and `b`), and the selected operation is performed.

---

##  Program Flow

```text
1. Display Welcome Message
2. Prompt for User ID & Password
3. If credentials are correct:
   ├── Show menu of operations
   ├── Take user choice
   ├── Input two numbers (a, b)
   └── Display result based on operation
4. Else:
   └── Show "Access Denied" or "Wrong User ID"
