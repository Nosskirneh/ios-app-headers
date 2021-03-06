//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIEpgFabSupportedRenderers, YTIEpgSupportedContinuations, YTIFormattedString, YTIRenderer;

@interface YTIEpgRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long beginTimeMs; // @dynamic beginTimeMs;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) YTIEpgSupportedContinuations *continuation; // @dynamic continuation;
@property(nonatomic) long long endTimeMs; // @dynamic endTimeMs;
@property(retain, nonatomic) YTIEpgFabSupportedRenderers *fab; // @dynamic fab;
@property(nonatomic) _Bool hasBeginTimeMs; // @dynamic hasBeginTimeMs;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasEndTimeMs; // @dynamic hasEndTimeMs;
@property(nonatomic) _Bool hasFab; // @dynamic hasFab;
@property(nonatomic) _Bool hasInfoText; // @dynamic hasInfoText;
@property(nonatomic) _Bool hasOpenSettingsButton; // @dynamic hasOpenSettingsButton;
@property(nonatomic) _Bool hasPaginationRenderer; // @dynamic hasPaginationRenderer;
@property(nonatomic) _Bool hasSortOptions; // @dynamic hasSortOptions;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *infoText; // @dynamic infoText;
@property(retain, nonatomic) YTIRenderer *openSettingsButton; // @dynamic openSettingsButton;
@property(retain, nonatomic) YTIRenderer *paginationRenderer; // @dynamic paginationRenderer;
@property(retain, nonatomic) YTIRenderer *sortOptions; // @dynamic sortOptions;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

