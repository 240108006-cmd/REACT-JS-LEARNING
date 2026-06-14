// use of static , extends,super keywords 
class user{
    constructor(username,email,college){
        this.username = username 
        this.email = email
        this.college=college
    }
    logme(){
        console.log(`${this.username} has been logged in recently`)
    }
    verify(){
        console.log(`please verify the email : ${this.email}`)
    }
}
class teacher extends user {
    constructor(username,college,teachername,email){
        super(username,email,college)
        this.teachername=teachername
    }
    Teacherid(){
        console.log(parseInt(Math.random()*(100)+1))
    }
}
let user1 = new user("aksh","240108006@hbtu.ac.in","HBTu")
let teacher1 = new teacher("aksh","HBTU","anuja","anuja2310@gmail.com")
user1.logme()
teacher1.Teacherid()
console.log(teacher1.username)
console.log(teacher1.teachername)
teacher1.Teacherid()
user1.verify() // as verify function ius static , this would return error while called on 
teacher1.verify()
console.log(teacher1.email)
console.log(teacher1.college)

