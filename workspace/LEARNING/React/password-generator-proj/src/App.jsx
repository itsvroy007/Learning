import { useCallback, useRef,useEffect,useState } from "react";
import "./App.css";

function App() {
  const [length, setLength] = useState(6);
  const [numberAllowed, setNumberAllowed] = useState(false);
  const [charAllowed, setcharAllowed] = useState(false);
  const [password, setPassword] = useState("");

  const passwordRef= useRef(null)

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

  const copyPasswordToClipboard = useCallback(() => {
    passwordRef.current?.select();
    passwordRef.current?.setSelectionRange(0, 999);
    window.navigator.clipboard.writeText(password)
  }, [password])

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
            ref={passwordRef}
          />
          <button className="copy-button" onClick={copyPasswordToClipboard}>copy</button>
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
