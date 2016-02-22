
### Bitwise
______

Setting a contraint for highest value of ORing : 

In ORing we het a bit on(1) if there exist any 1.
let, hiVal = 1023, so all 9 bits of hiVal will be 1. So, it doesn't matter what other numbers have.
So, in oder to find the highest ORing value of a **constraint** we need to set our hiVal as 2^hiPowerCanPossible - 1.
