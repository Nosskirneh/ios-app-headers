//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWADependencyGraphComponent-Protocol.h"
#import "GWALabelViewDelegate-Protocol.h"
#import "GWALinkViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GWAButtonView, GWAFlowContext, GWAImageWithCaptionView, GWAInfoMessageView, GWALabelView, GWALinkView, MDCInkView, NSString, OrchAlertMessage;
@protocol GWAAlertMessageViewDataSource, GWAAlertMessageViewDelegate;

@interface GWAAlertMessageView : UIView <GWALinkViewDelegate, GWALabelViewDelegate, GWADependencyGraphComponent, UIGestureRecognizerDelegate>
{
    id <GWAAlertMessageViewDelegate> _delegate;
    id <GWAAlertMessageViewDataSource> _dataSource;
    GWAFlowContext *_context;
    GWALinkView *_actionLinkView;
    GWALabelView *_actionLabelView;
    GWAImageWithCaptionView *_iconView;
    GWAButtonView *_dismissButtonView;
    GWAInfoMessageView *_descriptionView;
    UIView *_topBorderView;
    MDCInkView *_inkView;
    OrchAlertMessage *_proto;
}

@property(readonly, nonatomic) OrchAlertMessage *proto; // @synthesize proto=_proto;
- (void).cxx_destruct;
- (void)setHighContentCompressionPriorityForView:(id)arg1;
- (void)setHighContentHuggingPriorityForView:(id)arg1;
- (void)updateStyle;
- (id)horizontalButtonsView;
- (id)rightSideStackView;
- (id)dismissButton;
- (id)labelView;
- (id)linkView;
- (void)tapLabel;
- (void)tapLink;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)labelTapped:(id)arg1 label:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)linkView:(id)arg1 linkTapped:(id)arg2;
- (_Bool)checkTrigger:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)unRegisterWithDependencyGraph:(id)arg1;
- (id)initWithAlertMessage:(id)arg1 context:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
