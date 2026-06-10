// ALL INITIALIZATION
let userinput = (document.querySelector(".guessslot").value)
let randomnumber = (Math.random()*(100))+1
let submitbutton = document.querySelector(".submitbutton")
let guesses = document.querySelector(".prevguess")
let remguesses = document.querySelector(".remguess")
let resultouter = document.querySelector(".resultouter")
let resultmsg = document.querySelector(".resultmsg")

let doneguesses = 1
let playgame = true
let prevguesses =[]

if(playgame){
    submitbutton.addEventListener("submit",function(e){
        e.preventDefault
        validatenumber_push(parseInt(userinput))
    })
}
function validatenumber_push(numbertovalidate){
    if(isNaN(numbertovalidate)){
        alert("please enter a valid number")
    }
    else if(numbertovalidate==""){
        alert("please enter a valid number")
    }
    else if(numbertovalidate<1 ||(numbertovalidate>100){
        alert("please enter a valid number")
    }
    else{
        prevguesses.push(numbertovalidate)
        if(doneguesses == 11){
            updater(numbertovalidate)
            displaymessage(`Game is over!! well try . The correct answer is ${randomnumber}`)
            endgame()
        }
        else{
            updater(numbertovalidate)
            checknumber(numbertovalidate)
        }
    }

}
function checknumber(numbertocheck){
    if(numbertocheck==randomnumber){
        displaymessage(`YOU GUESSED IT RIGHT`)
        endgame()
    }
    else if (numbertocheck < randomnumber){
        displaymessage("TRY TO ENTER SOME BIGGER")
    }
    else if (numbertocheck > randomnumber){
        displaymessage("TRY TO ENTER SOME LESSER")
    }
}

function updater(number){
    userinput = ""
    doneguesses++
    remguesses.innerHTML=`${11-doneguesses}`
    guesses.innerHTML = guesses.innerHTML + `${number},`
}
function displaymessage(msg){
    resultmsg.innerHTML= msg
}
function endgame(){

}
function newgame(){
    
}