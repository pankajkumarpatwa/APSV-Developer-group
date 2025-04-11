#chatbot.!!---
import random

def get_response(user_input):
    """Generates a response based on the user's input."""

    user_input = user_input.lower()  # Convert input to lowercase for easier matching.

    # Define a dictionary of possible user inputs and their corresponding responses.
    responses = {
        "hello": ["Hi there!", "Hello!", "Greetings!"],
        "hi": ["Hi there!", "Hello!", "Greetings!"],
        "how are you": ["I'm doing well, thank you!", "I'm just a chatbot, but I'm functioning!", "I'm good!"],
        "what is your name": ["I'm a chatbot!", "You can call me Chatbot.", "I don't have a personal name."],
        "what can you do": ["I can answer basic questions and have simple conversations.", "I can provide information and chat with you.", "I can help with simple tasks."],
        "bye": ["Goodbye!", "See you later!", "Have a nice day!"],
        "goodbye": ["Goodbye!", "See you later!", "Have a nice day!"],
        "thanks": ["You're welcome!", "No problem!", "Glad I could help!"],
        "thank you": ["You're welcome!", "No problem!", "Glad I could help!"],
        "default": ["I'm not sure I understand.", "Could you please rephrase that?", "I don't have a response for that."]
    }

    # Check if the user's input matches any of the keys in the responses dictionary.
    for key in responses:
        if key in user_input:
            return random.choice(responses[key])

    # If no match is found, return the default response.
    return random.choice(responses["default"])

def chatbot():
    """Starts the chatbot and handles user interactions."""

    print("Chatbot: Hello! How can I help you today?")

    while True:
        user_input = input("You: ")
        if user_input.lower() == "exit":
            print("Chatbot: Goodbye!")
            break

        response = get_response(user_input)
        print("Chatbot:", response)

if __name__ == "__main__":
    chatbot()