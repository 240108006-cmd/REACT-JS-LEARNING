import { createRoot } from 'react-dom/client'
import './Index.css'
import React from "react"
// suppose we want to add a html code of link in page 


// METHOD 2
function Method2(){
  return <a href = 'https://google.com' target = '_blank'>CLICK TO OPEN GOOGLE </a>
}


//METHOD 3
let method3 = <a href = 'https://google.com' target = '_blank'>CLICK TO OPEN GOOGLE </a>

//METHOD 4
let method4 = React.createElement("a",{href :'https://google.com',target :'_blank'},"click to open google")

createRoot(document.getElementById('root')).render(
  <>
  {/*METHOD 1*/}
  (1)
  <a href = 'https://google.com' target = '_blank'>CLICK TO OPEN GOOGLE </a>

  (2)
  {/*METHOD 2*/}
  <Method2 />

  (3)
  {/*METHOD 3*/}
  {method3}

   (4)
  {/*METHOD 4*/}
  {method4}

  </>
    
)
