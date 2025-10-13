# PixelDB

PixelDB is a minimal, embeddable database written in C. It stores data in memory
and provides a basic API for CRUD operations.

## Current Status

- Project structure created
- Core API stubs implemented:

  - `pixeldb_create`
  - `pixeldb_free`
  - `pixeldb_store`
  - `pixeldb_load`

- Makefile included for building the library
- Basic test included (`tests/test_pixeldb.c`)

## Getting Started

Clone the repository:

```bash
git clone https://github.com/yourusername/pixeldb.git
cd pixeldb
```

Build the library:

```bash
make
```

Run the test:

```bash
gcc -Iinclude tests/test_pixeldb.c libpixeldb.a -o test_pixeldb
./test_pixeldb
```

## Next Steps

- Implement full CRUD functionality
- Add file persistence
- Optimize memory management
- Improve documentation and examples
