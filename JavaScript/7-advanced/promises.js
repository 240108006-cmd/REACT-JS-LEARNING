console.log("hi")
let promise1 = new Promise(function(resolve,reject){
    setTimeout(function(){
        console.log("async code")
        resolve()
        
    },1000)
})
promise1.then(function(){
    console.log("function called by resolve")
})

// can also call out a promise without a name
new Promise(function(resolve,reject){
    setTimeout(function(){
        let obj={
            username: "aksh",
            password : "gupta@123"
        }
        resolve(obj)
    },1000)
})
.then(function(object){
    console.log(object.password)
})

// usage of both resolve and reject
let promise4 = new Promise(function(resolve,reject){
    setTimeout(function(){
        let error = false
        if (!error){
            console.log("THERE IS NO ERROR")
            let obj={
            username: "aksh",
            password : "gupta@123"
            }
            resolve(obj)
        }
        else{
            reject("error comes out")
        }
    },1000)
})
promise4.then(function(object){
    return object.username
})
.then(function (username){
    console.log(username)
})
.catch(function(msg){
    console.log(msg);
}).finally(function(){
    console.log("code execution successfull")
})


let promise5 = new Promise(function(resolve,reject){
    setTimeout(function(){
        let error = true
        if (!error){
            console.log("THERE IS NO ERROR")
            let obj={
            username: "aksh",
            password : "gupta@123"
            }
            resolve(obj)
        }
        else{
            reject("error comes out")
        }
    },1000)
})
promise5.then(function(object){
    return object.username
})
.then(function (username){
    console.log(username)
})
.catch(function(msg){
    console.log(msg);
}).finally(function(){
    console.log("code execution successfull")
})


let promise6 = new Promise(function(resolve,reject){
    setTimeout(function(){
        let error = false
        if (!error){
            resolve({
                username:"aksh",
                password:"guptajiiiiii"
            })
        }
        else{
            reject("error coming out")
        }
    },1000)
})
async function promisegame(){
    try{
        let response= await promise6
        console.log(response)
    }
    catch(msg){
        console.log(msg)
    }
}
promisegame()


let promise8 = new Promise(function(resolve,reject){
    setTimeout(function(){
        let error = true
        if (!error){
            resolve({
                username:"hitesh",
                password:"Gupta@123"
            })
        }
        else{
            reject("error comess outttttttttt")
        }
    },1000)
})
async function promiseeight() {
    try{
        let response = await promise8
        console.log(response)
    }
    catch(msgg){
        console.log(msgg)
    }
}
promiseeight()


// for fetching data we have alreadyt learned about xmlhttp request
let xhr = new XMLHttpRequest()
xhr.open("GET","#")
xhr.onreadystatechange=function(){
    if (xhr.readyState==4){
        let data = this.responseText
        let datainobject= JSON.parse(data)
    }
}
xhr.send()

// we have done fetching by using xmlhttpreuestmethod
// we can also done by using promises
// replace the promise with fetch and then by both (then catch finally) 
// and async,await we can fetch the api easily 
async function fetching(){
    try{
        let response = await fetch('https://api.github.com/users/hiteshchoudhary')
        let actualresponse = await response.json()
        console.log(actualresponse)
    }
    catch(msggg){
        console.log(msgg)
    }
}
fetching()

// 9BY THEN CATCH FINALLY
fetch('https://api.github.com/users/hiteshchoudhary').then(function(response){
    return response.json()
}).then(function(actualresponse){
    console.log(actualresponse)
}).catch(function(msggg){
    console.log(msggg)
}).finally(function(){
    console.log("execution successfully doneeeeee")
})