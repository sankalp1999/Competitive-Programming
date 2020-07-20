/*
My initial solution was pretty crappy.
I adopted this code from the discuss forum.
The idea is if last digit is 9, then we generate a carry otherwise, we just increment and return.
Till the time carry is being generated, we continue the loop and keep incrementing the digit.
Even if we get out of loop, that means we still have a carry. We need to add that.

Instead of pushing a one in front which is very expensive, we make first digit 1 and then add 0.
*/


void plusone(vector<int> &digits)
{
	int n = digits.size();
	for (int i = n - 1; i >= 0; --i)
	{
		if (digits[i] == 9)
		{
			digits[i] = 0;
		}
		else
		{
			digits[i]++;
			return;
		}
	}
		digits[0] =1;
		digits.push_back(0);
		
}
