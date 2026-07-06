from google import genai

# Initialize the client with your API key
client = genai.Client(api_key='AIzaSyCwR2xISQg9In3dSVfiYVSZKC8YBxvhBsY')

# Test the API with a simple request
response = client.models.generate_content(
    model='gemini-2.0-flash',
    contents='What is the capital of France?'
)

# Print the response
print("Response from Gemini:")
print(response.text)