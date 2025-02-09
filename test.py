import argparse

# Set up argument parser
parser = argparse.ArgumentParser(description="Process an integer input.")
parser.add_argument("integer", type=int, help="An integer input")

# Parse the arguments
args = parser.parse_args()
print("You entered:", args.integer)
