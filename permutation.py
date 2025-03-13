# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations

# Read input
s, r = input().split()
r = int(r)

# Generate permutations, sorted lexicographically
perm = permutations(sorted(s), r)

# Print each permutation as a string
for p in perm:
    print(''.join(p))
