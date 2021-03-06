//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SocialManager : NSObject
{
}

+ (void)sharerAuthDidFinish:(id)arg1 success:(_Bool)arg2;
+ (void)sharerCancelledSending:(id)arg1;
+ (void)sharer:(id)arg1 failedWithError:(id)arg2 shouldRelogin:(_Bool)arg3;
+ (void)sharerFinishedSending:(id)arg1;
+ (void)sharerStartedSending:(id)arg1;
+ (void)tweetSong:(id)arg1;
+ (void)tweetSongNative:(id)arg1;
+ (void)twitter5Authenticate:(CDUnknownBlockType)arg1;
+ (void)twitter5Unauthenticate;
+ (_Bool)isTwitterAuthenticated;
+ (id)currentAPIClient;
+ (id)currentSession;
+ (void)facebookUnauthenticate;
+ (void)webBrowserWillDisappear:(id)arg1;
+ (_Bool)webBrowser:(id)arg1 shouldLoadURL:(id)arg2;
+ (void)facebookWebviewAuth:(id)arg1;
+ (void)unregisterFacebookAuthWebview;
+ (void)registerForFacebookAuthWebviewWithNavigationController:(id)arg1;
+ (void)getUserInfo;
+ (void)informServerFacebookRegisterFacebookDisplay:(id)arg1 facebookId:(id)arg2 facebookToken:(id)arg3 registerType:(unsigned long long)arg4 additionalParams:(id)arg5;
+ (void)facebookAuthenticateWithNavigationController:(id)arg1 recurse:(_Bool)arg2 getUserInfo:(_Bool)arg3 andIsConnect:(_Bool)arg4;
+ (void)facebookGetUserInfoWithNavigationController:(id)arg1;
+ (void)facebookAuthenticateWithNavigationController:(id)arg1;
+ (void)lastfmUnauthenticate:(CDUnknownBlockType)arg1;
+ (void)loadingFailed:(id)arg1 withError:(id)arg2;
+ (void)loadingFinished:(id)arg1;
+ (void)lastfmAuthenticate:(CDUnknownBlockType)arg1;
+ (double)tweetDelay;
+ (void)setup;
+ (id)sharedInstance;
- (void)shareSong:(id)arg1 isStart:(_Bool)arg2;

@end

