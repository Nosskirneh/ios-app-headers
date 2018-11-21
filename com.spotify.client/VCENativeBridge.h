//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLRequest, NSURLSession;

@interface VCENativeBridge : NSObject
{
    _Bool _scriptAcquired;
    _Bool _scriptAcquiring;
    NSURL *_url;
    NSURLRequest *_request;
    NSURLSession *_session;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool scriptAcquiring; // @synthesize scriptAcquiring=_scriptAcquiring;
@property(nonatomic) _Bool scriptAcquired; // @synthesize scriptAcquired=_scriptAcquired;
- (void).cxx_destruct;
- (void)disable;
- (void)willResignActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)registerForNotifications;
- (void)fireVideoEventWithName:(id)arg1 havingEventURLString:(id)arg2 forNativeViewIDString:(id)arg3 forWebView:(id)arg4 withAdditionalParams:(id)arg5;
- (void)initJSWithTrackingURL:(id)arg1 forWebView:(id)arg2 withAdditionalParams:(id)arg3;
- (void)passVIDict:(id)arg1 forWebView:(id)arg2;
- (void)loadMappingWV:(id)arg1;
- (void)requestNativeScript;
- (id)init;

@end

