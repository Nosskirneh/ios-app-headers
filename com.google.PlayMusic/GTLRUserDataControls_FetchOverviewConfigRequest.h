//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRUserDataControls_ApiRequestHeader, GTLRUserDataControls_UserEnvironment, NSArray, NSNumber;

@interface GTLRUserDataControls_FetchOverviewConfigRequest : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRUserDataControls_ApiRequestHeader *apiHeader; // @dynamic apiHeader;
@property(retain, nonatomic) NSArray *clientManagedSettingStates; // @dynamic clientManagedSettingStates;
@property(retain, nonatomic) NSNumber *fetchAll; // @dynamic fetchAll;
@property(retain, nonatomic) NSArray *settingIds; // @dynamic settingIds;
@property(retain, nonatomic) GTLRUserDataControls_UserEnvironment *userEnvironment; // @dynamic userEnvironment;

@end

