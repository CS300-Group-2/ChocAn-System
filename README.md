# ChocAn-System
A learning project for CS300

Project is ignored into conceptual directories, e.g. the datacenter is in datacenter/ and the models it uses are in datacenter/model/ 

To make #includes effortless, I've created one header file for each directory which includes all the associated files in it's directory
This makes it easy to re-organize the project, as instead of changing every single #include throughout the entire project,  we only need 
to change the directory's #include.

The makefile was created and run on PSU's linux servers, to make cross platform compatibility effortless.
To use this project, add an SSH key: https://help.github.com/en/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent
(ignore steps 2 and 3 in 'Adding your SSH keys to SSH agent'), and clone the repo from the PSU servers. Then simply run `make` then `./ChocAn` 
