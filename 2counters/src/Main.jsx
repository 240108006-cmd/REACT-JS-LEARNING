import React,{ StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import App from './App.jsx'
import Q2 from "./Q2.jsx"

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <App />
    <hr />
    <Q2 />
  </StrictMode>,
)
