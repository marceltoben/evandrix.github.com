# Load libraries required by the Evernote OAuth sample applications
require 'oauth'
require 'oauth/consumer'

# Add the Thrift & Evernote Ruby libraries to the load path.
# This will only work if you run this application from the sample/ruby/oauth
# directory of the Evernote API distribution.
dir = File.expand_path(File.dirname(__FILE__))
$LOAD_PATH.push("#{dir}/../../../lib/ruby")
$LOAD_PATH.push("#{dir}/../../../lib/ruby/Evernote/EDAM")

require "thrift/types"
require "thrift/struct"
require "thrift/protocol/base_protocol"
require "thrift/protocol/binary_protocol"
require "thrift/transport/base_transport"
require "thrift/transport/http_client_transport"
require "Evernote/EDAM/note_store"

# Client credentials
# Replace these with the consumer key and consumer secret that you obtained
# from Evernote. If you do not have an Evernote API key, you may request one
# from http://www.evernote.com/about/developer/api/
OAUTH_CONSUMER_KEY = "en-edamtest"
OAUTH_CONSUMER_SECRET = "01234567890abcdef"

# Constants
# Replace this with https://www.evernote.com to use the Evernote production service
EVERNOTE_SERVER = "https://sandbox.evernote.com"
REQUEST_TOKEN_URL = "#{EVERNOTE_SERVER}/oauth"
ACCESS_TOKEN_URL = "#{EVERNOTE_SERVER}/oauth"
AUTHORIZATION_URL = "#{EVERNOTE_SERVER}/OAuth.action"
NOTESTORE_URL_BASE = "#{EVERNOTE_SERVER}/edam/note/"
