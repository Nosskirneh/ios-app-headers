//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCKNHTTPRequestDelegate-Protocol.h"
#import "GCKParameterMapDelegate-Protocol.h"

@class GCKBSystemInfo, GCKNHTTPClient, GCKNHTTPRequest, GCKParameterMap, NSArray, NSCharacterSet, NSDictionary, NSString, NSTimer, NSURL;

@interface GCKRuntimeConfiguration : NSObject <GCKParameterMapDelegate, GCKNHTTPRequestDelegate>
{
    NSString *_clientID;
    GCKBSystemInfo *_systemInfo;
    NSString *_frameworkVersion;
    GCKParameterMap *_config;
    struct NSMutableDictionary *_observers;
    NSCharacterSet *_delimiters;
    NSURL *_configCacheFile;
    NSURL *_configServiceURL;
    NSDictionary *_configServiceParams;
    GCKNHTTPClient *_httpClient;
    GCKNHTTPRequest *_downloadRequest;
    NSURL *_tempFile;
    NSTimer *_downloadTimer;
    double _lastDownloadAttemptTime;
    _Bool _forceDownload;
    double _lastModifiedTime;
    NSArray *_enabledParameterIDs;
}

@property(retain, nonatomic) NSArray *enabledParameterIDs; // @synthesize enabledParameterIDs=_enabledParameterIDs;
@property(nonatomic) double lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)unregisterForAppStateNotifications;
- (void)registerForAppStateNotifications;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)httpRequest:(id)arg1 didCompleteWithStatusCode:(long long)arg2;
- (void)httpRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)parameterMap:(id)arg1 didChangeValueForKey:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)timerDidFire:(id)arg1;
- (_Bool)processDownload;
- (void)startDownload;
- (void)scheduleDownload;
- (void)cancelTimer;
- (void)downloadNow;
- (id)getAllKeys;
- (void)clearCached;
- (void)notifyValueChanged:(id)arg1 from:(id)arg2 to:(id)arg3;
- (void)clear;
- (_Bool)boolForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1 withDefaultValue:(id)arg2;
- (id)stringForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 withDefaultValue:(double)arg2;
- (double)doubleForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (long long)integerForKey:(id)arg1;
- (_Bool)containsKey:(id)arg1;
- (void)removeValueObserver:(id)arg1;
- (void)addValueObserver:(id)arg1 forKeys:(id)arg2;
- (void)addValueObserver:(id)arg1 forKey:(id)arg2;
- (_Bool)writeToAppCache;
- (_Bool)readFromAppCache;
- (_Bool)readFromData:(id)arg1;
- (void)dealloc;
- (id)initWithOverrideConfiguration:(id)arg1;
- (id)initWithClientID:(id)arg1 frameworkVersion:(id)arg2 bundleIdentifier:(id)arg3 overrideConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

