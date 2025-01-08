FROM ubuntu:latest

# Install required packages: socat and bash
RUN apt-get update && apt-get install -y \
    socat \
    bash \
    && rm -rf /var/lib/apt/lists/*

# Create user "chall" and set the home directory
RUN useradd -m -d /home/chall chall

# Copy all content from the local ./chall directory to /home/chall in the container
COPY ./chall /home/chall

# Set the correct ownership for the copied content
RUN chown -R chall:chall /home/chall

# Set the working directory to /home/chall
WORKDIR /home/chall

# Expose port 2025
EXPOSE 2025

# Run socat_server.sh with user "chall"
USER chall
CMD ["bash", "socat_server.sh"]
