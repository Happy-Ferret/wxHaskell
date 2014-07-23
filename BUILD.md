wxHaskell 0.91.0.0 build instructions
=========

##### Mac
* Install Mac Homebrew.
  * ruby -e "$(curl -fsSL https://raw.github.com/Homebrew/homebrew/go/install)"
  * brew doctor
* Uninstall incompatible packages.
  * ghc-pkg unregister unix-2.7.0.1 --force
  * ghc-pkg unregister directory-1.2.1.0
  * ghc-pkg unregister process-1.1.0.2
* Install cabal-install-1.16.0.
  * cabal install cabal-install-1.16.0
* Install the wxWidgets for Mac package (3.x).
  * brew install wxmac --devel
* If you haven't already, clone this repository.
  * git clone https://github.com/Happy-Ferret/wxHaskell
* Install all wxHaskell related packages.
  * cd wxHaskell
  * cd wxdirect
  * cabal install 
  * cd ../wxc
  * cabal install
  * cd ../wxcore
  * PATH=$PATH:/Users/$USER/Library/Haskell/bin
  * cabal install
  * cd ../wx
  * cabal install
