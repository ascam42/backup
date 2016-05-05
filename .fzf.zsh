# Setup fzf
# ---------
if [[ ! "$PATH" == */home/ungaro_l/.fzf/bin* ]]; then
  export PATH="$PATH:/home/ungaro_l/.fzf/bin"
fi

# Man path
# --------
if [[ ! "$MANPATH" == */home/ungaro_l/.fzf/man* && -d "/home/ungaro_l/.fzf/man" ]]; then
  export MANPATH="$MANPATH:/home/ungaro_l/.fzf/man"
fi

# Auto-completion
# ---------------
[[ $- == *i* ]] && source "/home/ungaro_l/.fzf/shell/completion.zsh" 2> /dev/null

# Key bindings
# ------------
source "/home/ungaro_l/.fzf/shell/key-bindings.zsh"

