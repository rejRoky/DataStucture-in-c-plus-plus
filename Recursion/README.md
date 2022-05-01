#### Time Complexity
` 0(n) `

#### Recurrence Relation:
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
```