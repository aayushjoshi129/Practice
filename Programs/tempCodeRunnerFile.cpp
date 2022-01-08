int nCr() // nCr Program (Maths)
{
  int n, r, ncr, pro = 1, div = 1;
  cout << "Enter N : ";
  cin >> n;
  cout << "Enter R : ";
  cin >> r;
  for (int i = n, rn = r; i <= r, rn >= 1; i--, rn--)
  {
    pro = (pro * i);
    div = (div * rn);
  }
  ncr = pro / div;
  return ncr;
