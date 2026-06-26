import React,{ useState,useCallback,useEffect,useRef } from 'react'
import './App.css'
function App(){
  let[length,setlength] = useState(10)
  let[numberAllowed,setnumberAllowed]=useState(false)
  let[characterAllowed,setcharacterAllowed] =useState(false)
  let[password,setpassword]=useState("abcde")
  let passref = useRef(null)


  function passwordgenerator(){
    let pass =""
    let string ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
    if(numberAllowed){
      string=string+ "1234567890"
    }
    if(characterAllowed){
      string=string+"@#$%^&*()_!?/"
    }
    for(let i=0;i<=length-1;i++){
      pass=pass+string[Math.floor(Math.random()*(string.length))]
    }
      setpassword(pass)
  }

  useEffect(function(){
    passwordgenerator()
  },[length,numberAllowed,characterAllowed])


  return (
    <>
      <div className='outerbox'>
        <input className='password' ref={passref} type='text' value={password} readonly/>
        <div className='copy'  onClick={function(){
          passref.current.select()
          window.navigator.clipboard.writeText(password)

        }}>COPY</div>
        <input type='range' min={1} max={22} value={length} onChange={(e)=> setlength(e.target.value)}/> length[{length}]
        <input type='checkbox'  name='tick' onChange={()=> setnumberAllowed((prev )=> !prev)}/> Number
        <input type='checkbox'  name='tick' onChange={ ()=> setcharacterAllowed((prev )=> !prev) }/> Character
      </div>

    </>
  )
}
export default App







