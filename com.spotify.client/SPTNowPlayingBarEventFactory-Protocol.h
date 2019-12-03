//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTEventFactoryModelMapping, SPTInteractionEvent, SPTNowPlayingBar_HeartButtonEventFactory, SPTNowPlayingBar_PlayButtonEventFactory;

@protocol SPTNowPlayingBarEventFactory <NSObject>
- (id <SPTInteractionEvent>)hitUiReveal;
- (id <SPTInteractionEvent>)swipeSkipToNextWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTInteractionEvent>)swipeSkipToPreviousWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTInteractionEvent>)swipeUiReveal;
- (id <SPTNowPlayingBar_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTNowPlayingBar_PlayButtonEventFactory>)playButtonFactory;
- (id <SPTEventFactoryModelMapping>)_location;
@end
