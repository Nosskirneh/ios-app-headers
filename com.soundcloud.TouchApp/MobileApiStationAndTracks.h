//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MobileApiStation, MobileApiTrackCollection;

@interface MobileApiStationAndTracks : MTLModel <MTLJSONSerializing>
{
    MobileApiStation *_station;
    MobileApiTrackCollection *_tracks;
}

+ (id)stationJSONTransformer;
+ (id)tracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) MobileApiTrackCollection *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) MobileApiStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;

@end
