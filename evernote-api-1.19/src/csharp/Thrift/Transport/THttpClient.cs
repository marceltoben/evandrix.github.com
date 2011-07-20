//
//  THttpClient.cs
//
//  Begin:  Oct 5, 2008
//  Authors:
//		Brian O'Neil
//
//  Distributed under the Thrift Software License
//
//  See accompanying file LICENSE or visit the Thrift site at:
//  http://developers.facebook.com/thrift/using

using System;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Thrift.Transport;
using System.Net;
using System.Collections;

namespace Thrift.Transport
{
    public class THttpClient : TTransport
    {
        private Uri url_ = null;
        private MemoryStream requestBuffer_ = new MemoryStream();
        private Stream inputStream_ = null;
        private int connectTimeout_ = 0;
        private int readTimeout_ = 0;
        private Dictionary<String, String> customHeaders_ = new Dictionary<string,string>();

        public THttpClient(String url)
        {
            try
            {
                url_ = new Uri(url);
            }
            catch (IOException iox)
            {
                throw new TTransportException(iox.ToString());
            }
        }

        public void SetConnectTimeout(int timeout)
        {
            connectTimeout_ = timeout;
        }

        public void SetReadTimeout(int timeout)
        {
            readTimeout_ = timeout;
        }

        public void SetCustomHeaders(Dictionary<String, String> headers)
        {
            customHeaders_ = headers;
        }

        public void SetCustomHeader(String key, String value)
        {
            if (customHeaders_ == null)
            {
                customHeaders_ = new Dictionary<String, String>();
            }

            customHeaders_.Add(key, value);
        }

        public override void Open() { }

        public override void Close()
        {
            if (null != inputStream_)
            {
                try
                {
                    inputStream_.Close();
                }
                catch (IOException)
                {
                }
                inputStream_ = null;
            }
        }

        public override bool IsOpen
        {
            get
            {
                return true;
            }
        }

        public override int Read(byte[] buf, int off, int len)
        {
            if (inputStream_ == null)
            {
                throw new TTransportException("Response buffer is empty, no request.");
            }
            try
            {
                int ret = inputStream_.Read(buf, off, len);
                if (ret == -1)
                {
                    throw new TTransportException("No more data available.");
                }
                return ret;
            }
            catch (IOException iox)
            {
                throw new TTransportException(iox.ToString());
            }
        }

        public override void Write(byte[] buf, int off, int len)
        {
            requestBuffer_.Write(buf, off, len);
        }

        public override void Flush()
        {
            // Extract request and reset buffer
            byte[] data = requestBuffer_.ToArray();
            requestBuffer_ = new MemoryStream();

            try
            {
                // Create connection object
                HttpWebRequest connection = (HttpWebRequest)WebRequest.Create(url_);
                
                // Timeouts, only if explicitly set
                if (connectTimeout_ > 0)
                {
                    connection.Timeout = connectTimeout_;
                }
                if (readTimeout_ > 0)
                {
                    connection.ReadWriteTimeout = readTimeout_;
                }

                // Make the request
                connection.ContentType = "application/x-thrift";
                connection.Accept = "application/x-thrift";
                connection.UserAgent = "CSharp/THttpClient";
                connection.Method = "POST";

                //add custom headers here
                foreach (KeyValuePair<string, string> item in customHeaders_)
                {
                    connection.Headers.Add(item.Key, item.Value);
                }

                connection.Proxy = null;
                connection.ContentLength = data.Length;
		Stream reqStream = connection.GetRequestStream();
		reqStream.Write(data, 0, data.Length);
  		reqStream.Flush();
                inputStream_ = connection.GetResponse().GetResponseStream();

            }
            catch (IOException iox)
            {
                throw new TTransportException(iox.ToString());
            }
        }
    }
}
