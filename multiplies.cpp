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
int main()
{

  return 0;
}

