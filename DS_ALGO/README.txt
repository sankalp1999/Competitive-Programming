This directory contains implementations of different Binary Search Trees
(BSTs), in particular vanilla (unbalanced) BSTs and AVL (balanced) trees.

1. bst.py: Vanilla BSTs.

   This is a revised version of bst.py from the previous recitation, which
   adds a few return values and support for ASCII art and random testing.

2. avl.py: AVL tree (balanced).

   Imports and extends bst.py.  Supports insert and delete while
   maintaining balance.  Also supports ASCII art and random teting.

USAGE
-----

Both bst.py and avl.py can be tested interactively from a UNIX shell as follows:

python bst.py 10 -- do 10 random insertions, printing BST at each step
python avl.py 10 -- do 10 random insertions, printing AVL tree at each step

Alternatively, you can specify explicit key values for particular test cases:

python bst.py 1 2 3 4 5 6 7 8 9 10 -- display bad behavior in BST
python avl.py 1 2 3 4 5 6 7 8 9 10 -- display good behavior in AVL

Alternatively, you can use them from a Python shell as follows:

>>> import bst
>>> t = bst.BST()
>>> print t
<empty tree>
>>> for i in range(4):
...   t.insert(i)
...
>>> print t
0
/\
 1
 /\
  2
  /\
   3
   /\
>>> t.delete_min()
>>> print t
1
/\
 2
 /\
  3
  /\
>>> import avl
>>> t = avl.AVL()
>>> print t
<empty tree>
>>> for i in range(4):
...   t.insert(i)
...
>>> print t
  1
 / \
0  2
/\ /\
    3
    /\
>>> t.delete(1)
>>> print t
  2
 / \
0  3
/\ /\
