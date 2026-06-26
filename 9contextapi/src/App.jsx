import { useContext } from 'react'
import Login from './Login'
import Output from './Output'
import usercontext from './assets/CONTEXTAPI/createusercontet'
function App() {
  let {showoutput} = useContext(usercontext)
  return (
    <>
      <Login/>
      {showoutput ? <Output /> : null}
    </>
  )
}

export default App
