
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
template <typename T>
void multiples(T& sum, T x, int n)
{
  if(n < 1)
    return;
  sum += x*n;
  multiplies (sum, x, n-1);
}
