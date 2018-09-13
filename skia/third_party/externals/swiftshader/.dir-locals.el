;;; Directory Local Variables
;;; See Info node `(emacs) Directory Variables' for more information.

((c++-mode
  (tab-width . 4)
  (indent-tabs-mode . t)
  (c-basic-offset . 4)
  (show-trailing-whitespace . t)
  (indicate-empty-lines . t)
  (c-offsets-alist
   (inexpr-class . +)
   (inexpr-statement . +)
   (lambda-intro-cont . +)
   (inlambda . c-lineup-inexpr-block)
   (template-args-cont c-lineup-template-args +)
   (incomposition . +)
   (inmodule . +)
   (innamespace . +)
   (inextern-lang . 0)
   (composition-close . 0)
   (module-close . 0)
   (namespace-close . 0)
   (extern-lang-close . 0)
   (composition-open . 0)
   (module-open . 0)
   (namespace-open . 0)
   (extern-lang-open . 0)
   (objc-method-call-cont c-lineup-ObjC-method-call-colons c-lineup-ObjC-method-call +)
   (objc-method-args-cont . c-lineup-ObjC-method-args)
   (objc-method-intro .
                      [0])
   (friend . 0)
   (cpp-define-intro c-lineup-cpp-define +)
   (cpp-macro-cont . +)
   (cpp-macro .
              [0])
   (inclass . +)
   (stream-op . c-lineup-streamop)
   (arglist-cont-nonempty c-lineup-gcc-asm-reg c-lineup-arglist)
   (arglist-cont c-lineup-gcc-asm-reg 0)
   (comment-intro . 0)
   (catch-clause . 0)
   (else-clause . 0)
   (do-while-closure . 0)
   (access-label . -)
   (case-label . +)
   (substatement . +)
   (statement-case-intro . +)
   (statement . 0)
   (brace-entry-open . 0)
   (brace-list-entry . 0)
   (brace-list-intro . +)
   (brace-list-close . 0)
   (block-close . 0)
   (block-open . 0)
   (inher-cont . c-lineup-multi-inher)
   (inher-intro . ++)
   (member-init-cont . c-lineup-multi-inher)
   (member-init-intro . ++)
   (annotation-var-cont . +)
   (annotation-top-cont . 0)
   (topmost-intro . 0)
   (knr-argdecl . 0)
   (func-decl-cont . ++)
   (inline-close . 0)
   (class-close . 0)
   (class-open . 0)
   (defun-block-intro . +)
   (defun-close . 0)
   (defun-open . 0)
   (c . c-lineup-C-comments)
   (string . c-lineup-dont-change)
   (topmost-intro-cont . c-lineup-topmost-intro-cont)
   (brace-list-open . 0)
   (inline-open . 0)
   (arglist-close . c-lineup-arglist)
   (arglist-intro google-c-lineup-expression-plus-4)
   (statement-cont nil nil ++)
   (statement-case-open . +)
   (label . /)
   (substatement-label . 2)
   (substatement-open . 0)
   (knr-argdecl-intro . +)
   (statement-block-intro . +)))
(c-mode
  (tab-width . 4)
  (indent-tabs-mode . t)
  (c-basic-offset . 4)
  (show-trailing-whitespace . t)
  (indicate-empty-lines . t)
  (c-offsets-alist
   (inexpr-class . +)
   (inexpr-statement . +)
   (lambda-intro-cont . +)
   (inlambda . c-lineup-inexpr-block)
   (template-args-cont c-lineup-template-args +)
   (incomposition . +)
   (inmodule . +)
   (innamespace . +)
   (inextern-lang . 0)
   (composition-close . 0)
   (module-close . 0)
   (namespace-close . 0)
   (extern-lang-close . 0)
   (composition-open . 0)
   (module-open . 0)
   (namespace-open . 0)
   (extern-lang-open . 0)
   (objc-method-call-cont c-lineup-ObjC-method-call-colons c-lineup-ObjC-method-call +)
   (objc-method-args-cont . c-lineup-ObjC-method-args)
   (objc-method-intro .
                      [0])
   (friend . 0)
   (cpp-define-intro c-lineup-cpp-define +)
   (cpp-macro-cont . +)
   (cpp-macro .
              [0])
   (inclass . +)
   (stream-op . c-lineup-streamop)
   (arglist-cont-nonempty c-lineup-gcc-asm-reg c-lineup-arglist)
   (arglist-cont c-lineup-gcc-asm-reg 0)
   (comment-intro . 0)
   (catch-clause . 0)
   (else-clause . 0)
   (do-while-closure . 0)
   (access-label . -)
   (case-label . +)
   (substatement . +)
   (statement-case-intro . +)
   (statement . 0)
   (brace-entry-open . 0)
   (brace-list-entry . 0)
   (brace-list-intro . +)
   (brace-list-close . 0)
   (block-close . 0)
   (block-open . 0)
   (inher-cont . c-lineup-multi-inher)
   (inher-intro . ++)
   (member-init-cont . c-lineup-multi-inher)
   (member-init-intro . ++)
   (annotation-var-cont . +)
   (annotation-top-cont . 0)
   (topmost-intro . 0)
   (knr-argdecl . 0)
   (func-decl-cont . ++)
   (inline-close . 0)
   (class-close . 0)
   (class-open . 0)
   (defun-block-intro . +)
   (defun-close . 0)
   (defun-open . 0)
   (c . c-lineup-C-comments)
   (string . c-lineup-dont-change)
   (topmost-intro-cont . c-lineup-topmost-intro-cont)
   (brace-list-open . 0)
   (inline-open . 0)
   (arglist-close . c-lineup-arglist)
   (arglist-intro google-c-lineup-expression-plus-4)
   (statement-cont nil nil ++)
   (statement-case-open . +)
   (label . /)
   (substatement-label . 2)
   (substatement-open . 0)
   (knr-argdecl-intro . +)
   (statement-block-intro . +))))
