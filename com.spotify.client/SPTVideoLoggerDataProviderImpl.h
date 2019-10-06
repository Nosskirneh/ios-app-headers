//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMLoggerDataProvider-Protocol.h"

@class NSString, SPSession, SPTNetworkConnectivityController;

@interface SPTVideoLoggerDataProviderImpl : NSObject <BMLoggerDataProvider>
{
    NSString *_featureIdentifier;
    SPSession *_loginSession;
    SPTNetworkConnectivityController *_ncc;
}

@property(retain, nonatomic) SPTNetworkConnectivityController *ncc; // @synthesize ncc=_ncc;
@property(nonatomic) __weak SPSession *loginSession; // @synthesize loginSession=_loginSession;
@property(copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (void).cxx_destruct;
- (id)streamingRules;
- (_Bool)isIncognitoMode;
- (id)connectionType;
- (id)initWithFeatureIdentifier:(id)arg1 loginSession:(id)arg2 networkConnectivityController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

