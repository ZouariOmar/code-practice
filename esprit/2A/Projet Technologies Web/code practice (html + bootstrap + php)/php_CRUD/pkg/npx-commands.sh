#!/bin/bash

# Run create-react-app to create a new React application
echo "Creating a new React application with create-react-app..."
npx create-react-app my-app

# Run a local server (example: http-server)
echo "Starting a local server with http-server..."
npx http-server ./my-app

# Run ESLint to check JavaScript files for errors
echo "Running ESLint to check for errors in the current directory..."
npx eslint .

# Create a new Next.js app
echo "Creating a new Next.js application..."
npx create-next-app my-next-app

# Run TypeScript compiler to check types
echo "Running TypeScript compiler to check types..."
npx tsc --noEmit

# Run Jest tests
echo "Running Jest tests..."
npx jest

# Create a new Vue.js application
echo "Creating a new Vue.js application with Vue CLI..."
npx @vue/cli create my-vue-app

# Execute a one-off command (example: create a new directory)
echo "Creating a new directory named 'new-dir'..."
npx mkdirp new-dir

# Run Prettier to format files
echo "Formatting files with Prettier..."
npx prettier --write "**/*.js"

echo "All commands executed successfully!"
