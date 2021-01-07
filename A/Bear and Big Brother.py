# Take inputs from user
a, b = map(int, input().split())
    
# Define years variable counter
years = 0
    
# Check if Limak is heavier than bob or not
while a <= b:
    a *= 3
    b *= 2
    years += 1
print(years)    
