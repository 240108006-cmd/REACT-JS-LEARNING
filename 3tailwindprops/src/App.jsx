import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from './assets/vite.svg'
import heroImg from './assets/hero.png'
import './App.css'
import Cards from './assets/Cards'

function App() {
  let username = "AKSH GUPTA"
  let hello = {
    key:"AKSH",
    value:"240108006"
  }
  return (
    <>
      {/* <h1 className='bg-green-400 text-black p-4 rounded-xl mb-4'>Tailwind test</h1>

      {/*CARD 1 FOR USERNAME AKSH AND btnText as IT*
      
      <div className="relative h-[400px] w-[300px] rounded-md ">
      <img
        src="https://images.unsplash.com/photo-1546961329-78bef0414d7c?ixlib=rb-4.0.3&amp;ixid=MnwxMjA3fDB8MHxzZWFyY2h8MTB8fHVzZXJ8ZW58MHx8MHx8&amp;auto=format&amp;fit=crop&amp;w=800&amp;q=60"
        alt="AirMax Pro"
        className="z-0 h-full w-full rounded-md object-cover"
      />
      <div className="absolute inset-0 bg-gradient-to-t from-gray-900 to-transparent"></div>
      <div className="absolute bottom-4 left-4 text-left">
        <h1 className="text-lg font-semibold text-white">{username}</h1>
        <p className="mt-2 text-sm text-gray-300">
          Lorem ipsum dolor sit amet consectetur adipisicing elit. Excepturi,
          debitis?
        </p>
        <button className="mt-2 inline-flex cursor-pointer items-center text-sm font-semibold text-white">
          {btnText } →
        </button>
      </div>
      </div>

      {/*CARD 2 FOR USERNAME AKSH AND btnText as IT*
      
      <div className="relative h-[400px] w-[300px] rounded-md ">
      <img
        src="https://images.unsplash.com/photo-1546961329-78bef0414d7c?ixlib=rb-4.0.3&amp;ixid=MnwxMjA3fDB8MHxzZWFyY2h8MTB8fHVzZXJ8ZW58MHx8MHx8&amp;auto=format&amp;fit=crop&amp;w=800&amp;q=60"
        alt="AirMax Pro"
        className="z-0 h-full w-full rounded-md object-cover"
      />
      <div className="absolute inset-0 bg-gradient-to-t from-gray-900 to-transparent"></div>
      <div className="absolute bottom-4 left-4 text-left">
        <h1 className="text-lg font-semibold text-white">{username}</h1>
        <p className="mt-2 text-sm text-gray-300">
          Lorem ipsum dolor sit amet consectetur adipisicing elit. Excepturi,
          debitis?
        </p>
        <button className="mt-2 inline-flex cursor-pointer items-center text-sm font-semibold text-white">
          {btnText } →
        </button>
      </div>
      </div>

      {/* WE ARE SEEING THAT THE CODE IS GETTING CONGESTED TO MAKE THE SAME CARDS MULTIPLE TIME 
      SO WE CAN PUT THE CODE IN AN ANOTHER FILE AND CALL IT HERE BY USING IMPORT , EXPORT AND CALLER */}
      

      <p> BETTER APPROACH NOW </p> 
      <h1 className='bg-green-400 text-black p-4 rounded-xl mb-4'>Tailwind test</h1>
      <Cards username ="AKSH GUPTA" btnText ="IT STUDENT" /> {/* TO PRINT THIS WE ARE REQUIRED TO GIVE USERNAME AND BTNTEXT AS INPUT FROM THIS CALL*/}
      <Cards username ="ANJANI MOURYA " btnText ="CE STUDENT"/>
      {/* if we want to pass on array or object we can do that easily also we have to make them explicitly !!!
      <Cards username ="akshhh" btnText = {hello} /> */}
    </>
  )
}

export default App
