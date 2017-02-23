
Installation
============

Add the following to your ``.gitignore``::
    *.swp
    html/
    latex/
    doxygen/*


Git directions / compile from source::

    git submodule add https://github.com/doxygen/doxygen.git


Ignore changes in the submodule by added ``ignore dirty`` to the bottom of ``.gitmodules``;
``.gitmodules`` should look like::

    [submodule "doxygen"]
    path = doxygen
    url = https://github.com/doxygen/doxygen.git
    ignore = dirty


Continue installation::

    cd doxygen
    mkdir build
    cmake -G "Unix Makefiles" ..
    make
    
    # to do a system install...
    sudo make install



Configuration
=============

Note the doxygen binary is at ``doxygen/build/bin/doxygen``, relative to project root
Assume all ``doxygen`` directives are to that path (for brevity)

Build template configuration file::

    doxygen -g doxyfile

Tell Doxygen to document all aspects of classes; find ``EXTRACT_ALL`` and set to ``YES``--around
line 438.

Also set ``EXTRACT_PRIVATE`` to ``YES``; it's near ``EXTRACT ALL``, around line 444.


Running
=======

To run doxygen, call the binary and feed it the doxyfile::

    doxygen doxyfile

Doxygen will then dump html into the ``html/`` folder in the directory it was called from.
Open ``html/index.html`` to view the documentation from Doxygen.
