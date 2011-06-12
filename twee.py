#!/usr/bin/env python

import sys, tweepy

CONSUMER_KEY    = 'h21ZGdnJ6mMzZ7ig7EVSA'
CONSUMER_SECRET = 'QAOUkxsLlndcY4p3pgwCujUCqulmRLVO52XSbGzzCN8'
#Please authorize: http://twitter.com/oauth/authorize?oauth_token=YYUHMmIieV9035klH7BNBGrNQZGsRWuZ3X5Jbnng7G8
#PIN: 7343023
ACCESS_KEY      = '56046602-D5zJvhePMaya8SpPiE6kkAQ7Qu7jkQJgpETD0gkzp'
ACCESS_SECRET   = 'x7l9vO73kDqwmkzW0MSCrL4BVdJloMk9Q57KLX7kns'

auth = tweepy.OAuthHandler(CONSUMER_KEY, CONSUMER_SECRET)

#auth_url = auth.get_authorization_url()
#print 'Please authorize: ' + auth_url
#verifier = raw_input('PIN: ').strip()
#auth.get_access_token(verifier)
#print "ACCESS_KEY = '%s'" % auth.access_token.key
#print "ACCESS_SECRET = '%s'" % auth.access_token.secret

auth.set_access_token(ACCESS_KEY, ACCESS_SECRET)
api = tweepy.API(auth)
api.update_status(sys.argv[1])
