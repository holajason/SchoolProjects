class Node():
    def __init__(self,data):
        self.left = None
        self.right = None
        self.value = data
    
    def insertNode(root,node):
        if root is None:
            root = node
        #if node == root.value:
         #  return False
        else:          
            if node < root.value:
                if root.left is None:
                    root.left = Node(node)
                else:
                    return root.left.insertNode(node)
            else:
                if root.right is None:
                    root.right = Node(node)
                else:
                    return root.right.insertNode(node)

#inorderTraversal() is called to traverse the left subtree
#until there's no more left-element, and print the tree
    def inorderTraversal(self):
        if self.left:
            self.left.inorderTraversal()
        print(self.value, end= ' ')
        if self.right:
            self.right.inorderTraversal()

#Print the parent root first, then call the recursive preorderTraversal()
#that traverse the left substree and right subtree and print the element
    def preOrderTraversal(self):
        if self:
            print(self.value,end= ' ')
            if self.left:
                self.left.preOrderTraversal()
            if self.right:
                self.right.preOrderTraversal()
                
#Traverse the left-child and right-child and then
#visit back to the parent root, and print it
    def postOrderTraversal(self):
        if self:
            if self.left:
                self.left.postOrderTraversal()
            if self.right:
                self.right.postOrderTraversal()
            print(self.value, end= ' ')
            
class Tree():
    def __init__(self):
        self.root = None

    def insert(self,data):
        if self.root is None:
            self.root = Node(data)
        else:
            return self.root.insertNode(data)

#While the tree is not empty, print the tree
    def inorder(self):
         if self.root is not None:
             return self.root.inorderTraversal()
         else:
            return ("The File is Empty")

    def preOrder(self):
        if self.root is not None:
            return self.root.preOrderTraversal()
        
    def postOrder(self):
        if self.root is not None:
            return self.root.postOrderTraversal()
        
my_list= []
with open('input.txt','r') as f:
    for line in f:
        for i in line.split(","):
            my_list.append(int(i))

a = Tree()
for i in my_list:
   a.insert(i)

print("Inorder:")
print("Inorder:\n",a.inorder(),file=open("output.txt", "a"))
print('\nPreOrder:')
print('PreOrder:\n',a.preOrder(),file=open("output.txt", "a"))
print('\npostOrder:')
print('postOrder:\n',a.postOrder(),file=open("output.txt", "a"))
