// My current layout, no connection to dvorak-mirrorboard anymore

default  partial alphanumeric_keys modifier_keys
xkb_symbols   "sh" {

	name[Group1] = "SH Custom layout";
	name[Group2] = "Test mirrorboard layout";

	// Using L-Alt as modifier instead of Caps lock.
	key <LALT> { type[Group1] = "ONE_LEVEL", symbols[Group1] = [ ISO_Level3_Shift ] };

	//// TAB AND FRIENDS  
	// Mod+Space is return
	key <SPCE> { [ space, space, Return ] };

	// TODO Tilde is Backspace by itself, 
	// Mod+Tilde is Return,Shift+Tilde= quoteleft (tick), shift+mod = tilde
	key <TLDE> {	[     BackSpace,	quoteleft,	Return,	asciitilde]	};

	// backslash, ???
	// key  <TAB> {	[ Tab,	ISO_Left_Tab, backslash, dead_diaeresis]	};
	key  <TAB> {	[ISO_Next_Group]	};


	// Caps is Ctrl, ? <Escape> ?
	// Mapping Escape to Caps+Shift doesn't work for some reason
	key <CAPS> { type[Group1] = "FOUR_LEVEL", symbols[Group1] = [ Control_L, Escape, Escape, Escape] };
    modifier_map Control { <CAPS> };

	key <LCTL> { type[Group1] = "ONE_LEVEL", symbols[Group1] = [Hyper_L] };
	modifier_map Mod3 { Hyper_L };

	////

	//// FIRST ROW 
	// '"`?
	key <AD01> { [  apostrophe,	quotedbl, quoteleft, L] };
	// ,<[?
	key <AD02> { [	comma,	less,   bracketleft, R] };
	// .>]?
	key <AD03> { [      period,	greater, bracketright, C] };
	////

	key <AD04> { [	    p,	P, asciitilde, G		]	};
	key <AD05> { [	    y,	Y, f, F		], [a, a, a, a]	};

	// Umlauts
    key <AC01> { [	    a,	A, adiaeresis,	s]	};
    key <AC02> { [	    o,	O, odiaeresis,	n]	};
    key <AC03> { [	    e,	E, ediaeresis,	t]	};
    key <AC04> { [	    u,	U, udiaeresis,	u]	};
	// key <AC01> { [	    a,	A, s, S 		]	};
	// key <AC02> { [	    o,	O, n, N		]	};
	// key <AC03> { [	    e,	E, t, T		]	};
	// key <AC04> { [	    u,	U, h, H		]	};
	key <AC05> { [	    i,	I, d, D		]	};

	key <AB01> { [   semicolon,	colon,z, Z] };
	key <AB02> { [	    q,	Q, v, V		]	};
	key <AB03> { [	    j,	J, w, W		]	};
	key <AB04> { [	    k,	K, m, M		]	};
	key <AB05> { [	    x,	X, b, B		]	};

	key <AE01> {	[	  1,	exclam,		0,	parenleft	]	};
	key <AE02> {	[	  2,	at,		9,	parenright	]	};
	key <AE03> {	[	  3,	numbersign,	8,	asterisk	]	};
	key <AE04> {	[	  4,	dollar,		7,	ampersand	]	};
	key <AE05> {	[	  5,	percent,	6,	asciicircum	]	};

	//// Backspace, arrow keys, ...
	// TODO 
	key <AD07> { [	    g,	G, Prior, Prior		]	};
	key <AD08> { [	    c,	C,	Up,	 Up	]	};
	key <AD09> { [	    r,	R,	BackSpace,	BackSpace		]	};
	key <AD10> { [	    l,	L, Next, Next		]	};
	key <AC07> { [	    h,	H,	Left,	Left		]	};
	key <AC08> { [	    t,	T,	Down,	Down   ]	};
	key <AC09> { [	    n,	N,	Right,	Right		]	};

	key <AD06> { [	    f,	F  		]	};
	key <AD11> { [	slash,	question	]	};
	key <AD12> { [	equal,	plus		]	};


	// dD <delete> ?
	key <AC06> { [	    d,	D, KP_Delete, KP_Delete		]	};
	key <AC10> { [	    s,	S		]	};
	key <AC11> { [	minus,	underscore	]	};

	key <AB06> { [	    b,	B		]	};
	key <AB07> { [	    m,	M		]	};
	key <AB08> { [	    w,	W		]	};
	key <AB09> { [	    v,	V		]	};
	key <AB10> { [	    z,	Z		]	};

	// +\|? - the key that by default has only backslash+bar
	key <BKSL> { [  plus,  backslash, bar, bar             ]       };


	key <AE06> {	[	  6,	asciicircum	]	};
	key <AE07> {	[	  7,	ampersand	]	};
	key <AE08> {	[	  8,	asterisk	]	};
	key <AE09> {	[	  9,	parenleft	]	};
	key <AE10> {	[	  0,	parenright	]	};
	key <AE11> {	[     bracketleft,	braceleft	]	};
	key <AE12> {	[     bracketright,	braceright		]	};

};

