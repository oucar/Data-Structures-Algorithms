"use strict";

function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, descriptor.key, descriptor); } }

function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); return Constructor; }

function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }

var Node = function Node(val) {
  _classCallCheck(this, Node);

  this.val = val;
  this.next = null;
};

var SinglyLinkedList =
/*#__PURE__*/
function () {
  function SinglyLinkedList() {
    _classCallCheck(this, SinglyLinkedList);

    this.length = 0;
    this.head = null;
    this.tail = null;
  } // Add a new node at the end of the linked list.
  // O(1)


  _createClass(SinglyLinkedList, [{
    key: "push",
    value: function push(val) {
      var node = new Node(val); // linked list is empty

      if (this.head == null) {
        this.head = node;
        this.tail = node;
      } // linked list is not empty
      else {
          this.tail.next = node;
          this.tail = node;
        }

      this.length++;
      return this;
    } // Removes the tail element
    // O(n)

  }, {
    key: "pop",
    value: function pop() {
      if (!this.head) return null; // iterate until you reach the last element

      var curr = this.head;
      var newTail = this.head;

      while (curr.next) {
        newTail = curr;
        curr = curr.next;
      }
    } // Helper print function to visualize the Linked list
    // O(n)

  }, {
    key: "print",
    value: function print(message) {
      var curr = this.head;

      while (curr) {
        process.stdout.write("".concat(curr.val, " --> "));
        curr = curr.next;
      }

      console.log("null \nCurrent state of the linked list after ".concat(message));
      console.log("Length: ".concat(this.length, "\n"));
    }
  }]);

  return SinglyLinkedList;
}();

var linkedList = new SinglyLinkedList();
linkedList.push("Onur");
linkedList.push("Ucar");
linkedList.push("Hello");
linkedList.push("!");
linkedList.print("4 pushes");