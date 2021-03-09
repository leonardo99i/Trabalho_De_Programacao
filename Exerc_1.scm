;Atleta 1 Arremesso
(define arremesso_1 10)
(define arremesso_2 10)
(define arremesso_3 66)

;Atleta 2 Arremesso 
(define arremesso_4 7)
(define arremesso_5 5)
(define arremesso_6 63)

;Atleta 1 Ginastica
(define nota_1 5)
(define nota_2 10)
(define nota_3 10)
(define nota_4 10)
(define nota_5 10)

;Atleta 2 Ginastica
(define nota_6 10)
(define nota_7 20)
(define nota_8 10)
(define nota_9 6)
(define nota_10 10)


(cond ;Atleta 1 Arremesso
  [(and (> arremesso_1 arremesso_2) (> arremesso_1 arremesso_3))
  (define Arremesso_maior_1 arremesso_1)]

  [(and (> arremesso_2 arremesso_1) (> arremesso_2 arremesso_3))
  (define Arremesso_maior_1 arremesso_2)]

  [(and (> arremesso_3 arremesso_1) (> arremesso_3 arremesso_2))
  (define Arremesso_maior_1 arremesso_3)]
  
)
(print "Arremesso maior Atleta 1:")
(display Arremesso_maior_1)
(newline)

(cond ;Atleta 2 Arremesso
  [(and (> arremesso_4 arremesso_5) (> arremesso_4 arremesso_6))
  (define Arremesso_maior_2 arremesso_4)]

  [(and (> arremesso_5 arremesso_4) (> arremesso_5 arremesso_6))
  (define Arremesso_maior_2 arremesso_5)]

  [(and (> arremesso_6 arremesso_4) (> arremesso_6 arremesso_5))
  (define Arremesso_maior_2 arremesso_6)]
  
)
(print "Arremesso maior Atleta 2:" )
(display Arremesso_maior_2)

(newline)
(if(> Arremesso_maior_1 Arremesso_maior_2)(print "Atleta 1 de Arremesso de peso ganhou!!!!")
  (print "Atleta 2 de Arremesso de peso ganhou!!!!"))

(newline)

(cond ;Atleta 1 Ginastica
  [(and (< nota_1 nota_2) (< nota_1 nota_3)(< nota_1 nota_4)(< nota_1 nota_5))
  (define Nota_Menor_1 nota_1)]

  [(and (< nota_2 nota_1) (< nota_2 nota_3)(< nota_2 nota_4)(< nota_2 nota_5))
  (define Nota_Menor_1 nota_2)]

  [(and (< nota_3 nota_1) (< nota_3 nota_2)(< nota_3 nota_4)(< nota_3 nota_5))
  (define Nota_Menor_1 nota_3)]

  [(and (< nota_4 nota_1) (< nota_4 nota_2)(< nota_4 nota_3)(< nota_4 nota_5))
  (define Nota_Menor_1 nota_4)]

  [(and (< nota_5 nota_1) (< nota_5 nota_2)(< nota_5 nota_3)(< nota_5 nota_4))
  (define Nota_Menor_1 nota_5)]
)
(print "Menor nota Atleta 1 de Ginastica Artistica:")
(display Nota_Menor_1)
(newline)

(cond ;Atleta 2 Ginastica
  [(and (< nota_6 nota_7) (< nota_6 nota_8)(< nota_6 nota_9)(< nota_6 nota_10))
  (define Nota_Menor_2 nota_6)]

  [(and (< nota_7 nota_6) (< nota_7 nota_8)(< nota_7 nota_9)(< nota_7 nota_10))
  (define Nota_Menor_2 nota_7)]

  [(and (< nota_8 nota_6) (< nota_8 nota_7)(< nota_8 nota_9)(< nota_8 nota_10))
  (define Nota_Menor_2 nota_8)]

  [(and (< nota_9 nota_6) (< nota_9 nota_7)(< nota_9 nota_8)(< nota_9 nota_10))
  (define Nota_Menor_2 nota_9)]

  [(and (< nota_10 nota_6) (< nota_10 nota_7)(< nota_10 nota_8)(< nota_10 nota_9))
  (define Nota_Menor_2 nota_10)]
)
(print "Menor nota Atleta 2 de Ginastica Artistica:")
(display Nota_Menor_2)
(newline)

(define Nota_Final_1 (+ nota_1  nota_2  nota_3  nota_4  nota_5 (- Nota_Menor_1)))
(print "Nota final do Atleta 1 de Ginastica Artistica: ")
(display Nota_Final_1)
(newline)

(define Nota_Final_2 (+ nota_6  nota_7  nota_8  nota_9  nota_10 (- Nota_Menor_2)))
(print "Nota final do Atleta 2 de Ginastica Artistica: ")
(display Nota_Final_2)
(newline)

(if(> Nota_Final_1 Nota_Final_2)(print "Atleta 1 de Ginastica Artistica ganhou!!!!")
  (print "Atleta 2 de Ginastica Artistica ganhou!!!!"))
