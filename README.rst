
Installation
============

Add the following to your ``.gitignore``::
    *.swp
    html/
    xml/
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
    cd build
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

Set ``INPUT`` on line 793 to the folder where your source lives

Set ``GENERATE_XML`` on line 1941 to ``YES``

Note, the following only work if you have graphviz installed

Set ``HAVE_DOT`` on line 2209 to ``YES``

Set ``UML_LOOK`` on line 2275 to ``YES``

Set ``TEMPLATE_RELATIONS`` on line 2296 to ``YES``

Running
=======

To run doxygen, call the binary and feed it the doxyfile::

    doxygen doxyfile

Doxygen will then dump html into the ``html/`` folder in the directory it was called from.
Open ``html/index.html`` to view the documentation from Doxygen.


Adding Breathe
==============

Make a virtual environment (you do use those, yeah?) and install the packages::

    python3 -m venv env
    source env/bin/activate
    pip3 install sphinx breathe
    mkdir docs


Build initial sphinx config::

    sphinx-quickstart

Edit sphinx config

Uncomment line 20 to actually ``import os``

Around line 34::

    extensions = [ 'breathe']

    breathe_projects = {
      "Example" : os.path.abspath(../xml)
    }

    breathe_default_project = "Example"


