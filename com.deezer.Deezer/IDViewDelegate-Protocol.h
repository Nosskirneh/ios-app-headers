//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDView;

@protocol IDViewDelegate <NSObject>

@optional
- (void)viewDidDisappear:(IDView *)arg1;
- (void)viewDidAppear:(IDView *)arg1;
- (void)viewDidLoseFocus:(IDView *)arg1;
- (void)viewDidBecomeFocused:(IDView *)arg1;
@end

