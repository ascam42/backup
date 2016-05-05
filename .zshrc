################################  OH MY ZSH  ##################################

# Path to your oh-my-zsh installation.
  export ZSH=/home/ungaro_l/.oh-my-zsh

# Set name of the theme to load.
# Look in ~/.oh-my-zsh/themes/
# Optionally, if you set this to "random", it'll load a random theme each
# time that oh-my-zsh is loaded.
ZSH_THEME="my_clean_theme"

# Uncomment the following line to use case-sensitive completion.
# CASE_SENSITIVE="true"

# Uncomment the following line to use hyphen-insensitive completion. Case
# sensitive completion must be off. _ and - will be interchangeable.
HYPHEN_INSENSITIVE="true"

# Uncomment the following line to disable bi-weekly auto-update checks.
# DISABLE_AUTO_UPDATE="true"

# Uncomment the following line to change how often to auto-update (in days).
# export UPDATE_ZSH_DAYS=13

# Uncomment the following line to disable colors in ls.
# DISABLE_LS_COLORS="true"

# Uncomment the following line to disable auto-setting terminal title.
# DISABLE_AUTO_TITLE="true"

# Uncomment the following line to enable command auto-correction.
# ENABLE_CORRECTION="true"

# Uncomment the following line to display red dots whilst waiting for completion.
# COMPLETION_WAITING_DOTS="true"

# Uncomment the following line if you want to disable marking untracked files
# under VCS as dirty. This makes repository status check for large repositories
# much, much faster.
# DISABLE_UNTRACKED_FILES_DIRTY="true"

# Uncomment the following line if you want to change the command execution time
# stamp shown in the history command output.
# The optional three formats: "mm/dd/yyyy"|"dd.mm.yyyy"|"yyyy-mm-dd"
# HIST_STAMPS="mm/dd/yyyy"

# Would you like to use another custom folder than $ZSH/custom?
# ZSH_CUSTOM=/path/to/new-custom-folder

# Which plugins would you like to load? (plugins can be found in ~/.oh-my-zsh/plugins/*)
# Custom plugins may be added to ~/.oh-my-zsh/custom/plugins/
# Example format: plugins=(rails git textmate ruby lighthouse)
# Add wisely, as too many plugins slow down shell startup.
plugins=(git)

# User configuration

export PATH="/bin:/sbin:/usr/bin:/usr/sbin:/usr/heimdal/bin:/usr/heimdal/sbin:/home/ungaro_l/myscripts:/home/ungaro_l/.fzf/bin"
# export MANPATH="/usr/local/man:$MANPATH"

source $ZSH/oh-my-zsh.sh

# You may need to manually set your language environment
# export LANG=en_US.UTF-8

# Preferred editor for local and remote sessions
# if [[ -n $SSH_CONNECTION ]]; then
#   export EDITOR='vim'
# else
#   export EDITOR='mvim'
# fi

# Compilation flags
# export ARCHFLAGS="-arch x86_64"

# ssh
# export SSH_KEY_PATH="~/.ssh/dsa_id"

# Set personal aliases, overriding those provided by oh-my-zsh libs,
# plugins, and themes. Aliases can be placed here, though oh-my-zsh
# users are encouraged to define aliases within the ZSH_CUSTOM folder.
# For a full list of active aliases, run `alias`.
#
# Example aliases
# alias zshconfig="mate ~/.zshrc"
# alias ohmyzsh="mate ~/.oh-my-zsh"



###############################  ZSH DEFAULT  #################################

# The following lines were added by zsh-newuser-install
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

##PROMPT="U :: "		## un prompt-u !!
##PROMPT="%{$fg[red]%}%(?..[%?] )%{$reset_color%}%* %# "
#PROMPT="%{$fg[red]%}%(?..[%?] )%{$reset_color%}%# "


zstyle ':completion:*' menu select


#############################  EPITECH DEFAULT  ###############################

export PATH="/bin:/sbin:/usr/bin:/usr/sbin:/usr/heimdal/bin:/usr/heimdal/sbin"

export EDITOR='vim'
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
alias vit='vi'
alias vi='gvim'

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

alias today='cd $HOME/rendu/C_prog_elem/CPE_2015_n4s'
alias bouf='cd $HOME/rendu/UNIX_system/PSU_2015_42sh'

# Compilation && debug
alias xmake='clear;make re'
alias mcl='make clean'
alias xmk='xmake; mcl'
alias mkg='clear; make re CFLAGS+=-g3; make clean'
alias v='valgrind --leak-check=full'
alias skill='killall -s SIGKILL'

# Git
alias graph='git graph'
alias stat='git status'

# System
alias rms='[ $# -ge 1 ] && rm `my_select $@` || rm `my_select *`'
alias t='clear;tree'
alias l='clear;pwd;echo;ls -lAhXr --group-directories-first;echo'
alias ll='ls -plah'
alias rm='rm -v --preserve-root'
alias rd='rmdir -v'
alias md='mkdir'
alias jj='java -jar'
alias h='date +"%T"'
alias ffx='nohup firefox'
alias open='xdg-open'
alias mlk='xlock -mode flow'
alias rmake='reset;make'
alias us='setxkbmap us'
alias fr='setxkbmap fr'
alias battery='upower -i /org/freedesktop/UPower/devices/battery_BAT0| grep -E "state|time|percentage|to full|to empty"'
alias zsource='source ~/.zshrc'
## !Aliases

## Read-only emacs mode
ev()
{
  emacs "$1" --eval '(setq buffer-read-only t)'
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

export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"


#############################  FISH-LIKE COLORS  ###############################

[ -f ~/.fzf.zsh ] && source ~/.fzf.zsh
source /home/ungaro_l/myscripts/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh


## Terminator key binings
bindkey "e[1~" beginning-of-line
bindkey "e[4~" end-of-line
bindkey "e[5~" beginning-of-history
bindkey "e[6~" end-of-history
bindkey "e[3~" delete-char
bindkey "e[2~" quoted-insert
bindkey "e[5C" forward-word
bindkey "eOc" emacs-forward-word
bindkey "e[5D" backward-word
bindkey "eOd" emacs-backward-word
bindkey "ee[C" forward-word
bindkey "ee[D" backward-word
bindkey "^H" backward-delete-word
# for rxvt
bindkey "e[8~" end-of-line
bindkey "e[7~" beginning-of-line
# for non RH/Debian xterm, can't hurt for RH/DEbian xterm
bindkey "eOH" beginning-of-line
bindkey "eOF" end-of-line
# for freebsd console
bindkey "e[H" beginning-of-line
bindkey "e[F" end-of-line
# completion in the middle of a line
bindkey '^i' expand-or-complete-prefix

export TERM=xterm-256color

## ANDROID STUDIO
JAVA_HOME=/usr/lib64/jvm/java-1.7.0-openjdk


export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"

export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"

export LD_LIBRARY_PATH="/home/ungaro_l/.froot/lib/"
export C_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
export CPLUS_INCLUDE_PATH="/home/ungaro_l/.froot/include/"
