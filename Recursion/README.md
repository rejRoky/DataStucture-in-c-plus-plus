#### Time Complexity
` 0(n) `

#### Recurrence Relation
```
void fun1 (int n)               /// T(n)
{
    if (n>0)                    /// 1
    {
        cout << n << endl;      /// 1
        fun1(n-n);              /// T(n-1)

    }
}

so, 
T(n) = T(n-1) + 1 +1
=> T(n) = T(n-1) + 2

Recurrence Relation: (Induction Method / Successive Method)
-------------------------------------------------------------
        1           ;n = 0
T(n) = [
        T(n-1) + 1  ;n = 0

T(n) = T(n-1) + 1    ----- i
T(n) = T(n-2) + 2    ----- ii
T(n) = T(n-3) + 3    ----- iii
.
.
.
.
T(n) = T(n-k) + k    ----- iv

Assume, n-k = 0 ;
n = k

so, 
T(n) = T(n-n) + n 
     = T(0) + n 
     = 1 + n
     = 0(n) ; Digit of / order of 

```
