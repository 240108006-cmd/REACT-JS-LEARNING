
let result = document.querySelector(".result")
result.addEventListener("click",function(e){
    setInterval(function(){
        let date = new Date()
        result.innerHTML=date.toLocaleTimeString()
    },1000)
})
