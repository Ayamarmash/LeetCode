/**
 * @param {number} capacity
 */
var LRUCache = function (capacity) {
    this.LRU = new Map();
    this.size = 0;
    this.capacity = capacity;
};

/** 
 * @param {number} key
 * @return {number}
 */
LRUCache.prototype.get = function (key) {
    if (this.LRU.has(key)) {
        let value = this.LRU.get(key);
        this.LRU.delete(key);
        this.LRU.set(key, value);
        return value;
    }
    return -1;
};

/** 
 * @param {number} key 
 * @param {number} value
 * @return {void}
 */
LRUCache.prototype.put = function (key, value) {
    if (this.LRU.has(key)) {
        this.LRU.delete(key);
    }
    else if (this.size < this.capacity) {
        this.size++;
    } else {
        let leastUsedKey = this.LRU.keys().next().value;
        this.LRU.delete(leastUsedKey);
    }
    this.LRU.set(key, value);
};

/** 
 * Your LRUCache object will be instantiated and called as such:
 * var obj = new LRUCache(capacity)
 * var param_1 = obj.get(key)
 * obj.put(key,value)
 */