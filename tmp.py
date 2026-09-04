def fc(temp, unit):
    if unit in ('C', 'c'):
        fahrenheit = round((temp * 9 / 5) + 32)
        print(f"{temp}°C is equal to {fahrenheit}°F")
    elif unit in ('F', 'f'):
        celsius = (temp - 32) * 5 / 9
        print(f"{temp}°F is equal to {celsius}°C")
    else:
        print("Invalid unit entered!")

if __name__ == "__main__":
    print("******Temperature Converter*****")
    temp = float(input("Enter the temperature: "))
    unit = input("Enter the unit (C for Celsius, F for Fahrenheit): ").strip()
    print("********************************")

    fc(temp, unit)