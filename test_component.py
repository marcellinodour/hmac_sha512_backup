import hmac_sha512_component

cles = ["motif douter cristal piston vignette sanglier echelle fureur caviar", "..."]
seed = ["...", "..."]
correct = True

for i in len(cles):
    if seed[i] != hmac_sha512_component.hmac_sha512(cles[i]):
        correct = False
        
print(correct)
