//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CardDelegate-Protocol.h"

@class GPMPlayableCard, NSIndexPath;

@protocol GPMPlayableCardDelegate <CardDelegate>
- (void)card:(GPMPlayableCard *)arg1 clickedPauseButtonAtIndexPath:(NSIndexPath *)arg2;
- (void)card:(GPMPlayableCard *)arg1 clickedPlayButtonAtIndexPath:(NSIndexPath *)arg2;
@end
