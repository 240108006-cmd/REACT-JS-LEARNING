import { useState } from 'react'
import './App.css'
import { useContext } from 'react'
import usercontext from './assets/CONTEXTAPI/createusercontet'
import Output from './Output'
function Login() {
    let [Name,setName] =useState("")
    let [Age,setAge] =useState(null)
    let [Password,setPassword] =useState("")
    let [Address,setAddress] =useState("")
    let {setuser,setshowoutput} =useContext(usercontext)
    return (
        <>
        <input type='text' placeholder='ENTER NAME' value={Name} onChange={function(e){
            setName(e.target.value)
        }}/>
        <input type='number' placeholder='ENTER AGE' value={Age} onChange={function(e){
            setAge(Number(e.target.value))
        }}/>
        <input type='text' placeholder='ENTER ADDRESS' value={Address} onChange={function(e){
            setAddress(e.target.value)
        }}/>
        <input type='password' placeholder='ENTER PASSWORD' value={Password} onChange={function(e){
            setPassword (e.target.value)
        }}/>
        <input type='submit' onClick={function(){
            setuser({Name,Age,Address,Password});
            setshowoutput(true);
            setName("");
            setAge(null);
            setAddress("");
            setPassword("");
        }} />
        </>
    )
}

export default Login