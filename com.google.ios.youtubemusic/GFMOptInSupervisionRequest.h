//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMApiRequestHeader, GFMAuditData, NSString;

@interface GFMOptInSupervisionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *androidId; // @dynamic androidId;
@property(retain, nonatomic) GFMApiRequestHeader *apiHeader; // @dynamic apiHeader;
@property(retain, nonatomic) GFMAuditData *auditData; // @dynamic auditData;
@property(nonatomic) _Bool hasAndroidId; // @dynamic hasAndroidId;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasAuditData; // @dynamic hasAuditData;

@end

