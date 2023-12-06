<!DOCTYPE html>
<div>
	[search db=[datapathvar]subnav.db&eqSORTORDERdataRQ=4]
		[founditems]
			<button>[subnav]</button>[break]
		[/founditems]
		[founditems]
			[search db=[datapathvar]nav.db&eqSKUdataRQ=[R_NAV]&sortorderSort=1&sortorderType=num]
				[founditems]
					<a href=[mypath][NAVLINK]>[TITLE]</a>
				[/founditems]
			[/search]
		[/founditems]
	[/search]
</div>