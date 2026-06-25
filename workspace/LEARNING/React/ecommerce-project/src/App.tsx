import  { HomePage }   from './pages/HomePage'
import  {CheckoutPage}  from './pages/CheckoutPage'
import { Routes , Route }  from 'react-router' 
import  OrdersPage  from './pages/OrdersPage'
import TrackingPage  from './pages/TrackingPage'


function App() {
  return (
    <>
      <div>heelo this is a Test </div>
      <Routes>
        <Route path='/' element={<HomePage />}></Route>
        <Route path='checkout' element={<CheckoutPage />}></Route>
        <Route path='orders' element={<OrdersPage />}></Route>
        <Route path='tracking' element={<TrackingPage />}></Route>
      </Routes>      
    </>
  )
}
// symbol / means empty path else name of the page
// elem tell which component to display 

export default App
