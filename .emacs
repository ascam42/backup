(setq emacs-lisp-dir "~/.emacs.d/"
      my-elmode-dir (concat emacs-lisp-dir "elmodes/"))
(setq load-path
      (append load-path (list my-elmode-dir)))

(add-to-list 'load-path "~/.emacs.d/")

(load "std.el")
(load "std_comment.el")

(if (file-exists-p "~/.myemacs")
    (load-file "~/.myemacs"))

(if (file-exists-p "~/.emacs.d/std_comment.el")
    (load-file "~/.emacs.d/std_comment.el"))
