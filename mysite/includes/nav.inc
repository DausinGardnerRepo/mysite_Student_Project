[showif [grade]=1]
<div class="webbody">
	<div class="navigation_grade">
		<a href = "[mypath]/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=Home]
			class="gray_out"[/showif][/hideif]>
			Home
		</a>

		<a href = "[mypath]/credits/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=Credits] class="gray_out"[/showif][/hideif]>
			Credits
		</a>

		<a href = "[mypath]/contact/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=Contact] class="gray_out"[/showif][/hideif]>
			Contact
		</a>	

		<a href= "[mypath]/about_us/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=About_Us] class="gray_out"[/showif][/hideif]>
			About_Us
		</a>

		<div class="dropdown_grade">
			<button class="dropdown_button_grade">
				Content
			</button>

			<div class="dropdown_content_grade">
				<a href = "[mypath]/creator/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=Creator]class="gray_out"[/showif][/hideif]>
					Creator
				</a>

				<a href = "[mypath]/accomplishments/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=Accomplishments] class="gray_out"[/showif][/hideif]>	
					Accomplishments
				</a>

				<a href = "[mypath]/pros_cons/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=Pros_Cons] class="gray_out"[/showif][/hideif]>
					Pros_Cons
				</a>

				<a href = "[mypath]/future_prospects/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=Future_Prospects] class="gray_out"[/showif][/hideif]>
					Future_Prospects
				</a>

				<a href = "[mypath]/history/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=History] class="gray_out"[/showif][/hideif]>
					History
				</a>

				<a href = "[mypath]/wanna_try/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]"[hideif [thisurl]^thankyou.html][showif [page]=Wanna_Try?] class="gray_out"[/showif][/hideif]>
					Wanna_Try?
				</a>

				<a href = "[mypath]/author/index.html[hideif [thisurl]^thankyou.html][searchstr][/hideif]" [hideif [thisurl]^thankyou.html][showif [page]=Author] class="gray_out"[/showif][/hideif]>
					Author
				</a>
			</div>
		</div>
	</div>
</div>
[/showif]


[showif [grade]=0]
<div class = "webbody">
	[showif [debug]=1]
	<a href="[mypath]/23admin23[searchstr]" class="admin_button">ADMIN</a>
	[/showif]
	<div class = "dropdown">
		<button class ="navigation">Navigate</button>
		<div class ="navigate_content">

			<a href = "[mypath]/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=Home] class="gray_out"[/showif][/hideif]>
				Home
			</a>

			<a href = "[mypath]/creator/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=Creator]class="gray_out"[/showif][/hideif]>
				Creator
			</a>

			<a href = "[mypath]/accomplishments/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=Accomplishemnts] class="gray_out"[/showif][/hideif]>	
				Accomplishments
			</a>

			<a href = "[mypath]/pros_cons/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=Pros_Cons] class="gray_out"[/showif][/hideif]>
				Pros_Cons
			</a>

			<a href = "[mypath]/future_prospects/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=Future_Prospects] class="gray_out"[/showif][/hideif]>
				Future_Prospects
			</a>

			<a href = "[mypath]/history/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=History] class="gray_out"[/showif][/hideif]>
				History
			</a>

			<a href = "[mypath]/wanna_try/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=Wanna_Try?] class="gray_out"[/showif][/hideif]>
				Wanna_Try?
			</a>

			<a href= "[mypath]/about_us/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=About_Us] class="gray_out"[/showif][/hideif]>
				About_Us
			</a>

			<a href = "[mypath]/author/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=Author] class="gray_out"[/showif][/hideif]>
				Author
			</a>

			<a href = "[mypath]/credits/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=Credits] class="gray_out"[/showif][/hideif]>
				Credits
			</a>

			<a href = "[mypath]/contact/index.html[searchstr]" [hideif [thisurl]^thankyou.html][showif [page]=Contact] class="gray_out"[/showif][/hideif]>
				Contact
			</a>
		</div>
	</div>	
</div>
[/showif]

<hr>

<div class="webbody">
