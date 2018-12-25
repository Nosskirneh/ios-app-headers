//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTISectionListRenderer;

@protocol YTBrowsyBarRefinementRenderer <NSObject>
@property(readonly, nonatomic) NSData *trackingParams;
@property(readonly, nonatomic) _Bool hasTrackingParams;
@property(readonly, nonatomic) YTISectionListRenderer *flattenedContent;
@property(readonly, nonatomic) _Bool hasFlattenedContent;
@property(readonly, nonatomic) YTICommand *navigationEndpoint;
@property(readonly, nonatomic) _Bool hasNavigationEndpoint;
@property(readonly, nonatomic) _Bool selected;
@property(readonly, nonatomic) _Bool hasSelected;
@property(readonly, nonatomic) NSMutableArray *thumbnailsArray;
@property(readonly, nonatomic) _Bool hasThumbnailsArray;
@property(readonly, nonatomic) YTIFormattedString *title;
@property(readonly, nonatomic) _Bool hasTitle;
@end
