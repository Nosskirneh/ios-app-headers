//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTEventFactoryModelMapping, SPTImpressionEvent, SPTNowPlayingViewDefault_TrackActions_LabelContainer_ArtistLabelEventFactory, SPTNowPlayingViewDefault_TrackActions_LabelContainer_TitleLabelEventFactory;

@protocol SPTNowPlayingViewDefault_TrackActions_LabelContainerEventFactory <NSObject>
- (id <SPTImpressionEvent>)impression;
- (id <SPTNowPlayingViewDefault_TrackActions_LabelContainer_ArtistLabelEventFactory>)artistLabelFactory;
- (id <SPTNowPlayingViewDefault_TrackActions_LabelContainer_TitleLabelEventFactory>)titleLabelFactory;
- (id <SPTEventFactoryModelMapping>)_location;
@end

