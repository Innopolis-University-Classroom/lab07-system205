//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

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













