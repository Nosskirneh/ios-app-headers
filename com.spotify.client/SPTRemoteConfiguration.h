//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, SPTRawConfiguration;
@protocol SPTRemoteConfigurationEventLogger, SPTRemoteConfigurationPersistence, SPTRemoteConfigurationTransport;

@interface SPTRemoteConfiguration : NSObject
{
    SPTRawConfiguration *_activeConfiguration;
    NSURL *_baseURL;
    NSString *_installationID;
    NSString *_clientID;
    NSString *_version;
    id <SPTRemoteConfigurationTransport> _transport;
    id <SPTRemoteConfigurationEventLogger> _logger;
    id <SPTRemoteConfigurationPersistence> _persistence;
    CDUnknownBlockType _backgroundFetchCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType backgroundFetchCompletionBlock; // @synthesize backgroundFetchCompletionBlock=_backgroundFetchCompletionBlock;
@property(readonly, nonatomic) id <SPTRemoteConfigurationPersistence> persistence; // @synthesize persistence=_persistence;
@property(readonly, nonatomic) id <SPTRemoteConfigurationEventLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTRemoteConfigurationTransport> transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSString *installationID; // @synthesize installationID=_installationID;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) SPTRawConfiguration *activeConfiguration; // @synthesize activeConfiguration=_activeConfiguration;
- (void).cxx_destruct;
- (id)getWithClass:(Class)arg1;
- (id)payloadForError:(id)arg1;
- (id)payloadForConfiguration:(id)arg1;
- (id)clientAttributes;
- (id)parseData:(id)arg1;
- (void)logAppliedConfiguration:(id)arg1;
- (void)activateConfiguration:(id)arg1;
- (void)backgroundFetchWithResult:(unsigned long long)arg1;
- (void)clearPersistentStorage;
- (void)activateFetched;
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchConfiguration;
- (id)initWithTransport:(id)arg1 logger:(id)arg2 persistence:(id)arg3 installationID:(id)arg4 clientID:(id)arg5 clientVersion:(id)arg6;
- (id)initWithTransport:(id)arg1 logger:(id)arg2 installationID:(id)arg3 clientID:(id)arg4 clientVersion:(id)arg5;

@end

