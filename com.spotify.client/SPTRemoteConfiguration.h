//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SPTRawConfiguration, SPTRemoteConfigurationMessageCreator;
@protocol SPTRemoteConfigurationDebugLogger, SPTRemoteConfigurationEventLogger, SPTRemoteConfigurationPersistence, SPTRemoteConfigurationTransport;

@interface SPTRemoteConfiguration : NSObject
{
    SPTRawConfiguration *_activeConfiguration;
    NSString *_installationID;
    NSString *_clientID;
    NSString *_version;
    id <SPTRemoteConfigurationTransport> _transport;
    id <SPTRemoteConfigurationEventLogger> _eventLogger;
    id <SPTRemoteConfigurationDebugLogger> _debugLogger;
    id <SPTRemoteConfigurationPersistence> _persistence;
    NSDictionary *_localPropertyOverrides;
    SPTRemoteConfigurationMessageCreator *_messageCreator;
}

@property(retain, nonatomic) SPTRemoteConfigurationMessageCreator *messageCreator; // @synthesize messageCreator=_messageCreator;
@property(retain, nonatomic) NSDictionary *localPropertyOverrides; // @synthesize localPropertyOverrides=_localPropertyOverrides;
@property(readonly, nonatomic) id <SPTRemoteConfigurationPersistence> persistence; // @synthesize persistence=_persistence;
@property(readonly, nonatomic) id <SPTRemoteConfigurationDebugLogger> debugLogger; // @synthesize debugLogger=_debugLogger;
@property(readonly, nonatomic) id <SPTRemoteConfigurationEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) id <SPTRemoteConfigurationTransport> transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSString *installationID; // @synthesize installationID=_installationID;
@property(retain, nonatomic) SPTRawConfiguration *activeConfiguration; // @synthesize activeConfiguration=_activeConfiguration;
- (void).cxx_destruct;
- (id)getInstallationID;
- (void)logMessage:(id)arg1 level:(unsigned long long)arg2;
- (id)extendURLComponents:(id)arg1 fetchType:(id)arg2;
- (id)createURLComponentsWithEndpoint:(id)arg1 apiVersion:(id)arg2;
- (void)handleFetchSuccessWithData:(id)arg1;
- (void)handleFetchSuccessNoData;
- (void)handleFetchError:(id)arg1;
- (id)mergedActiveAndOverridenProperties;
- (id)getWithClass:(Class)arg1;
- (void)sendEventsForConfiguration:(id)arg1;
- (id)clientAttributes;
- (void)activateConfiguration:(id)arg1;
- (id)updatePropertyModel:(id)arg1;
- (void)removeLocalOverrides:(id)arg1;
- (void)clearLocalOverrides;
- (id)localOverrides;
- (_Bool)isValidOverride:(id)arg1;
- (void)setLocalOverrides:(id)arg1;
- (void)clearPersistentStorage;
- (void)activateFetched;
- (void)fetchConfigurationWithFetchType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTransport:(id)arg1 eventLogger:(id)arg2 debugLogger:(id)arg3 clientID:(id)arg4 clientVersion:(id)arg5;
- (id)initWithTransport:(id)arg1 eventLogger:(id)arg2 pingbackEventLogger:(id)arg3 debugLogger:(id)arg4 clientID:(id)arg5 clientVersion:(id)arg6;

@end

