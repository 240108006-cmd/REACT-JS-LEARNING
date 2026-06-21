import { useState } from 'react'

/*function App() {
  let counter = 5
  

  function Adding(){
    counter =counter+1 
    /*internally toh counter ki value increase 
    ho rhi hai agar button click kre toh
    lekin value of counter is ___ me 
    UI ME VALUE SAME HI REH RHI HAI CALLING KE TIME PAR 
    
  }



  function Removing(){
    counter =counter-1
    /*internally toh counter ki value decrease 
    ho rhi hai agar button click kre toh
    lekin value of counter is ___ me 
    UI ME VALUE SAME HI REH RHI HAI CALLING KE TIME PAR 
    
  }
  return (
    <>
       <h1>AKSH GUPTA </h1>
       <button onClick={Adding}> ADD VALUE </button>
       <button onClick ={Removing}> REMOVE VALUE </button>
       <p> value of counter is {counter} </p> {/*to change the ui for this we will use counters} 
    </>
  )
}

export default App*/
function App(){
  let [counter,setCounter]= useState(15)
  /* set counter function se pura ui me ek baar me change ho jayega 
  so easy
  useState(default or initial value ) */ 

  function Increaser(){
    counter = counter +1
    setCounter(counter)
  }

  function Decreaser(){
    counter=counter -1
    setCounter(counter)
  }
  return(
    <>
    <h1> AKSH GUPTA {counter}</h1>
    <button onClick={Increaser}> TO INCREASE CLICK ME </button>
    <button onClick={Decreaser}> TO DECREASE CLICK ME </button>
    <h2> Value of Counter is {counter}</h2>
    <p> {counter} </p>
    </>
  )
}
export default App
