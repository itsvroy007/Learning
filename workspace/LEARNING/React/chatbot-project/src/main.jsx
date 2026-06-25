import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import './index.css'
import App from './App.jsx'

export default createRoot(document.getElementById('root')).render(
  <StrictMode>
    <>
      <p> hiii </p>

      {console.log('hleoo')
      }
    </>
    <App />
  </StrictMode>,
)
