
/* Sieve */
int n;
vector<bool> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i * i <= n; i++) {
    if (is_prime[i]) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}

/* Disjoint set */

// Find operation with path compression 
/* Path compression */
int get(int a)
{
    if(p[a] != a)
    {
        p[a] = get(p[a]);
    }
    return p[a];
}

// Alternate one line implementation
get(a):
  return p[a] = (p[a] == a ? a : get(p[a]))
 
void union1(int a, int b)
{
    a = get(a);
    b = get(b);
    if(size[a] > size[b])
    {
        swap(a, b);
    }
    // a is smaller than b. Add small to larger.
    p[a] = b;
    // Need auxilary arrays for assosciative operation.
    minele[b] = min(minele[a], minele[b]);
    maxele[b] = max(maxele[a], maxele[b]);
 
    if(b!=a) // Should not be connected or in the same set.
    size[b] += size[a];
}



/* By rank */
union1(a, b):
  a = get(a)
  b = get(b)
  if r[a] == r[b]:
    r[a]++
  if r[a] > r[b]:
    p[b] = a
    sum[a] += sum[b]
    min[a] = min(min[a], min[b])
  else:
    p[a] = b
    sum[b] += sum[a]
    min[b] = min(min[a], min[b])


