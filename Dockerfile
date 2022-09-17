# Pull base image
FROM	ubuntu:latest

# Establish work directory
WORKDIR	/app

# copy essential files
COPY	./printSomething /app/
COPY	./data/		/app/data/

# Install dependencies
RUN	apt-get update
RUN	apt-get upgrade --assume-yes
RUN	apt-get install --assume-yes vim

# Established default command
CMD	["./printSomething"]
