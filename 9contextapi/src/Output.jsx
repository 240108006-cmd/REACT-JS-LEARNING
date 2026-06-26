import { useContext } from "react"
import usercontext from "./assets/CONTEXTAPI/createusercontet"

function Output(){
    let {user,setName,setAge,setAddress,setPassword} = useContext(usercontext)
    let {Name,Age,Address,Password} = user
    return(
        <>
            <div> THE USER {Name} has just logged into the system</div>

            kindly verify details before going further 
            <table border={1}>
                <tr>
                    <th> NAME </th>
                    <th> AGE </th>
                    <th> ADDRESS </th>
                </tr>
                <tr>
                    <td>{Name}</td>
                    <td>{Age}</td>
                    <td>{Address}</td>
                </tr>
            </table>
            
            
        </>
        
    )
    
}
export default Output 