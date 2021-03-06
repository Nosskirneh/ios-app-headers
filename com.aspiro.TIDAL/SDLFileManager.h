//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, SDLStateMachine;
@protocol SDLConnectionManagerType;

@interface SDLFileManager : NSObject
{
    unsigned long long _bytesAvailable;
    id <SDLConnectionManagerType> _connectionManager;
    NSMutableSet *_mutableRemoteFileNames;
    NSOperationQueue *_transactionQueue;
    NSMutableDictionary *_uploadsInProgress;
    NSMutableSet *_uploadedEphemeralFileNames;
    SDLStateMachine *_stateMachine;
    CDUnknownBlockType _startupCompletionHandler;
}

+ (void)sdl_clearTemporaryFileDirectory;
+ (id)sdl_temporaryFileDirectoryName;
+ (id)temporaryFileDirectory;
+ (id)sdl_stateTransitionDictionary;
@property(copy, nonatomic) CDUnknownBlockType startupCompletionHandler; // @synthesize startupCompletionHandler=_startupCompletionHandler;
@property(retain, nonatomic) SDLStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSMutableSet *uploadedEphemeralFileNames; // @synthesize uploadedEphemeralFileNames=_uploadedEphemeralFileNames;
@property(retain, nonatomic) NSMutableDictionary *uploadsInProgress; // @synthesize uploadsInProgress=_uploadsInProgress;
@property(retain, nonatomic) NSOperationQueue *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) NSMutableSet *mutableRemoteFileNames; // @synthesize mutableRemoteFileNames=_mutableRemoteFileNames;
@property(nonatomic) __weak id <SDLConnectionManagerType> connectionManager; // @synthesize connectionManager=_connectionManager;
@property(nonatomic) unsigned long long bytesAvailable; // @synthesize bytesAvailable=_bytesAvailable;
- (void).cxx_destruct;
- (_Bool)isErrorACannotOverwriteError:(id)arg1;
- (void)uploadArtworks:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadArtworks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadArtwork:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdl_uploadFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (float)sdl_uploadPercentage:(float)arg1 uploadedBytes:(float)arg2;
- (float)sdl_totalBytesToUpload:(id)arg1;
- (void)uploadFiles:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasUploadedFile:(id)arg1;
- (void)deleteRemoteFilesWithNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteRemoteFileWithName:(struct NSString *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdl_listRemoteFilesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didEnterStateReady;
- (void)didEnterStateFetchingInitialList;
- (void)didEnterStateShutdown;
- (void)didEnterStateStartupError;
@property(nonatomic) _Bool suspended;
@property(readonly, copy, nonatomic) NSArray *pendingTransactions;
@property(readonly, copy, nonatomic) NSString *currentState;
@property(readonly, copy, nonatomic) NSSet *remoteFileNames;
- (void)stop;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithConnectionManager:(id)arg1;

@end

