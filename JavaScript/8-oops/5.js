// creation of objects by class-constructor
class user{
    constructor(username,email,password){
        this.username=username
        this.password=password
        this.email=email
    }
    encryptPassword(){
        console.log(`${this.password}ASdF`)
    }
    changeusername(newname){
        this.username=newname
        console.log(this.username)
    }
}
let obj1 = new user ("aksh","240108006@Hbtu.ac.in","gupta@123") 
obj1.encryptPassword()
obj1.changeusername("alok")

// creation of objects by functions 
function create_object(username,email,password){
    this.username=username
    this.password=password
    this.email=email
}
create_object.prototype.encryptPassword=function(){
    console.log(`${this.password}abcd`);
}
create_object.prototype.changeusername=function(newname){
    this.username=newname
    console.log(this.username)
}

let obj2 = new create_object("aksh","240108006@Hbtu.ac.in","gupta@123")
obj2.encryptPassword()
obj2.changeusername("vansh")