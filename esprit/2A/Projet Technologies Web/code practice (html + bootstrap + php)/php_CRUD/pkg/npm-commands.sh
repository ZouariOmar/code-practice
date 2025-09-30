#!/bin/bash

# Update npm to the latest version
echo "Updating npm to the latest version..."
npm install -g npm

# Initialize a new npm project
echo "Initializing a new npm project..."
npm init -y

# Install a package (example: express)
echo "Installing express package..."
npm install express

# Install a package as a development dependency (example: nodemon)
echo "Installing nodemon as a development dependency..."
npm install --save-dev nodemon

# List installed packages
echo "Listing installed packages..."
npm list --depth=0

# Run a script defined in package.json (example: start)
echo "Running the start script..."
npm run start

# Uninstall a package (example: express)
echo "Uninstalling express package..."
npm uninstall express

# Check for outdated packages
echo "Checking for outdated packages..."
npm outdated

# Update all packages to their latest version
echo "Updating all packages..."
npm update

# Clean cache
echo "Cleaning npm cache..."
npm cache clean --force

echo "All commands executed successfully!"
