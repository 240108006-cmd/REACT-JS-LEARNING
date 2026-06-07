// reduce function is generally used to calculate sum of array 
let arr=[10,20,30,40,50,60]
let result = arr.reduce((acc,value)=>(acc+value),0)
console.log(result)
console.log("")

const shoppingCart = [
    {
        itemName: "js course",
        price: 2999
    },
    {
        itemName: "py course",
        price: 999
    },
    {
        itemName: "mobile dev course",
        price: 5999
    },
    {
        itemName: "data science course",
        price: 12999
    },
]
let sum = shoppingCart.reduce((acc,value)=>(acc + value.price),0)
console.log(sum)