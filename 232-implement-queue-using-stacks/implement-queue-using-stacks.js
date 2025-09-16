
var MyQueue = function () {
    this.stack = [];
};

/** 
 * @param {number} x
 * @return {void}
 */
MyQueue.prototype.push = function (x) {
    this.stack.push(x)
};

/**
 * @return {number}
 */
MyQueue.prototype.pop = function () {
    let val = this.stack[0];
    for (let i = 0; i < this.stack.length - 1; i++) {
        this.stack[i] = this.stack[i + 1];
    }
    this.stack.pop();
    return val;
};

/**
 * @return {number}
 */
MyQueue.prototype.peek = function () {
    return this.stack[0];
};

/**
 * @return {boolean}
 */
MyQueue.prototype.empty = function () {
    return this.stack.length === 0;
};

/** 
 * Your MyQueue object will be instantiated and called as such:
 * var obj = new MyQueue()
 * obj.push(x)
 * var param_2 = obj.pop()
 * var param_3 = obj.peek()
 * var param_4 = obj.empty()
 */