# Random-Triangles
## An application built to define triangle types dependent on user input and a random generator.

### Random number generator for third traingle side
- see code snippet below

```
 srand(time(0));
  
    if (a > b) {
        var = a - b;
        min = b + var;
    }
    else {
        var = b - a;
        min = a + var;
    }
    if (a + b < 1) {
        c = ((double) rand() / RAND_MAX);
    }
    else {
        c = (double) (rand() % (int) (a + b) + min) + 1;
    }
    c = (double) ((double) (var +1) / RAND_MAX) * rand() + min;
    cout << a << " " << b << " " << c << endl;
  
```
