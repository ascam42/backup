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

;; (require 'color-theme)
;; (color-theme-initialize)

;; (load "yoones-theme")
;; (load-file "~/.emacs.d/yoones-theme.el")
;; (color-theme-yoones)
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(delete-selection-mode nil)
 '(inhibit-startup-screen t))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(highlight ((t (:weight bold))))
 '(my-loong-line-face ((((class color)) (:background "yellow"))) t)
 '(my-tab-face ((((class color)) (:foreground "black" :weight bold :underline t))) t)
 '(my-trailing-space-face ((((class color)) (:background "gray10"))) t))
