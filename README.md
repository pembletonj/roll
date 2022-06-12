# roll
A simple dice roller.

## Usage

```
roll <dice...>
```

Each argument represents the number of sides for one die to roll. It only accepts positive integers.

### Examples

Roll one 6-sided die:

```sh
roll 6
```

Roll one 20-sided die and one 6-sided die:

```sh
roll 20 6
```

Roll three 100-sided dice:
```sh
roll 100 100 100
```

## Building

```sh
mkdir build
cd build
cmake ../src
cmake --build .
```
