# LaTeX

## 1. Introduction

LaTeX is a document preparation system used to create professional and well-structured documents. It is widely used for academic reports, research papers, technical documents, books, mathematical expressions and scientific publications.

Unlike normal word processors, LaTeX uses markup commands to control the structure and formatting of a document. The user writes the content along with commands, and LaTeX converts it into a formatted PDF document.

## 2. Purpose

LaTeX is used for:

- Creating academic reports and assignments.
- Writing mathematical equations and scientific expressions.
- Preparing research papers and technical documentation.
- Creating tables, figures and bibliographies.
- Maintaining consistent formatting throughout a document.
- Generating professional documents with proper numbering and references.

## 3. Important Concepts

### 3.1 Document Structure

A LaTeX document generally consists of two main parts:

- Preamble: Contains the document class and packages.
- Document body: Contains the actual content.

### 3.2 Document Classes

Document classes define the overall structure of a document.

Common document classes include:

- `article`: Used for articles and short reports.
- `report`: Used for academic reports and longer documents.
- `book`: Used for books.
- `beamer`: Used for presentations.

### 3.3 Packages

Packages provide additional features in LaTeX.

Some commonly used packages are:

- `amsmath`: For mathematical equations.
- `graphicx`: For inserting images.
- `geometry`: For adjusting page margins.
- `xcolor`: For using colors.
- `hyperref`: For hyperlinks.
- `booktabs`: For professional tables.
- `natbib`: For bibliography and citations.

### 3.4 Mathematical Expressions

LaTeX provides special syntax for mathematical expressions.

Examples:

- Inline equation: `$a^2+b^2=c^2$`
- Display equation: `\[a^2+b^2=c^2\]`
- Fractions: `\frac{a}{b}`
- Summation: `\sum_{i=1}^{n} x_i`
- Square root: `\sqrt{x}`

### 3.5 Sections and Subsections

LaTeX provides commands to organize documents hierarchically.

- `\chapter{}`
- `\section{}`
- `\subsection{}`
- `\subsubsection{}`

The chapter command is generally used with the report and book classes.

### 3.6 Tables and Figures

The `tabular` environment is used to create tables, while the `figure` environment is used to insert and position images.

### 3.7 Bibliography and References

LaTeX supports citations and bibliographies using tools such as BibTeX and packages such as natbib.

## 4. Commands / Syntax / Features

| Command | Purpose |
|---|---|
| `\documentclass{article}` | Defines document type |
| `\usepackage{amsmath}` | Includes a package |
| `\begin{document}` | Starts document body |
| `\end{document}` | Ends document body |
| `\title{}` | Sets document title |
| `\author{}` | Sets author name |
| `\maketitle` | Displays title |
| `\section{}` | Creates a section |
| `\subsection{}` | Creates a subsection |
| `\textbf{}` | Makes text bold |
| `\textit{}` | Makes text italic |
| `\includegraphics{}` | Inserts an image |
| `\label{}` | Assigns a reference label |
| `\ref{}` | Refers to a numbered element |
| `\cite{}` | Cites a reference |

### Example of a Mathematical Equation

```latex
\[
E = mc^2
\]
```

### Example of a Table

```latex
\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Amit & 90 \\
Rahul & 85 \\
\hline
\end{tabular}
```

## 5. Practical Implementation

The following program creates a simple academic report using LaTeX.

```latex
\documentclass[12pt,a4paper]{report}

\usepackage{amsmath}
\usepackage{graphicx}
\usepackage{geometry}

\geometry{margin=1in}

\title{Introduction to LaTeX}
\author{Your Name}
\date{\today}

\begin{document}

\maketitle

\begin{abstract}
This document introduces the LaTeX
document preparation system.
\end{abstract}

\chapter{Introduction}

LaTeX is used to create professional
academic and technical documents.

\section{Mathematical Equations}

An example of an equation is:

\[
a^2+b^2=c^2
\]

\section{Conclusion}

LaTeX provides powerful tools for
creating structured documents.

\end{document}
```

**Steps to execute:**

1. Open TeXstudio.
2. Create a new `.tex` file.
3. Write or paste the above code.
4. Save the file.
5. Select PDFLaTeX as the compiler.
6. Click Build and View.
7. Observe the generated PDF.

## 6. Conclusion

Through learning LaTeX, I understood how to create professional documents using markup commands. I learned document structure, classes, packages, mathematical equations, tables, figures, references and formatting. I also gained practical experience in compiling LaTeX source code into PDF documents using TeXstudio.
