//
// Created by system205 on 07.03.2022.
//
template <typename T>
void multiplies(T& sum, T x, int n)
{
  if(n < 1)
    return;
  sum += x*n;
  multiplies (sum, x, n-1);
}

template <typename T>
class Calculator
{
 private:
T x, y;
 public:
Calculator(T x, T y) : x(x), y(y) {}
T add(){return x + y;};
T subtract(){return x - y;};
T multiply(){return x * y;};
  T divide(){return x / y;};

};

int main()
{

  return 0;
}

