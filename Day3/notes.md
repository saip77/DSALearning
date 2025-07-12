### Day 3

#### For Loop

```cpp
#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
```

#### While Loop

```cpp
#include <iostream>

int main()
{
    int i = 0;
    while (i < 10)
    {
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}
```

#### Do While Loop

```cpp
#include <iostream>

int main()
{
    int i = 0;
    do
    {
        std::cout << i << std::endl;
        i++;
    } while (i < 10);
    return 0;
}
```

#### Functions

```cpp
#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = add(5, 10);
    std::cout << x << std::endl;
    return 0;
}