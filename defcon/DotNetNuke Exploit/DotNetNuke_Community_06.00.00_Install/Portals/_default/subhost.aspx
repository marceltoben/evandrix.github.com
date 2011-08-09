<%@ Page Language="C#" %>

<script runat="server">
    
    protected override void OnInit(EventArgs e)
    {
        base.OnInit(e);

        PortalSettings settings = PortalController.GetCurrentPortalSettings();
        CultureInfo pageLocale = Localization.GetPageLocale(settings);
        if ((settings != null) && (pageLocale != null))
        {
            Localization.SetThreadCultures(pageLocale, settings);
        }
    }    
    
	protected override void OnLoad(EventArgs e)
	{
		base.OnLoad(e);

		string DomainName = DotNetNuke.Common.Utilities.Null.NullString;
		string ServerPath = null;
		string[] URL = null;
		int intURL = 0;

		// parse the Request URL into a Domain Name token 
		URL = Request.Url.ToString().Split('/');
		for (intURL = 2; intURL <= URL.GetUpperBound(0); intURL++)
		{
			bool willExit = false;
			switch (URL[intURL].ToLower())
			{
				case "admin":
				case "desktopmodules":
				case "mobilemodules":
				case "premiummodules":
					willExit = true;
					break;
				default:
					// check if filename
					if (URL[intURL].IndexOf(".aspx") == -1)
					{
						DomainName = DomainName + (!string.IsNullOrEmpty(DomainName) ? "/" : "") + URL[intURL];
					}
					else
					{
						willExit = true;
					}

					break;
			}
			if (willExit)
				break;
		}

		// format the Request.ApplicationPath
		ServerPath = Request.ApplicationPath;
		if (ServerPath.Substring(ServerPath.Length - 1, 1) != "/")
		{
			ServerPath = ServerPath + "/";
		}

        PortalSettings portal = PortalController.GetCurrentPortalSettings();

        if (portal.HomeTabId > Null.NullInteger)
        {
            Response.Redirect(DotNetNuke.Common.Globals.NavigateURL(portal.HomeTabId, portal, string.Empty, string.Empty), true);
        }
        else
        {
            DomainName = ServerPath + "Default.aspx?alias=" + DomainName;

            Response.Redirect(DomainName, true);
        }

	}

</script>

