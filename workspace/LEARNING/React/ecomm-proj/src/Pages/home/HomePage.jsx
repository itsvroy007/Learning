import axios from 'axios'
import { useEffect , useState } from 'react';
import { Header } from '../../components/Header';
import './HomePage.css'
import { ProductsGrid } from './ProductsGrid';

export function HomePage({cart}) {
  const [products , setProducts] = useState([]);
  useEffect(() => {
    const getHomeData = async () => {
      const response = await axios.get('http://localhost:3000/api/products')
      setProducts(response.data);
    };
    getHomeData();
  },[]);
    
/*
  fetch('http://localhost:3000/api/products')
    .then((response) => {
        response.json().then((data) => {
          console.log(data);
          
        })
    })

    .then((response) => {
      return response.json()
    }).then((data) => {
      console.log(data);
      
    })
*/

  return (
    <>
      <title>Ecomm-Proj</title>

      <Header  cart={cart}/>
      
      <div className="home-page">
        <ProductsGrid products={products} />
      </div>
    </>
  );
}
