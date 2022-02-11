// My current layout, no connection to dvorak-mirrorboard anymore

default  partial alphanumeric_keys modifier_keys
xkb_symbols   "sh" {


	name[Group1] = "SH Custom layout";
	name[Group2] = "Test mirrorboard layout";

	// Using L-Alt as modifier instead of Caps lock.
	key <LALT> { type[Group1] = "ONE_LEVEL", symbols[Group1] = [ ISO_Level3_Shift ] };

	//// TAB AND FRIENDS  
	// Mod+Space is return
	// TODO
	key <SPCE> { [ space, space, Return ] };

	// Bsp, Enter, **Compose Key **
	key <TLDE> {	[     BackSpace,	NoSymbol,	Return,	 Multi_key]	};

	// Tab, LTab, /, \
	key  <TAB> {	[ Tab,	ISO_Left_Tab, slash, backslash]	};

	// Switch groups by RCTL
	key  <RCTL> {	[ISO_Next_Group]	};

	// Caps is Ctrl, ? <Escape> ?
	// Mapping Escape to Caps+Shift doesn't work for some reason
	key <CAPS> { type[Group1] = "FOUR_LEVEL", symbols[Group1] = [ Control_L, Control_L, Escape, NoSymbol] };
    modifier_map Control { <CAPS> };

	key <LCTL> { type[Group1] = "ONE_LEVEL", symbols[Group1] = [Hyper_L] };
	modifier_map Mod3 { Hyper_L };

	////

	//// FIRST ROW 
	// '"`?
	key <AD01> { [  apostrophe,	quotedbl, quoteleft, L] };
	// ,<[?
	key <AD02> { [	comma,	bracketleft,   parenleft, R] };
	// .>]?
	key <AD03> { [      period,	bracketright, parenright, C] };
	////

	key <AD04> { [	    p,	P, asciitilde, G		]	};
	key <AD05> { 
		[y,	Y, f, F], 
		[a, a, a, a] 
	};

	// Umlauts
    key <AC01> { [	    a,	A, adiaeresis,	s]	};
    key <AC02> { [	    o,	O, odiaeresis,	n]	};
    key <AC03> { [	    e,	E, ediaeresis,	t]	};
    key <AC04> { [	    u,	U, udiaeresis,	u]	};
	key <AC05> { [	    i,	I, d, D		]	};

	key <AB01> { [   colon,	semicolon,z, Z] };
	key <AB02> { [	    q,	Q, v, V		]	};
	key <AB03> { [	    j,	J, w, W		]	};
	key <AB04> { [	    k,	K, m, M		]	};
	key <AB05> { [	    x,	X, b, B		]	};

	key <AE01> {	[	  1,	exclam,		0,	parenleft	]	};

	// 2@<{
	key <AE02> {	[	  2,	at,		less,	braceleft	]	};
	// 3#>}
	key <AE03> {	[	  3,	numbersign,	greater,	braceright	]	};
	key <AE04> {	[	  4,	dollar,		7,	ampersand	]	};
	key <AE05> {	[	  5,	percent,	6,	asciicircum	]	};

	//// Backspace, arrow keys, ...
	// TODO 
	key <AD07> { [	    g,	G, Prior, NoSymbol		]	};
	key <AD08> { [	    c,	C,	Up,	 Up	]	};
	key <AD09> { [	    r,	R,	Next,	Next		]	};
	key <AD10> { [	    l,	L, BackSpace, Delete		]	};
	key <AC07> { [	    h,	H,	Left,	Left		]	};
	key <AC08> { [	    t,	T,	Down,	Down   ]	};
	key <AC09> { [	    n,	N,	Right,	Right		]	};

	key <AD06> { [	    f,	F  		]	};
	// Slash and Backslash
	key <AD11> { [	slash,	question, backslash, NoSymbol	]	};
	key <AD12> { [	equal,	plus		]	};


	// TODO
	key <AC06> { [	    d,	D, NoSymbol, NoSymbol		]	};
    key <AC10> { [	    s,	S,	ssharp,	ssharp		]	};
	key <AC11> { [	minus,	underscore	]	};

	key <AB06> { [	    b,	B		]	};
	key <AB07> { [	    m,	M		]	};
	key <AB08> { [	    w,	W		]	};
	key <AB09> { [	    v,	V		]	};
	key <AB10> { [	    z,	Z		]	};

	// +|\? - the key that by default has only backslash+bar
	
	key <BKSL> { [  plus,  bar, backslash, NoSymbol             ]       };


	key <AE06> {	[	  6,	asciicircum	]	};
	key <AE07> {	[	  7,	ampersand	]	};
	key <AE08> {	[	  8,	asterisk	]	};
	key <AE09> {	[	  9,	parenleft	]	};
	key <AE10> {	[	  0,	parenright	]	};
	key <AE11> {	[     bracketleft,	braceleft	]	};
	key <AE12> {	[     bracketright,	braceright		]	};

};
