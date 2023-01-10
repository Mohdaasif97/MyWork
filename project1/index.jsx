import React from 'react';
import ReactDOM from 'react-dom/client';
import Info from "./Info";
import MainContent from "./MainContent"
import Footer from "./Footer"

function App() {
  return (
    <div>
    <Info />
    <MainContent />
    <Footer />
    </div>
    )
}

ReactDOM.createRoot(document.getElementById('root')).render(<App />); 