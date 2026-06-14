const user = {
    username: "hitesh",
    loginCount: 8,
    signedIn: true,

    getUserDetails: function(){
        console.log("Got user details from database");
        console.log(`Username: ${this.username}`);
        console.log(this);
    }

}
console.log(user.username)
user.getUserDetails()
console.log(this);

// creating objects by using functions(METHOD 1)
// CREATING objects by using class- constructor (method 2)
// method 1
function create_object(username, password,email){
    this.username= username
    this.password= password
    this.email= email
}
let obj1 = new create_object("AKSH GUPTA","GUPTA@123","240108006@HBTU.AC.IN")
let obj2 = new create_object("Alok gujar","Gujar@123","240108007@HBTU.AC.IN")
console.log(obj1)
console.log(obj2)