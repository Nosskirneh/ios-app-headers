//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALAd, UIView;

@protocol ALAdDisplayDelegate <NSObject>
- (void)ad:(ALAd *)arg1 wasClickedIn:(UIView *)arg2;
- (void)ad:(ALAd *)arg1 wasHiddenIn:(UIView *)arg2;
- (void)ad:(ALAd *)arg1 wasDisplayedIn:(UIView *)arg2;
@end

