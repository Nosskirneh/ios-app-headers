//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTEventFactoryModelMapping, SPTImpressionEvent, SPTInteractionEvent;

@protocol SPTNowPlayingViewDefault_AlbumArtEventFactory <NSObject>
- (id <SPTInteractionEvent>)swipeSkipToPreviousWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTInteractionEvent>)swipeSkipToNextWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTImpressionEvent>)impression;
- (id <SPTEventFactoryModelMapping>)_location;
@end

