# Power of Any Number (Base Divisibility Counter)

This C++ program finds how many times a number **n** is divisible by a base **k**.

It calculates the **highest power of k that divides n**.

---

## Example

### Input
k = 2  
n = 65536  

### Output
16  

Because:

65536 = 2^16

---

## How it Works
The program repeatedly divides `n` by `k` until `n` is no longer divisible by `k`.

---

## Sample Cases

| Base (k) | Number (n) | Output | Reason |
|---------:|-----------:|-------:|--------|
| 2 | 40 | 3 | 40 = 2^3 × 5 |
| 3 | 81 | 4 | 81 = 3^4 |
| 5 | 1250 | 4 | 1250 = 5^4 × 2 |

---

## Notes
- Base `k` cannot be `0`, `1`, or `-1` (to avoid invalid division/infinite loop).
- Negative values of `n` and `k` can be handled by converting them to positive values.

---

## Language Used
- C++

---

## Author
**Rohan S Mathad**
