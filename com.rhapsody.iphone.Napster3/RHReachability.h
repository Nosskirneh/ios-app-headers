//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Reachability.h"

@class NSString, NSURL, NSURLSession;

@interface RHReachability : Reachability
{
    NSURL *_testURL;
    NSString *_testHost;
    NSURLSession *_session;
}

+ (id)reachabilityForPlayback;
+ (id)reachabilityForUrlName:(id)arg1;
+ (id)reachabilityForLocalWiFi;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostname:(id)arg1;
+ (id)reachabilityWithURL:(id)arg1;
+ (id)RHNetworkStatusChangedNotification;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *testHost; // @synthesize testHost=_testHost;
@property(retain, nonatomic) NSURL *testURL; // @synthesize testURL=_testURL;
- (void).cxx_destruct;
- (id)checkHost;

@end

