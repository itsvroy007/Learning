import { useCallback, useState } from "react";
import "./App.css";
import { useEffect } from "react";

function App() {
  const [length, setLength] = useState(8);
  const [numberAllowed, setNumberAllowed] = useState(false);
  const [charAllowed, setcharAllowed] = useState(false);
  const [password, setPassword] = useState("");
  const passwordGenerator = useCallback(() => {
    let pass = "";
    let str= "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    if (numberAllowed) {
      str += "0123456789"
    }
    if (charAllowed) {
      str += '!@#$%^&*(){}":;.,/+-[]|'
    }
    for (let i = 1; i <= length; i++) {
      let char = Math.floor(Math.random() * str.length + 1);
      pass += str.charAt(char);
    }
    setPassword(pass);
  }, [length, numberAllowed, charAllowed, setPassword]);

  useEffect(() => {
    passwordGenerator()
  },[length,charAllowed,numberAllowed,passwordGenerator])

  return (
    <>
      <div>
        <h1 className="header">
          Password Generator
        </h1>
        <div>
          <input
            className="pass-box"
            type="text"
            value={password}
            placeholder="password"
            readOnly
          />
          <button className="copy-button">copy</button>
        </div>
        <div className="pass-options">
          <div >
            <input className="pass-length" type="range" min={6} max={50} value={length}
            onChange={(event) => {setLength(event.target.value)}}
            />
            <label>Length:{length}</label>
          </div>

          <div className="number-checkbox">
            <input 
              type="checkbox"
              defaultChecked={numberAllowed}
              id="numberInput"
              onChange={() => {setNumberAllowed((prev)=> !prev)}}
            />
            <label htmlFor="numberInput">Numbers</label>
          </div>

          <div className="number-checkbox">
            <input 
              type="checkbox"
              defaultChecked={numberAllowed}
              id="numberInput"
              onChange={() => {setcharAllowed((prev)=> !prev)}}
            />
            <label htmlFor="numberInput">Characters</label>
          </div>
        </div>
      </div>
    </>
  );
}

export default App;
