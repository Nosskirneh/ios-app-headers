//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CarIntegrationContentItem, NSArray, NSString;

@interface CarIntegrationNowPlayingDetails : NSObject
{
    _Bool _shuffleMode;
    int _type;
    NSString *_name;
    NSArray *_trackDetails;
    CarIntegrationContentItem *_contentItem;
    long long _indexOfCurrentlyPlayingTrack;
}

@property _Bool shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property long long indexOfCurrentlyPlayingTrack; // @synthesize indexOfCurrentlyPlayingTrack=_indexOfCurrentlyPlayingTrack;
@property(retain, nonatomic) CarIntegrationContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) NSArray *trackDetails; // @synthesize trackDetails=_trackDetails;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)getMetricsNameForType;

@end

