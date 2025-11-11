# 🍕 Pizza Factory (C++ Factory Design Pattern Example)

This project demonstrates the **Factory Design Pattern** in C++ using a simple pizza shop example.  
Different pizza chains (`Dominos`, `PizzaHut`, etc.) create their own pizza types via a factory interface.

---

## 🧩 Build & Run

To compile and run the project, use the following commands:

```bash
$ g++ -I include/ src/* -o pizzaFactory
$ ./pizzaFactory
```

## Sample output
```bash
Preparing: DominosPizza2
Serving: DominosPizza2
Got: DominosPizza2
Preparing: DominosPizza1
Serving: DominosPizza1
Got: no pizza
Preparing: PizzaHutPizza1
Serving: PizzaHutPizza1
Got: DominosPizza2
```
