import React,{ useState,useEffect } from 'react'
import './App.css'

function App() {
  let[input,setinput]=useState(0)
  let[convertedvalue,setconvertedvalue]=useState(0)
  let[from,setfrom]=useState("usd")
  let[to,setto]=useState("inr")
  let[objarr,setobjarr]=useState({
    usd:1,
    inr:85,
    eur:0.86,
    gbp:0.73
  })
// api was not working at the time of code

 
  useEffect(function(){
    fetch(`https://cdn.jsdelivr.net/gh/fawazahmed0/currency-api@1/latest/currencies/${from}.json`)
    .then((resp)=> resp.json())
    .then((resp)=> setobjarr(resp[from]))
  },[from])
    
  
  

  return (
    <>
      <div className='outerbox'>


        <div className='from'> 

          <p>From</p>

          <input type='number' value={input} onChange={function(e){
            setinput(Number(e.target.value))
          }} />


          <p id='currencytype'>Currency Type</p>


          <select id='fromdropdown' value={from} onChange={function(e){
            setfrom(e.target.value)
          }}>

            {Object.keys(objarr).map((key) =>(
              <option key={key} value={key}>
                {key}
              </option>
            ))}
          </select>

        </div>


        <div className='swap' onClick={function(){

          setto(from)
          setfrom(to)
        
        }}>swap</div>

        <div className='to'>

          <p>To</p>

          <input type='number' readOnly value={convertedvalue} />

          <p id='currencytype2'>Currency Type</p>

          <select id='todropdown' value={to} onChange={function(e){
            setto(e.target.value)
          }}>

              {Object.keys(objarr).map((key)=>
                <option key={key} value={key}>
                  {key}
                </option>
              )}
          
          </select>

        </div>

        <div className='converter' onClick={function(){
          setconvertedvalue (input* objarr[to])
        }}>Convert {from} to {to} </div>
      </div>
    </>
  )
}

export default App
