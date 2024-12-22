# Use the official Ubuntu 22.04 image as a base
FROM ubuntu:22.04

# Avoid prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Install basic dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    curl \
    wget \
    git \
    vim \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# Install Clang and CMake
RUN apt-get update && apt-get install -y \
    clang-14 \
    cmake \
    lldb \
    python3 \
    python3.10-venv \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

ENV CC=clang-14
ENV CXX=clang++-14