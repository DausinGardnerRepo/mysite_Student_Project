[text]mypath=/dg/mysite[/text]

[showif [thisurl]^/mysite/][text]page=Home[/text][/showif]

[showif [thisurl]^23admin23][text]page=ADMIN HOME[/text][/showif]

[showif [thisurl]^/accomplishments/][text]page=Accomplishments[/text][/showif]

[showif [thisurl]^/about_us/][text]page=About_Us[/text][/showif]

[showif [thisurl]^/author/][text]page=Author[/text][/showif]

[showif [thisurl]^/contact/][text]page=Contact[/text][/showif]

[showif [thisurl]^/future_prospects/][text]page=Future_Prospects[/text][/showif]

[showif [thisurl]^/pros_cons/][text]page=Pros_Cons[/text][/showif]

[showif [thisurl]^/thankyou.html][text]page=Thank You![/text][/showif]

[showif [thisurl]^/wanna_try/][text]page=Wanna_Try?[/text][/showif]

[showif [thisurl]^state][text]page=State Database[/text][/showif]

[showif [thisurl]^country][text]page=Country Database[/text][/showif]

[showif [debugV]^debug][text]debug=0[/text][/showif]

[showif [debugV]=secret][text]debug=1[/text][/showif]


[showif [mac_is]^mac_is][text]grade=0[/text][/showif]

[showif [mac_is]=grading][text]grade=1[/text][/showif]

[text]searchstr=[formvariables]?[name]=[value]&[/formvariables][/text]

[text]datapathvar=[mypath]/databases/[/text]

[text]adminpathvar=[mypath]/23admin23/[/text]

