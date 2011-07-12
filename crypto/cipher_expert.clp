;;;======================================================
;;;   cipher_expert.clp -- contains the Expert System
;;;    rules for distinguishing among a small set of
;;;    simple ciphers.
;;;
;;;     CLIPS Version 6.0 Example, modified for Jess
;;;
;;;     To execute, merely load, reset and run.
;;;======================================================


;;;;(import jess.examples.pumps.*)
(import hcrypto.analyzer.*)

(defclass indexofcoincidence IndexOfCoincidence)
(defclass jesscipher JessCipher)

;;;*************
;;;* TEMPLATES *
;;;*************

;;; The status facts hold the state  
;;; information of the search tree.

(defglobal ?*index* = (fetch ic))
(defglobal ?*glcipher* = (fetch cipher))
(defglobal ?*found* = 0)

(deftemplate MAIN::status 
   (slot search-depth)
   (slot parent)
   (slot ic (type LONG))
   (slot shift)
   (slot type)
   (slot last-move)	
)
   
;;;*****************
;;;* INITIAL STATE *
;;;*****************

(deffacts MAIN::initial-positions
  (status (search-depth 1)
	   (parent no-parent)
	   (ic (call ?*index* getIOC)) 
           (shift (call ?*glcipher* getShift))
	   (type unknown)
           (last-move no-move))
)

;;;***********************
;;;* GENERATE PATH RULES *
;;;***********************

(defrule MAIN::move-to-transposition
  ?node <- (status (search-depth ?num)
                   (shift ?shift)
                   (ic ?ic)
                   (type unknown))
  (test (= ?num 1))             ;;1st level of tree
  (test (= ?shift 0))
  (test (< .058 ?ic))
  =>
  (duplicate ?node (search-depth (+ 1 ?num))
                   (parent ?node)
                   (type known)
                   (last-move Transposition))
  (printout t crlf ?ic crlf)
)

(defrule MAIN::move-substitution
  ?node <- (status (search-depth ?num) 
                   (shift ?shift)
		   (ic ?ic)
		   (type unknown))
  (test (= ?num 1))		;;1st level of tree
  =>
  (duplicate ?node (search-depth (+ 1 ?num))
                   (parent ?node)
                   (type unknown)
                   (last-move Substitution))
  (printout t crlf "shift: " ?shift " ic: " ?ic " found: " ?*found* crlf)
)

(defrule MAIN::move-to-simple
  ?node <- (status (search-depth ?num) 
                   (ic ?ic)
 		   (type unknown))
  (test (= ?num 2))		;;2nd level of tree
  (test (< .058 ?ic))
  =>
  (duplicate ?node (search-depth (+ 1 ?num)) 
                   (parent ?node)
                   (type unknown)
                   (last-move Simple-Substitution))
)

(defrule MAIN::move-to-caesar
  ?node <- (status (search-depth ?num) 
                   (shift ?shift)
		   (type unknown))
  (test (= ?num 3))		;;3rd level of tree
  (test (<> ?shift -1))
  =>
  (duplicate ?node (search-depth (+ 1 ?num)) 
                   (parent ?node)
                   (type known)
                   (last-move Caesar))
)

(defrule MAIN::move-to-affine
  ?node <- (status (search-depth ?num)
                   (shift ?shift)
		   (type unknown)
		   (ic ?ic))
  (test (= ?num 3)) 		;;3rd level of tree
  (test (= ?shift -1))
  (test (> ?ic .058))
  =>
  (duplicate ?node (search-depth (+ 1 ?num)) 
                   (parent ?node)
                   (type known)
                   (last-move Affine))
)

(defrule MAIN::move-to-multi
  ?node <- (status (search-depth ?num)
                   (ic ?ic)
		   (type unknown))
  (test (= ?num 2))		;;2nd level of tree
  (test (<= ?ic .058))
  =>
  (duplicate ?node (search-depth (+ 1 ?num)) 
                   (parent ?node)
                   (type unknown)
                   (last-move Multi-Substitution))
)

(defrule MAIN::move-to-playfair
  ?node <- (status (search-depth ?num)
                   (ic ?ic)
		   (type unknown))
  (test (= ?num 3))		;;3rd level of tree
  (test (> ?ic .0455))
  (test (< ?ic .058)) 
 =>
  (duplicate ?node (search-depth (+ 1 ?num)) 
                   (parent ?node)
                   (type known)
                   (last-move Playfair))
)

(defrule MAIN::move-to-vigenere
  ?node <- (status (search-depth ?num)
                   (ic ?ic)
		   (type unknown))
  (test (= ?num 3))		;;3rd level of tree
  (test (<= ?ic .0455))
  =>
  (duplicate ?node (search-depth (+ 1 ?num)) 
                   (parent ?node)
                   (type known)
                   (last-move Vigenere))
)


;;;*********************************
;;;* FIND AND PRINT SOLUTION RULES *
;;;*********************************

(defmodule SOLUTION)
       
(deftemplate SOLUTION::moves 
   (slot id)
   (multislot moves-list)
)


(defrule SOLUTION::recognize-cipher 
  (declare (auto-focus TRUE))
  ?node <- (status (parent ?parent)
                   (type known) 
                   (last-move ?cipher))
  =>
  (retract ?node)
  (assert (moves (id ?parent) (moves-list ?cipher)))
  (bind ?*found* 1)
)


(defrule SOLUTION::further-solution 
  ?node <- (status (parent ?parent)
                   (last-move ?move))
  ?mv <- (moves (id ?node) (moves-list $?rest))
  =>
  (modify ?mv (id ?parent) (moves-list ?move ?rest))
)


(defrule SOLUTION::print-solution 
  ?mv <- (moves (id no-parent) (moves-list no-move $?m))
  =>
  (retract ?mv)
  (printout t crlf "Solution found: " crlf crlf)
  (bind ?*found* 1)
  (bind ?length (length$ ?m))
  (bind ?i 1)

  ;;go through each node and print cipher decision
  (while (<= ?i ?length)
     (bind ?thing (nth$ ?i ?m))
	(if (eq ?i ?length)	;;if it is the last node, print and set cipher
	    then (printout t "Cipher is " ?thing " cipher" crlf crlf)
		 (bind ?cipher (fetch cipher))
  		 (call ?cipher setCipher ?thing)
	    else (printout t "Move to " ?thing " ciphers" crlf))
     (bind ?i (+ 1 ?i)))
   (halt) 
)

(reset)
(run)


