//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMetadataRowHeaderRenderer, YTIMetadataRowRenderer, YTIMetadataWithImageRowRenderer, YTIRichMetadataRowRenderer;

@interface YTIMetadataRowSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMetadataRowHeaderRenderer; // @dynamic hasMetadataRowHeaderRenderer;
@property(nonatomic) _Bool hasMetadataRowRenderer; // @dynamic hasMetadataRowRenderer;
@property(nonatomic) _Bool hasMetadataWithImageRowRenderer; // @dynamic hasMetadataWithImageRowRenderer;
@property(nonatomic) _Bool hasRichMetadataRowRenderer; // @dynamic hasRichMetadataRowRenderer;
@property(retain, nonatomic) YTIMetadataRowHeaderRenderer *metadataRowHeaderRenderer; // @dynamic metadataRowHeaderRenderer;
@property(retain, nonatomic) YTIMetadataRowRenderer *metadataRowRenderer; // @dynamic metadataRowRenderer;
@property(retain, nonatomic) YTIMetadataWithImageRowRenderer *metadataWithImageRowRenderer; // @dynamic metadataWithImageRowRenderer;
@property(retain, nonatomic) YTIRichMetadataRowRenderer *richMetadataRowRenderer; // @dynamic richMetadataRowRenderer;

@end

