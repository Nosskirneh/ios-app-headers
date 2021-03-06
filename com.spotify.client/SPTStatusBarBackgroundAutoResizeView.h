//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTStatusBarManagerObserver-Protocol.h"

@class NSLayoutConstraint, NSString;

@interface SPTStatusBarBackgroundAutoResizeView : UIView <SPTStatusBarManagerObserver>
{
    NSLayoutConstraint *_heightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
- (void).cxx_destruct;
- (void)statusBarManager:(id)arg1 didChangeStatusBarHeight:(double)arg2;
- (void)statusBarManager:(id)arg1 didToggleStatusBarState:(_Bool)arg2;
- (void)establishConstraintsWithSuperView:(id)arg1;
- (double)calculateRealStatusBarHeight:(double)arg1 onView:(id)arg2;
- (id)initWithSuperView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

