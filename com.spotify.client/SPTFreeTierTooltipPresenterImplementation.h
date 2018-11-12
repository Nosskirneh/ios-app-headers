//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFreeTierTooltipPresenter-Protocol.h"

@class NSLayoutConstraint, NSString, NSTimer, SPTFreeTierTooltipTheme, SPTFreeTierTooltipView, UITapGestureRecognizer;

@interface SPTFreeTierTooltipPresenterImplementation : NSObject <SPTFreeTierTooltipPresenter>
{
    _Bool _tooltipPresented;
    SPTFreeTierTooltipTheme *_theme;
    NSLayoutConstraint *_verticalAlgnmentConstraint;
    NSTimer *_presentationTimer;
    SPTFreeTierTooltipView *_currentTooltipView;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(nonatomic, getter=isTooltipPresented) _Bool tooltipPresented; // @synthesize tooltipPresented=_tooltipPresented;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) SPTFreeTierTooltipView *currentTooltipView; // @synthesize currentTooltipView=_currentTooltipView;
@property(retain, nonatomic) NSTimer *presentationTimer; // @synthesize presentationTimer=_presentationTimer;
@property(retain, nonatomic) NSLayoutConstraint *verticalAlgnmentConstraint; // @synthesize verticalAlgnmentConstraint=_verticalAlgnmentConstraint;
@property(retain, nonatomic) SPTFreeTierTooltipTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)userDidTapTooltipView:(id)arg1;
- (double)timeIntervalForDuration:(long long)arg1;
- (double)verticalMarginForArrowDirection:(unsigned long long)arg1 anchorRect:(struct CGRect)arg2 tooltip:(id)arg3 inContainerView:(id)arg4;
- (unsigned long long)arrowDirectionWithAnchorRect:(struct CGRect)arg1 tooltip:(id)arg2 inContainerView:(id)arg3;
- (id)defaultContentViewWithText:(id)arg1;
- (void)hideTooltipWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)presentationDidFinish:(id)arg1;
- (void)showTooltipWithContentView:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 duration:(long long)arg5;
- (void)dismissPresentedTooltip;
- (void)presentTooltipWithContentView:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 duration:(long long)arg5;
- (void)presentTooltipWithText:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 permittedArrowDirections:(unsigned long long)arg4;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

