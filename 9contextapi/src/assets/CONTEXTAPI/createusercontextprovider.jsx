import { Children } from "react"
import usercontext from "./createusercontet"
import { useState } from "react"
let UserContextProvider = ({children})=> {
    let [user,setuser]= useState({
        Name : "",
        Password : "gupta@123"
    })
    let[showoutput,setshowoutput]=useState(false)
    return (
        <usercontext.Provider value={{user,setuser,showoutput,setshowoutput}}>
        {children}
        </usercontext.Provider>
    )
    
}
export default UserContextProvider