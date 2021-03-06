//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SASLivePreviewUtils : NSObject
{
}

+ (void)displayLivePreviewErrorWithMessage:(id)arg1;
+ (_Bool)isValidString:(id)arg1;
+ (_Bool)isOnlyNumeric:(id)arg1;
+ (id)sha256HashFor:(id)arg1;
+ (id)livePreviewURLSignatureWithInsertionID:(id)arg1 timestamp:(id)arg2;
+ (id)generatePreviewURLWithInsertionID:(id)arg1 timestamp:(id)arg2;
+ (id)previewURLForPlacement:(id)arg1;
+ (id)generateSignatureWithSiteID:(id)arg1 pageID:(id)arg2 formatID:(id)arg3 target:(id)arg4 insertionID:(id)arg5 duration:(id)arg6;
+ (_Bool)isValidExpirationTimestamp:(id)arg1;
+ (_Bool)isValidDuration:(id)arg1;
+ (_Bool)isValidSignature:(id)arg1 forSiteId:(id)arg2 query:(id)arg3;
+ (id)isValidPreviewUnsetQuery:(id)arg1;
+ (id)isValidPreviewQuery:(id)arg1 siteID:(id)arg2;
+ (id)errorWithDescription:(id)arg1;
+ (id)isValidQueryDictionary:(id)arg1 forHost:(id)arg2 siteID:(id)arg3;
+ (_Bool)isValidHost:(id)arg1;
+ (_Bool)isValidScheme:(id)arg1;
+ (id)currentDatePlusValue:(long long)arg1;
+ (id)siteIDFromURL:(id)arg1;
+ (id)parseQueryString:(id)arg1;
+ (_Bool)isValidLivePreviewURL:(id)arg1;

@end

