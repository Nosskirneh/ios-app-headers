//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand, YTIUnlimitedPostCreateFamilyFlowSupportedRenderers;

@interface YTIUnlimitedCreateFamilyEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasHl; // @dynamic hasHl;
@property(nonatomic) _Bool hasPostFlowErrorEndpoint; // @dynamic hasPostFlowErrorEndpoint;
@property(nonatomic) _Bool hasPostFlowErrorRenderer; // @dynamic hasPostFlowErrorRenderer;
@property(nonatomic) _Bool hasPostFlowSuccessEndpoint; // @dynamic hasPostFlowSuccessEndpoint;
@property(nonatomic) _Bool hasReferencePcidParams; // @dynamic hasReferencePcidParams;
@property(nonatomic) _Bool hasSuccessRenderer; // @dynamic hasSuccessRenderer;
@property(copy, nonatomic) NSString *hl; // @dynamic hl;
@property(retain, nonatomic) YTICommand *postFlowErrorEndpoint; // @dynamic postFlowErrorEndpoint;
@property(retain, nonatomic) YTIUnlimitedPostCreateFamilyFlowSupportedRenderers *postFlowErrorRenderer; // @dynamic postFlowErrorRenderer;
@property(retain, nonatomic) YTICommand *postFlowSuccessEndpoint; // @dynamic postFlowSuccessEndpoint;
@property(copy, nonatomic) NSString *referencePcidParams; // @dynamic referencePcidParams;
@property(retain, nonatomic) YTIUnlimitedPostCreateFamilyFlowSupportedRenderers *successRenderer; // @dynamic successRenderer;

@end
