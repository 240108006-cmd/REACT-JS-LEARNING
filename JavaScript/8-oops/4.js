// IF WE WANTS TO USE PROPERT BY ANOTHER FUNCTION BY CALLING 
//THEN WE WOULD USE .call(this,)
function setusername(username){
    this.username = username
}
function create_object(email,password){
    setusername.call(this,username)
    this.email = email
    this.password = password 
}
setusername("AKSH GUPTA")
let obj1 = new create_object("240108006@hbtu.ac.in","gupta@123")
console.log(obj1.username)