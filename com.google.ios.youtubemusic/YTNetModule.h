//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTModule-Protocol.h"

@class NSString;
@protocol YTNetGlobalsConfig;

@interface YTNetModule : NSObject <YTModule>
{
    id <YTNetGlobalsConfig> _config;
}

- (void).cxx_destruct;
- (long long)maxRunningImageFetchersPerHost;
- (void)bindCSIFetcherServiceWithBinder:(id)arg1;
- (void)bindImageFetcherServiceWithBinder:(id)arg1;
- (void)bindDataFetcherServiceWithBinder:(id)arg1;
- (void)bindAdsFetcherServiceWithBinder:(id)arg1;
- (void)bindDeviceAuthenticatorWithBinder:(id)arg1 withPPGAuth:(_Bool)arg2;
- (void)configureWithBinder:(id)arg1;
- (id)overriddenModules;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

