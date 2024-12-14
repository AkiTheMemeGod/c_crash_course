"""DSA IN PYTHON


LINKED LIST"""


class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        newNode = Node(data)
        if self.head:
            ptr = self.head
            while ptr.next:
                ptr = ptr.next
            ptr.next = newNode
        else:
            self.head = newNode

    def insert_at_beginning(self,data):
        new = Node(data)
        if self.head:
            ptr = self.head
            self.head = new
            new.next = ptr
        else:
            self.head = new

    def insert_in_middle(self,data,index):
        new = Node(data)
        if self.head:
            ptr = self.head
            i = 1
            while i < index:
                ptr = ptr.next
                i += 1
            new.next = ptr.next
            ptr.next = new

    def deletion_in_middle(self,index):
        if self.head:
            ptr = self.head
            i = 1
            ptr1 = ptr

            while i < index:
                ptr1 = ptr
                ptr = ptr.next
                i += 1
            ptr1.next = ptr.next

    def deletion_in_end(self):
        if self.head:
            ptr = self.head
            ptr1 = ptr
            while ptr.next:
                ptr1 = ptr
                ptr = ptr.next
            ptr1.next = None

    def deletion_in_beginning(self):
        ptr = self.head
        if self.head:
            ptr = ptr.next
            self.head = ptr
        else:
            self.head = None

    def __str__(self):
        ptr = self.head
        while ptr:
            print(str(ptr.data),"->",end='')
            ptr = ptr.next
        return "End"


n = LinkedList()
n.append(1)
n.append(2)
n.append(3)
n.append(4)
n.append(5)
n.deletion_in_middle(2)
print(n)
