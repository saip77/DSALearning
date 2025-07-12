### Day 2

#### Basic Input/Output

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;
    return 0;
}
```
#### Data Types

| Type    | Description       | Example             | Size  |
|---------|-------------------|---------------------|-------|
| `int`   | Integer            | `int x = 5;`        | 4B    |
| `float` | Decimal            | `float f = 3.2;`    | 4B    |
| `double`| More precision     | `double d = 3.14;`  | 8B    |
| `char`  | Single character   | `char ch = 'A';`    | 1B    |
| `bool`  | True/False         | `bool flag = true;` | 1B    |

#### If else

```cpp
#include <iostream>

int main()
{
    int x = 5;
    if (x > 0)
    {
        std::cout << "x is positive" << std::endl;
    }
    else
    {
        std::cout << "x is negative" << std::endl;
    }
    return 0;
}
```