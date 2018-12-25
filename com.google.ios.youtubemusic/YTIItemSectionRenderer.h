//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTInnerTubeSectionRenderer-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIItemSectionBackgroundSupportedRenderers, YTIItemSectionHeaderSupportedRenderers, YTILoggingDirectives, YTISeparatorDetails;

@interface YTIItemSectionRenderer : GPBMessage <YTInnerTubeSectionRenderer>
{
}

+ (id)descriptor;
- (_Bool)containsGhostCards;
- (id)sectionHeader;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;

// Remaining properties
@property(retain, nonatomic) YTIItemSectionBackgroundSupportedRenderers *background; // @dynamic background;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) NSMutableArray *continuationsArray; // @dynamic continuationsArray;
@property(readonly, nonatomic) unsigned long long continuationsArray_Count; // @dynamic continuationsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasBackground; // @dynamic hasBackground;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHideBottomSeparator; // @dynamic hasHideBottomSeparator;
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasMaxAgeStoreSeconds; // @dynamic hasMaxAgeStoreSeconds;
@property(nonatomic) _Bool hasSectionIdentifier; // @dynamic hasSectionIdentifier;
@property(nonatomic) _Bool hasSeparatorDetails; // @dynamic hasSeparatorDetails;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIItemSectionHeaderSupportedRenderers *header; // @dynamic header;
@property(nonatomic) _Bool hideBottomSeparator; // @dynamic hideBottomSeparator;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(nonatomic) unsigned int maxAgeStoreSeconds; // @dynamic maxAgeStoreSeconds;
@property(copy, nonatomic) NSString *sectionIdentifier; // @dynamic sectionIdentifier;
@property(retain, nonatomic) YTISeparatorDetails *separatorDetails; // @dynamic separatorDetails;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

