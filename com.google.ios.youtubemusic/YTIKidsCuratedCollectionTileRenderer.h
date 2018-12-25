//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIDatas, YTIFormattedString, YTIThumbnailDetails;

@interface YTIKidsCuratedCollectionTileRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *bannersArray; // @dynamic bannersArray;
@property(readonly, nonatomic) unsigned long long bannersArray_Count; // @dynamic bannersArray_Count;
@property(retain, nonatomic) YTIFormattedString *collectionSizeText; // @dynamic collectionSizeText;
@property(retain, nonatomic) YTIDatas *colorPalette; // @dynamic colorPalette;
@property(retain, nonatomic) YTIThumbnailDetails *curatorIcon; // @dynamic curatorIcon;
@property(copy, nonatomic) NSString *curatorId; // @dynamic curatorId;
@property(retain, nonatomic) YTIFormattedString *curatorName; // @dynamic curatorName;
@property(nonatomic) _Bool hasCollectionSizeText; // @dynamic hasCollectionSizeText;
@property(nonatomic) _Bool hasColorPalette; // @dynamic hasColorPalette;
@property(nonatomic) _Bool hasCuratorIcon; // @dynamic hasCuratorIcon;
@property(nonatomic) _Bool hasCuratorId; // @dynamic hasCuratorId;
@property(nonatomic) _Bool hasCuratorName; // @dynamic hasCuratorName;
@property(nonatomic) _Bool hasNavigateCommand; // @dynamic hasNavigateCommand;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *navigateCommand; // @dynamic navigateCommand;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
