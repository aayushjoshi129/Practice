
                            // JS BEST IMPORTANT METHODS


// 1) (SPREAD OPERATORS) The Spread Operator expands an array into its elements. It can also be used for object literals.
console.log("\nSpread Operator");
const foods = ["Pizza", "Burger", "Chaap", "Chowmin"];
console.log(foods);
console.log(...foods);
console.log();


// 2) (FOR...OF INERATOR) The for...of statement loops/iterates through the collection, and provides you the ability to modify specific items. It replaces the conventional way of doing a for-loop.
console.log("\nFor...Of Iterator");
const foods2 = ["Pizza", "Burger", "Chaap", "Chowmin"];
console.log(foods2);
for (const item of foods2) {
    console.log(item);
}
console.log();


// 3) (INCLUDES() METHOD) The includes() method is used to check if a specific string exists in a collection, and returns true or false. Keep in mind that it is case sensitive: if the item inside the collection is SCHOOL, and you search for school, it will return false.
console.log("\nIncludes Method");
const foods3 = ["Pizza", "Burger", "Chaap", "Chowmin"];
console.log(foods3);
const findFood = foods3.includes("Pizza");
console.log(findFood);
console.log();


// 4) (SOME METHOD) The some() method checks if some elements exists in an array, and returns true or false. This is somewhat similar to the concept of the includes() method, except the argument is a function and not a string.
console.log("\nSome Method");
const Ages = [15, 20, 25, 30, 45];
console.log(Ages);
const isPresent = Ages.some((age) => age >= 18);
console.log(isPresent);
console.log();


// 5) (EVERY METHOD) The every() method loops through the array, checks every item, and returns true or false. Same concept as some(). Except every item must satisfy the conditional statement, otherwise, it will return false.
console.log("\nEvery Method");
const Ages2 = [15, 20, 25, 30, 45];
console.log(Ages2);
const EveryisLower = Ages2.every((age) => age <= 18);
const EveryisGreater = Ages2.every((age) => age >= 15);
console.log(EveryisLower);
console.log(EveryisGreater);
console.log();


// 6) (FILTER METHOD) The filter() method creates a new array with all elements that pass the test.
console.log("\nFilter Method");
const prices = [25, 30, 15, 55, 40, 10];
console.log(prices);
const gte30 = prices.filter((amount) => amount >= 30);
console.log(gte30);
console.log();


// 7) (MAP METHOD) The map() method is similar to the filter() method in terms of returning a new array. However, the only difference is that it is used to modify items.
console.log("\n Map Method");
const productPriceList = [200, 350, 1500, 5000];
console.log(productPriceList);
const mappedPrice = productPriceList.map((amount) => amount * 1.5);
console.log(mappedPrice);
console.log();


// 8) (REDUCE METHOD) The reduce() method can be used to transform an array into something else, which could be an integer, an object, a chain of promises ( sequential execution of promises) etc. For practical reasons, a simple use case would be to sum a list of integers. In short, it “reduces” the whole array into one value.

console.log("\n Reduce Method");
const weeklyExpenses = [200, 350, 1500, 5000, 450, 680, 350];
console.log(weeklyExpenses);
const totalExpense = weeklyExpenses.reduce((sum, amount) => sum + amount, 0);
console.log(totalExpense);
console.log(); 