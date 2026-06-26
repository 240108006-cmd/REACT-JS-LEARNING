import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from './assets/vite.svg'
import heroImg from './assets/hero.png'
import './App.css'

function App() {
  let[color,setcolor]=useState("blueviolet")

  return (
    <>
    <div style={{backgroundColor:color}} className='bodyy'> {/*color me {} isliye nhi lagaya kyuki{{backgroundColor:color}} me already two {} hain  */}
      <div className='outerbox'> 
        <div style={{backgroundColor:"red"}} className='innerdiv' onClick={()=> setcolor("red")}>RED</div>
        <div style={{backgroundColor:"green"}} className='innerdiv' onClick={()=> setcolor("green")}>GREEN</div>
        <div style={{backgroundColor:"blue"}} className='innerdiv' onClick={()=> setcolor("blue")}>BLUE</div>
        <div style={{backgroundColor:"olive"}} className='innerdiv' onClick={()=> setcolor("olive")}>OLIVE</div>
        <div style={{backgroundColor:"grey"}} className='innerdiv' onClick={()=> setcolor("grey")}>GREY</div>
        <div style={{backgroundColor:"yellow"}} className='innerdiv' onClick={()=> setcolor("yellow")}>YELLOW</div>
        <div style={{backgroundColor:"pink"}} className='innerdiv' onClick={()=> setcolor("pink")}>PINK</div>
        <div style={{backgroundColor:"purple"}} className='innerdiv' onClick={()=> setcolor("purple")}>PURPLE</div>
        <div style={{backgroundColor:"lavender"}} className='innerdiv' onClick={()=> setcolor("lavender")}>LAVENDER</div>
        <div style={{backgroundColor:"white"}} className='innerdiv' onClick={()=> setcolor("white")}>WHITE</div>
        <div style={{backgroundColor:"black"}} className='innerdiv' onClick={()=> setcolor("black")}>BLACK</div>
      </div>
    </div>
      
    </>
  )
}

export default App
