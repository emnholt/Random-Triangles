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

### Switch statements to find longest, mid, and shortest sides of triangle as long as it is a triangle.
- see code snippet below

```
if ((a <= 0) || (b <= 0) || (c <= 0)) {
        cout << "This is not a triangle." << endl;
    } else {
        if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
            cout << "This is not a triangle." << endl;
        } else {
            longest = c;
            if (longest < a) {
                c = longest;
                longest = a;
                a = c;
            } else if (longest < b) {
                c = longest;
                longest = b;
                b = c;
            }
            mid = b;
            if (mid < a) {
                b = mid;
                mid = a;
                a = b;
            }
            shortest = a;
```
- Emily Holt
- [LinkedIn](https://www.linkedin.com/in/emily-holt-bb70b8161/)
