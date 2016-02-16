# Lines configured by zsh-newuser-install
HISTFILE=~/.histfile
HISTSIZE=1000
SAVEHIST=1000
bindkey -e
# End of lines configured by zsh-newuser-install
# The following lines were added by compinstall
zstyle :compinstall filename '/home/ungaro_l/.zshrc'

autoload -Uz compinit
compinit
# End of lines added by compinstall

################################  ZSH PERSO  ##################################

autoload -U promptinit
promptinit
autoload -U colors
colors

PROMPT="%{$fg[red]%}%(?..[%?] )%{$reset_color%}%* %# "

zstyle ':completion:*' menu select

#############################  EPITECH DEFAULT  ###############################

export PATH="/bin:/sbin:/usr/bin:/usr/sbin:/usr/heimdal/bin:/usr/heimdal/sbin"

export EDITOR='emacs'
export HISTSIZE=1000
export MAIL="/u/all/${USER}/mail/${USER}"
export PAGER='more'
#export PS1="(\u@\h \#)" #Traditionnal EPITECH prompt
#export PS1="\t \$ " #Perso & most anonymous prompt
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


##################################  PERSO  ####################################

##Automatical netsoul authentification
##ns_auth

##System customization
export PAGER='most'
export PATH="$PATH:$HOME/myscripts"

## Aliases persos

# Compilation
alias xmake='clear;make re'
alias mcl='make clean'
alias xmk='xmake; mcl'

# Git
alias graph='git graph'
alias stat='git status'

# System
alias l='clear;pwd;echo;ls -lAhX;echo'
alias ll='clear;ls -plah;echo'
alias rm='rm -v --preserve-root'
alias rd='rmdir -v'
alias md='mkdir'
alias jj='java -jar'
alias h='date +"%T"'
alias ffx='nohup firefox'
alias ggl='nohup xdg-open http://google.fr'
alias intra='nohup xdg-open http://intra.epitech.eu'
alias mail='nohup xdg-open https://login.microsoftonline.com/login.srf?wa=wsignin1.0'
alias open='xdg-open'
alias mlk='xlock -mode matrix'
alias rmake='reset;make'
alias us='setxkbmap us'
alias fr='setxkbmap fr'
alias battery='upower -i /org/freedesktop/UPower/devices/battery_BAT0| grep -E "state|time|percentage|to full|to empty"'
alias today='cd $HOME/rendu/UNIX_system/PSU_2015_minitalk'
alias lapin='cd $HOME/rendu/Igraph/gfx_tekpaint'

## !Aliases

## Read-only emacs mode
ev()
{
  emacs "$1" --eval '(setq buffer-read-only t)'
}
## RM with my_select
rms()
{
    if [ $# -ge 1 ]
    then
	rm `my_select $@`
    else
	rm `my_select ./*`
    fi
}

##Fancy start message
clear
echo ""
$HOME/myscripts/my_defile_letters " Blinux runway initializing..." 1000
echo ""
$HOME/myscripts/my_defile_letters " Term session started at " 1000
echo -e "`date +"%T"`\n "
usleep 100000
$HOME/myscripts/my_defile_letters " Welcome ungaro_l, your shell is ready to proceed" 1000
echo -e "\n"
