#  Restaurant Management System (C)

A simple console-based Restaurant Management System developed in C language that allows users to view menu items, place orders, generate bills, and save bills to a file.

---

##  Features

- View restaurant menu  
- Add customer orders  
- Generate bill  
- Save bill in `bill.txt`  
- Exit system  
- Uses:
  - Structures
  - Arrays
  - Functions
  - File Handling
  - Switch Case

---

##  Technologies Used

- C Programming
- GCC Compiler
- File Handling

---

##  Project Structure

```bash
Restaurant-Management-System/
│
├── restaurant.c
├── bill.txt
└── README.md
```

---

##  Menu

| ID | Item | Price |
|----|------|-------|
| 1 | Andhra Fry Piece Biryani | ₹250 |
| 2 | Mutton Biryani | ₹420 |
| 3 | Chicken Manchurian | ₹200 |
| 4 | Paneer Fried Rice | ₹180 |
| 5 | Lemon Mojito | ₹120 |

---

## How to Run

### Compile
```bash
gcc restaurant.c -o restaurant
```

### Execute
```bash
./restaurant
```

---





##  Sample Output

```text
--- Restaurant Management ---

1. Show Menu
2. Add Order
3. View Bill
4. Exit

Enter choice: 2

Enter item ID: 1
Enter quantity: 2

Order added!

Enter choice: 3

------ BILL ------
Andhra fry piece biryani x2 = Rs 500.00
Lemon mojito x1 = Rs 120.00

Total = Rs 620.00
```

---

## bill.txt Output

```text
Total Bill: Rs 620.00
```

---

##  Future Enhancements

- Table Reservation  
- Admin Login  
- GST Calculation  
- Database Support  
- Online Food Ordering



This project is for educational purposes.
<img width="380" height="242" alt="Screenshot 2026-04-20 202132" src="https://github.com/user-attachments/assets/6f3cd4da-a17e-4a29-9658-41b5eedbfdb9" />
<img width="367" height="112" alt="Screenshot 2026-04-20 202427" src="https://github.com/user-attachments/assets/ab1bf130-b965-46a1-bd65-15389eacdfb2" />
<img width="377" height="201" alt="Screenshot 2026-04-20 202322" src="https://github.com/user-attachments/assets/e1a295c6-bcb0-43a8-98a3-c1f9d8650208" />

