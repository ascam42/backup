#!/bin/bash

ulimit -c 0

export PATH="/bin:/sbin:/usr/bin:/usr/sbin:/usr/heimdal/bin:/usr/heimdal/sbin"

export EDITOR='emacs'
export HISTSIZE=1000
export MAIL="/u/all/${USER}/mail/${USER}"
export PAGER='more'
#export PS1="(\u@\h \#)" #Traditionnal EPITECH prompt
export PS1="\t \$ " #Perso & most anonymous prompt
export SAVEHIST=1000
export WATCH='all'

alias la='ls -la'
alias j='jobs'
alias emacs='emacs -nw'
alias ne='emacs'

# LibLapin 1.5
export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export LIBGL_ALWAYS_SOFTWARE=true

if [ -f ${HOME}/.mybashrc ]
then
    . ${HOME}/.mybashrc
fi

export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"

export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"

export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/heimdal/bin:/usr/heimdal/sbin:/home/ungaro_l/myscripts:/home/ungaro_l/bin

[ -f ~/.fzf.bash ] && source ~/.fzf.bash

export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"

export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"

export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
