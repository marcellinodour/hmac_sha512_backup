# hmac_sha512

The dev team is :
- [Marcellino DOUR](https://github.com/marcellinodour)
- [Raphaël PARDINI](https://github.com/Raphda)

The teacher is [José Luu](https://github.com/jluuM2).

## Documentation 

You can found the specification of our component **sha512** here : [Specification_SHA512](https://github.com/marcellinodour/hmac_sha512/blob/main/Specifications_SHA512.pdf)

## Installation

1. Initialize dependencies :
```
cd hmac_sha512
git submodule init
git submodule update
```
2. Compile :
```
cd hmac_sha512_component
make
```

## Usage

Open a python3 console and use theses commands :
```
>>> import hmac_sha512_component
>>> data = "annuel claquer score gymnaste anonyme immobile unique scélérat péplum distance double conduire flasque nombreux langage" #example
>>> key = hmac_sha512_component.hmac_sha512(data)
>>> print(key)
1b52c6509e63c0b6751a19b922a91497f6d1b458472cf86980b74cec92ca0dcfe24ddbf8dcba81c14972025552b8039f856e54d6e8fe5143be5d30a98d1207df
>>>

