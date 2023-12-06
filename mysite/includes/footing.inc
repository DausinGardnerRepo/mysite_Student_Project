<div class = "footer">
			<p class = "footer_p">
				<br>
				<br>
				Please see the Credits section located under the "Navigate" button at the top of this page for a full list of sources.
				<br>
				<br>
			</p>
		</div>

		[showif [debug]=1]
		<br>
		<br>
		<br>
		<table class="debug_table" >
				<tr>
					<td>
					<h2>Mime Headers:</h2>
					[listmimeheaders name=HOST&exact=f]
					[index].) [name] = [value]<hr>
					[/listmimeheaders]

					[listmimeheaders name=ACCEPT&exact=f]
					[index].) [name] = [value]<hr><br>
					[/listmimeheaders]

					[listmimeheaders name=HTTP_UPGRADE_INSECURE_REQUESTS]
					[index].) [name] = [value]
					[/listmimeheaders]

					<hr>

					[listmimeheaders name=HTTP_USER_AGENT]
					[index].) [name] = [value]
					[/listmimeheaders]

					</td>

					<td>
						<h2>List Variables:</h2>
						[listvariables]
						[index].) [name] = [value]<hr><br>
						[/listvariables]				
					</td>
					<td>
						<h2>Form Variables:</h2>
						[formvariables]
						[index].) [name] = [value]<hr><br>
						[/formvariables]
					</td>
					<td>
						<h2>List Cookies:</h2>
						[listcookies]
						[index].) [name] = [value]<hr><br>
						[/listcookies]
					</td>
				</tr>
			</table>
		[/showif]
	</body>
</html>