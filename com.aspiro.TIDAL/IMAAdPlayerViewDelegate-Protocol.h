//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMAAdPlayerView;

@protocol IMAAdPlayerViewDelegate <NSObject>
- (_Bool)adPlayerViewIsPlaying:(IMAAdPlayerView *)arg1;
- (void)adPlayerViewDidRequestPauseRequest:(IMAAdPlayerView *)arg1;
- (void)adPlayerViewDidRequestPlayRequest:(IMAAdPlayerView *)arg1;
@end
