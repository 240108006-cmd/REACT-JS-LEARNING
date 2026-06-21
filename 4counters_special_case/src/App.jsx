import { useState } from 'react'

function App() {
  let [counter,setcounter]=useState(50)
  function Increaser(){
    
    setcounter(counter+1)
    // what would happen if we add such three more setcounters 
    setcounter(counter+1)
    setcounter(counter+1)
    setcounter(counter+1)
    // increase 1 hi hoga press krne par kyuki sab ek jaise hain toh sab batches me execute honge , 
    // aur kyuki sab same hai toh fir execute ek ho ya saare output same hiu aayega

  }
  function Decreaser(){
  
    // setcounter(counter-1) // this would decrease the value by 1 usually
    // but if we declare a arrow function inside setcounter 
    setcounter((counter) => (counter)-1)
    setcounter((counter) => (counter)-1)
    setcounter((counter) => (counter)-1)
    setcounter((counter) => (counter)-1)
    // THESE 4 STATEMENTS WOULD COMBINELY ACTS AS setcounter(counter-4)


  }

  return (
    <>
      <p>aksh gupta </p>
      <h1> increaser and decreaser {counter}</h1>
      <button onClick={Increaser}></button>
      <button onClick={Decreaser}></button>
    </>
  )
}

export default App
