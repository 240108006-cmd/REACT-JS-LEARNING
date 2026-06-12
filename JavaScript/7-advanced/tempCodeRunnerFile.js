console.log("hi")
// let promise1 = new Promise(function(resolve,reject){
//     setTimeout(function(){
//         console.log("async code")
//         resolve()
        
//     },1000)
// })
// promise1.then(function(){
//     console.log("function called by resolve")
// })

// // can also call out a promise without a name
// new Promise(function(resolve,reject){
//     setTimeout(function(){
//         let obj={
//             username: "aksh",
//             password : "gupta@123"
//         }
//         resolve(obj)
//     },1000)
// })
// .then(function(object){
//     console.log(object.password)
// })

// // usage of both resolve and reject
// let promise4 = new Promise(function(resolve,reject){
//     setTimeout(function(){
//         let error = false
//         if (!error){
//             console.log("THERE IS NO ERROR")
//             let obj={
//             username: "aksh",
//             password : "gupta@123"
//             }
//             resolve(obj)
//         }
//         else{
//             reject("error comes out")
//         }
//     },1000)
// })
// promise4.then(function(object){
//     return object.username
// })
// .then(function (username){
//     console.log(username)
// })
// .catch(function(msg){
//     console.log(msg);
// }).finally(function(){
//     console.log("code execution successfull")
// })


// let promise5 = new Promise(function(resolve,reject){
//     setTimeout(function(){
//         let error = true
//         if (!error){
//             console.log("THERE IS NO ERROR")
//             let obj={
//             username: "aksh",
//             password : "gupta@123"
//             }
//             resolve(obj)
//         }
//         else{
//             reject("error comes out")
//         }
//     },1000)
// })
// promise5.then(function(object){
//     return object.username
// })
// .then(function (username){
//     console.log(username)
// })
// .catch(function(msg){
//     console.log(msg);
// }).finally(function(){
//     console.log("code execution successfull")
// })

