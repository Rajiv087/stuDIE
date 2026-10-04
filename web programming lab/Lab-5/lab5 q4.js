
let fruits = ["Apple", "Banana", "Mango", "Orange", "Grapes"];
console.log("Fruits list:");
for (let i = 0; i < fruits.length; i++) {
 console.log(fruits[i]);
}
fruits.push("Pineapple");
fruits.shift();
console.log("Updated Fruits list:", fruits);

let numbers = [45, 12, 89, 33, 7, 56];
numbers.sort((a, b) => a - b);
console.log("Sorted Numbers:", numbers);
