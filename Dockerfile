# base image
FROM ubuntu:latest

# update the image
RUN apt-get update && apt-get upgrade -y

# install packages
RUN apt-get install -y build-essential git cmake