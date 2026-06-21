// HAVE TO UPDATE UI AND ENSURE THAT VALUE SHOULD NOT LESS THAN 0
import {useState} from "react"
function Q2(){
    let[age,setAge]=useState(18)


    function Increase(){
        age= age+1
        setAge(age)
    }
    


    function Decrease(){
        age=age-1
        if(age>=0){
            setAge(age) // UI me hum tbhi chnage krenge jab age >= 0 ho only .
        }
    }
    return(
        <>
        <h1> AKSH GUPTA </h1>
        <p> The age is {age} </p>
        <p> the age {age} is fine </p>
        <h1> the age {age} would increase</h1>
        <button onClick={Increase}> increase the age on click </button>
        <button onClick={Decrease}> Decrease the age on click </button>
        </>
    )
}



export default Q2