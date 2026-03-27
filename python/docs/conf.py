# Configuration file for the Sphinx documentation builder.
# https://www.sphinx-doc.org/en/master/usage/configuration.html

import os
import sys

# -- Path setup --------------------------------------------------------------
# Add rtiumaapy to sys.path so autodoc can import it.
sys.path.insert(0, os.path.abspath(".."))

# -- Project information -----------------------------------------------------
project = "RTI UMAA Python SDK"
copyright = "2025-2026, Real-Time Innovations, Inc."
author = "Real-Time Innovations"
release = "0.1.0"

# -- General configuration ---------------------------------------------------
extensions = [
    "sphinx.ext.autodoc",
    "sphinx.ext.autosummary",
    "sphinx.ext.napoleon",       # Google/NumPy-style docstrings
    "sphinx.ext.viewcode",       # [source] links in API docs
    "myst_parser",               # Markdown support (.md files)
]

# MyST (Markdown) settings
myst_enable_extensions = [
    "colon_fence",   # ::: directive syntax
    "deflist",       # definition lists
]
source_suffix = {
    ".rst": "restructuredtext",
    ".md": "markdown",
}

templates_path = ["_templates"]
exclude_patterns = ["_build", "Thumbs.db", ".DS_Store"]

# -- Options for HTML output -------------------------------------------------
html_theme = "sphinx_rtd_theme"
html_theme_options = {
    "navigation_depth": 3,
    "collapse_navigation": False,
    "sticky_navigation": True,
}
html_static_path = ["_static"]
html_logo = None
html_title = "RTI UMAA Python SDK v0.1.0"

# -- autodoc configuration ---------------------------------------------------
autodoc_member_order = "bysource"
autodoc_default_options = {
    "members": True,
    "undoc-members": False,
    "show-inheritance": True,
}
# Mock DDS imports that won't be available at doc-build time
autodoc_mock_imports = [
    "rti",
    "rti.connextdds",
    "rti.asyncio",
]

# -- Napoleon settings --------------------------------------------------------
napoleon_google_docstring = True
napoleon_numpy_docstring = True
napoleon_include_init_with_doc = True
