# Using travis with a Qt and C++ 17

[![travis build status](https://travis-ci.org/aoloe/cpp-travis-qt-gcc-17.svg?branch=master)](https://travis-ci.org/aoloe/cpp-travis-qt-gcc-17)

A sample repository demoing how to setup a Travis project that:

- uses a gcc with support for C++ 17
- uses an up to date version of Qt (Qt 5.11 at the time of writing)

## Using current versions of Qt

For a simple Qt project you need two Ubuntu pakcages:

- qtbase5-dev
- libqt5widgets5

If you want a newer version of Qt, you can use one of [beineri](https://launchpad.net/~beineri)'s PPAs. For a minimal project, you'll need to install two packages from the PPA:

- qt511base
- qt511tools

and you will have to re-configure the Qt5 environment by running the `qt511-env.sh` script.

On top of it, you will need `mesa-common-dev` a dependency that is somehow not pulled in by the Qt511 packages.

Of course, you will have to replace `511` with the versrion you choosed to use.

## Using ninja

If you want to use `ninja` instead of make, your `script` section will become:

```yaml
script:
  - cmake -GNinja .
  - ninja
```

## Notes

See also:

- <https://github.com/richelbilderbeek/travis_qmake_gcc_cpp14_qt5>
- <https://github.com/richelbilderbeek/travis_gcc_cpp17>
