//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface YTIAuthConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enableBlockingTokenRefresh; // @dynamic enableBlockingTokenRefresh;
@property(nonatomic) _Bool enableHomepageWaitForValidToken; // @dynamic enableHomepageWaitForValidToken;
@property(nonatomic) _Bool enableOfflineWorkerWaitForValidToken; // @dynamic enableOfflineWorkerWaitForValidToken;
@property(nonatomic) _Bool hasEnableBlockingTokenRefresh; // @dynamic hasEnableBlockingTokenRefresh;
@property(nonatomic) _Bool hasEnableHomepageWaitForValidToken; // @dynamic hasEnableHomepageWaitForValidToken;
@property(nonatomic) _Bool hasEnableOfflineWorkerWaitForValidToken; // @dynamic hasEnableOfflineWorkerWaitForValidToken;
@property(nonatomic) _Bool hasRefreshIntervalSecs; // @dynamic hasRefreshIntervalSecs;
@property(nonatomic) _Bool hasTokenExpirationRefreshDeltaSecs; // @dynamic hasTokenExpirationRefreshDeltaSecs;
@property(nonatomic) int refreshIntervalSecs; // @dynamic refreshIntervalSecs;
@property(nonatomic) int tokenExpirationRefreshDeltaSecs; // @dynamic tokenExpirationRefreshDeltaSecs;

@end

