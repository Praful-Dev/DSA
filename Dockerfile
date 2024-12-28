#running cpp program in docker
# Use an official image with C++ tools
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /app

# Copy your C++ file into the container
COPY 2Darray.cpp .

# Compile the C++ file
RUN g++ -o program 2Darray.cpp 

# Command to execute the compiled program
CMD ["2Darray.exe"]# Dockerfile
#running cpp program in docker
# Use an official image with C++ tools
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /app

# Copy your C++ file into the container
COPY 2Darray.cpp .

# Compile the C++ file
RUN g++ -o program 2Darray.cpp

# Command to execute the compiled program
CMD ["./program"]



