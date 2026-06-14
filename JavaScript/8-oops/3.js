// setting properties of array , string , objects
let arr = [-20,-30,-40,-50,60,82,-7,10]
let obj = {
    username : "Aksh Gupta",
    password : "Gupta@123",
    email :"240108006@hbtu.ac.in"
}
let str = "    aksh gupta        "
// adding the function true length to string's prototype
String.prototype.truelength = function(){
    console.log((this.trim()).length)
}
// adding function to prototype of array for printing total negative numbers
Array.prototype.total_negatives = function(){
    for (const element of this) {
        if (element<0) {
            console.log(element);
        }
    }
}
// adding funciton to object
Object.prototype.hitesh = function(){
    console.log(`hitesh is present in all objects`);
}


arr.total_negatives()
obj.hitesh()
str.truelength()
"hitesh".truelength()
"aksh  ".truelength()

// as object prototype is preent in all string ,a array, functions
// fir object prototype me defined functions har ek me string , array,functions sab me accessible honge
arr.hitesh()
str.hitesh()



// inheritance of properties from multiple objects

const User = {
    name: "chai",
    email: "chai@google.com"
}

const Teacher = {
    makeVideo: true
}

const TeachingSupport = {
    isAvailable: false
}

Object.setPrototypeOf(TeachingSupport,User)// this would inherits all the propertiesof User to TeachingSupport
console.log(TeachingSupport.name)
console.log(TeachingSupport.email)
console.log(TeachingSupport.isAvailable)
