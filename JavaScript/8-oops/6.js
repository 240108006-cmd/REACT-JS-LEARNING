class user {
    constructor(username){
        this.username=username
    }
    logme(){
        console.log(`the username is ${this.username}`)
    }
}
class teacher extends user{
    constructor(username,email,password){
        super(username)
        this.email = email
        this.password=password
    }
    addCourse(){
        console.log(`A new course was added by ${this.username}`);
    }
}
let teacher1 = new teacher("aksh","240108006@Hbtu.ac.in","gupta@123")
teacher1.addCourse()
teacher1.logme()

let user1 = new user("hitesh")
user1.logme()


console.log(user1 instanceof teacher)// can user1 access the properties of class teacher 
console.log(user1 instanceof user) // can user1 access the properties of class user
console.log(teacher1 instanceof teacher) // can teacher1 access the properties of class teacher
console.log(teacher1 instanceof user) // can teacher1 access the properties of class user 