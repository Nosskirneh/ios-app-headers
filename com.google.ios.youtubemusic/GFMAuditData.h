//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GFMAuditData_RenderData, GFMAuditData_SessionData;

@interface GFMAuditData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRenderData; // @dynamic hasRenderData;
@property(nonatomic) _Bool hasSessionData; // @dynamic hasSessionData;
@property(retain, nonatomic) GFMAuditData_RenderData *renderData; // @dynamic renderData;
@property(retain, nonatomic) GFMAuditData_SessionData *sessionData; // @dynamic sessionData;

@end

