import "./colorchanger.css";
import { useState } from "react";

export function ChangeColor() {
  const [color, setColor] = useState("cyan");
  
  return (
    <>
      <div className="function" style={{backgroundColor:color}}> 
        <div className="color-options" >
          
            <button onClick={() => setColor("red")} className="red-button">
              Red
            </button>
          
            <button
              onClick={() => { setColor("green");}} className="green-button">
              Green
            </button>
          
            <button
              onClick={() => {setColor("blue"); }} className="blue-button">
              Blue
            </button>
          
            <button
              onClick={() => {setColor("yellow");}} className="yellow-button">
              Yellow
            </button>
          
            <button
              onClick={() => {setColor("lavender");}} className="lavender-button">
              Lavender
            </button>
          
            <button
              onClick={() => {setColor("olive");}} className="olive-button">
              Olive
            </button>
          
            <button
              onClick={() => {setColor("black"); }} className="black-button">
              Black
            </button>
              
            <button
              onClick={() => {setColor("gray")}} className="gray-button">
              Gray
            </button>
          
            <button
              onClick={() => {
                setColor("pink")}}className="pink-button">
              Pink
            </button>
            
            <button
              onClick={() => {setColor("purple");}} className="purple-button">
              Purple
            </button>
          
        </div>
      </div>
    </>
  );
}
