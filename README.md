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
>>> data = "0c79bfa8d9c63b4f471484a98651012e250ba0280335ce62dd57ef63fefd242c357339067b326fdbc40bbd9de372a1dda1448127d15ca53e23f87b232ed2ba89" #example
>>> key = hmac_sha512_component.hmac_sha512(data)
>>> print(key)
a547a4735fca6fc9a9f181908946ca32b5761587ea334a8a7d71828a6c4b0b403c633840acfc405866e90e8b269acee3fa8b1dc4f3baf31e100b17559b16fd4f
```

Or, open a C++ console and use theses commands :
