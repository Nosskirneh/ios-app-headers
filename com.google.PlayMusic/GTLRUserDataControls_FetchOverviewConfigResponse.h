//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRUserDataControls_ApiResponseHeader, GTLRUserDataControls_TextResource, NSArray;

@interface GTLRUserDataControls_FetchOverviewConfigResponse : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
- (id)settingConfigFor:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) GTLRUserDataControls_ApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(retain, nonatomic) GTLRUserDataControls_TextResource *contextTitle; // @dynamic contextTitle;
@property(retain, nonatomic) GTLRUserDataControls_TextResource *delegatedIdentity; // @dynamic delegatedIdentity;
@property(retain, nonatomic) GTLRUserDataControls_TextResource *privacyNotice; // @dynamic privacyNotice;
@property(retain, nonatomic) NSArray *settingConfigs; // @dynamic settingConfigs;

@end

