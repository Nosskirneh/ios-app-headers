//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTRemoteConfigurationIntegration <NSObject>
- (void)clearPersistentStorage;
- (void)activateFetched;
- (void)fetchConfigurationWithCompletion:(void (^)(unsigned long long))arg1;
- (void)fetchConfiguration;
@end

