import streamlit as st

st.title("Welcome to My Streamlit App")
st.write("This is a simple web app using Streamlit.")
name = st.text_input("Enter your name:")
if name:
    st.write(f"Hello, {name}!")
