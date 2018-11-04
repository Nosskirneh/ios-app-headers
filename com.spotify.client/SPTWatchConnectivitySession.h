//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileManagerDelegate.h"
#import "WCSessionDelegate.h"

@class NSDictionary, NSFileManager, NSString, SPTObserverManager;

@interface SPTWatchConnectivitySession : NSObject <WCSessionDelegate, NSFileManagerDelegate>
{
    SPTObserverManager *_observerManager;
    NSFileManager *_fileManager;
    NSString *_fileStoragePath;
}

+ (_Bool)isSupported;
@property(readonly, nonatomic) NSString *fileStoragePath; // @synthesize fileStoragePath=_fileStoragePath;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
- (void).cxx_destruct;
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
- (void)session:(id)arg1 didReceiveFile:(id)arg2;
- (void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sessionReachabilityDidChange:(id)arg1;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)sessionDidDeactivate:(id)arg1;
- (void)sessionDidBecomeInactive:(id)arg1;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (id)transferredFilePathAtStoragePath:(id)arg1 filename:(id)arg2;
- (_Bool)transferredFileExistsAtStoragePath:(id)arg1 filename:(id)arg2;
- (void)transferFileData:(id)arg1 filename:(id)arg2 storagePath:(id)arg3 metadata:(id)arg4;
- (void)transferFileAtURL:(id)arg1 storagePath:(id)arg2 metadata:(id)arg3;
- (void)transferUserInfo:(id)arg1;
- (_Bool)updateApplicationContext:(id)arg1 error:(id *)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)activateSession;
@property(readonly, copy, nonatomic) NSDictionary *receivedApplicationContext;
@property(readonly, copy, nonatomic) NSDictionary *applicationContext;
@property(readonly, nonatomic) _Bool iOSDeviceNeedsUnlockAfterRebootForReachability;
@property(readonly, nonatomic) long long activationState;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
@property(readonly, nonatomic, getter=isWatchAppInstalled) _Bool watchAppInstalled;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithFileManager:(id)arg1 fileStoragePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

