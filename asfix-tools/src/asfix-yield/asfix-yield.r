\literate
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
%
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

% $Id: asfix-yield.r,v 1.1 2001/05/30 15:19:01 mdejonge Exp $

\begin{code}
module asfix-yield
imports lib Sdf-ParseTree-Syntax asfix1
strategies

  main = 
	<ReadFromFile> stdin;
	asfix-yield

  asfix-yield = 
	is-asfix1; asfix-yield1 
    	<+ is-asfix2; asfix-yield2 	
	<+ literal
    	<+ <fatal-error> ["not in AsFix format"]

  asfix-yield2 = 
	leaves(is-string; printstring <+ printchar, is-leaf, skip2)

  skip2(x) = 
	appl(id, list(x))
	+ amb([x|id])
	+ parsetree(x,id)
        + flatlex(id,x)

  asfix-yield1 = 
	leaves(printstring, is-string, skip1)

  literal = is-string; printstring

  skip1(x) = 
	term(id,id,id,id,id,x,x,x,id)
	+ appl(id, id, list(x))
	+ list(id, id, list(x))
	+ lex(x, id)

  is-asfix2 = parsetree(id, id) + appl(id,id)

  is-asfix1 = 
	term(id,id,id,id,id,id,id,id,id) + 
	?appl(prod('id(_),_,_,_,_,_,_,_,_),_,_)
\end{code}
