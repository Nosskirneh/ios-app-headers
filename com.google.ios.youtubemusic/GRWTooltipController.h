//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRWTooltipLifeCycleDelegate-Protocol.h"

@class GRWTooltipView, NSString, UIView;

@interface GRWTooltipController : NSObject <GRWTooltipLifeCycleDelegate>
{
    GRWTooltipView *_tooltip;
    CDUnknownBlockType _completion;
    UIView *_anchorView;
    struct CGRect _anchorFrame;
}

@property(nonatomic) struct CGRect anchorFrame; // @synthesize anchorFrame=_anchorFrame;
@property(nonatomic) __weak UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) GRWTooltipView *tooltip; // @synthesize tooltip=_tooltip;
- (void).cxx_destruct;
- (void)tooltipView:(id)arg1 didReceiveInteractionOfType:(unsigned long long)arg2;
- (void)handleEnterForegroundNotification:(id)arg1;
- (void)handleInterfaceOrientationWillChangeNotification:(id)arg1;
- (void)registerNotifications;
- (void)removeTooltip;
- (void)animateTooltipDisappear;
- (void)animateTooltipAppear;
- (void)hideTooltipWithInteractionType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)showTooltip:(id)arg1 anchorView:(id)arg2 animated:(_Bool)arg3 dismissBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

