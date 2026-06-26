import React,{ useState } from 'react'
import './App.css'
import image from "./image.png"
function App() {
  let[clicked,setclicked]=useState(false)
  return (
    <>
      <div  className={clicked ? "outerclicked" : "outer"}>
        <div onClick={function(){
        setclicked(prev => !prev);
      }}className={clicked ? "innerclicked" : "inner"}>

        </div>
      </div>
      <div className={clicked ? "yellowcard" : "card"}>
        <img src= {image} height={200}/>
      </div>
      
    </>
  )
}
export default App
