Approach 1: Recursion
Intuition

In a preorder traversal, we need to visit the root node first, then all left child nodes, followed by the right child nodes.

We can take the root's left and right subtrees as a subproblem and recursively solve it. Once we have finished visiting all the left child nodes, we can move onto solving the right subtree recursively.

<img src="https://leetcode.com/problems/binary-tree-preorder-traversal/solutions/2918429/Figures/144_rewrite/144-re.png">

Please refer to the following illustration. The number in each node represents the order of traversal.

<img src="https://leetcode.com/problems/binary-tree-preorder-traversal/solutions/2918429/Figures/144_rewrite/144-pre.png">

Algorithm

    Initialize an empty array answer.
    Start with the root node root. If root is not NULL:
        add its value to answer.
        repeat step 2 with root's left child
        repeat step 2 with root's right child.
    Return answer after the iteration stops.

Implementation
Complexity Analysis

Let nnn be the number of nodes in the tree.

    Time complexity: O(n)O(n)O(n)

        We visit each node once and perform a constant amount of work at each node.

    Space complexity: O(n)O(n)O(n)
        The space is taken up by the recursive call stack. Ideally, we are not using any extra space for variables. But the recursion internally uses a call stack that takes up space equivalent to the depth of the tree. The max depth of the tree could be O(n)O(n)O(n) in the worst-case scenario when the tree is skewed.


Approach 2: Iteration
Intuition

We can also implement DFS iteratively using a stack to replicate recursive calls. Note that the operations on the stack follow the first-in-last-out order. The node we add last is visited first. Therefore, to access the left child before the right child, we add the right child before the left child.

<img src="https://leetcode.com/problems/binary-tree-preorder-traversal/solutions/2918429/Figures/144_rewrite/144-it.png">

Algorithm

    Initialize an empty array answer and an empty stack stack.

    Add root to stack.

    While stack is not empty, get the top node currNode from stack. If currNode is not NULL:
        add its value to answer.
        add its right child to stack.
        add its left child to stack.

    Then repeat step 3.

    Return answer after we empty stack.

Implementation
Complexity Analysis

Let nnn be the number of nodes in the tree.

    Time complexity: O(n)O(n)O(n)

        We use a stack to store all nodes to be visited. Each of the n nodes is added to and popped from the stack once, which takes O(1)O(1)O(1) time.

        All other work done at each node is O(1)O(1)O(1), so the overall time complexity is O(n)O(n)O(n).

    Space complexity: O(n)O(n)O(n)
        We use a stack to store all the nodes to be visited. Similar to the previous approach, the stack takes up space equivalent to the depth of the tree. The max depth of the tree could be O(n)O(n)O(n) in the worst-case scenario when the tree is skewed.


Approach 3: Morris Traversal

    This approach is more of an extension that you wouldn't be expected to come up with in an interview!

Intuition

Here we briefly introduce the Morris Traversal which only takes constant space!

Recall the previous solutions which have O(n)O(n)O(n) space complexity, let's think about why we need that much space:

Imagine we are in the middle of a traversal, and the current root node root has left and right subtrees. As we finish visiting the last node last of the left subtree, we would like to continue visiting the right subtree of root, but how?

<img src="https://leetcode.com/problems/binary-tree-preorder-traversal/solutions/2918429/Figures/144_rewrite/144-mor1.png">

This approach takes O(n)O(n)O(n) space because we need to track all the previous root nodes so that we can always return to each root and visit the right child once we have finished visiting its left child!

We can modify the tree in place instead of using extra space. Note that the last node has no right child, so we can let root be its right child! Therefore, whenever we finished visiting last, we can just visit its right child and return to root!

<img src = "https://leetcode.com/problems/binary-tree-preorder-traversal/solutions/2918429/Figures/144_rewrite/144-mor2.png>

For each unvisited node curr, we can find the last node if it exists, so once we finish iterating over the left subtree, we can always return to curr by visiting last.right!

<img src ="https://leetcode.com/problems/binary-tree-preorder-traversal/solutions/2918429/Figures/144_rewrite/144-mor3.png">

Take the following figure as an example of how we can calculate the preorder traversal of root.

<img src="https://leetcode.com/problems/binary-tree-preorder-traversal/solutions/2918429/Figures/144_rewrite/mor.png">

Algorithm

    Initialize an answer array. We also need two pointers, curr and last. Initialize curr as the root node.

`` 2) While curr is not NULL, check if it has a left child or not:

- If it has a left child, let `last` be the **rightmost** node of `curr`'s **left** subtree. Add `curr` to the answer and modify `last`'s right child as `curr`.


- Otherwise, add `curr` to the answer and move on to `curr`'s right child.

3) During the iteration, if we visit a node whose right child is curr, it implies that we are currently at the last node of this curr node. We reset last's right child to NULL and move on to curr's right child.

    Return answer after the iteration stops.

Implementation
Complexity Analysis

Let nnn be the number of nodes in the tree.

    Time complexity: O(n)O(n)O(n)

        There are n−1n-1n−1 edges in a tree (by definition). Each edge is visited at most two times: first, when we find last and second when we traverse the nodes.

        We visited each node at most 2 times, which takes O(n)O(n)O(n) time. Refer to the picture below, the colored edges stand for the revisited edges when finding the 'last' nodes.

        img

        When visiting each node, other than traversing edges we do O(1)O(1)O(1) work, so the time complexity is O(n)O(n)O(n).

    Space complexity: O(1)O(1)O(1)
        In Morris Traversal, we need to track two nodes curr and last which take constant space. Since we take advantage of the right child of some leaf nodes there is no need for extra space.


