//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWAAlertHeaderViewDataSource-Protocol.h"
#import "GWAAlertHeaderViewDelegate-Protocol.h"
#import "GWAAlertMessageViewDataSource-Protocol.h"
#import "GWAAlertMessageViewDelegate-Protocol.h"
#import "GWADependencyGraphComponent-Protocol.h"
#import "GWAFlowSection-Protocol.h"
#import "GWAForm-Protocol.h"

@class GWAComponentGroup, GWADependencyGraph, GWAFlowContext, GWAMultipleAlertHeaderView, NSArray, NSMutableArray, NSString, OrchAlert, UIColor, UIImage, UIStackView;
@protocol GWAAlertViewDelegate, GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWAAlertView : UIView <GWAAlertHeaderViewDelegate, GWAAlertHeaderViewDataSource, GWAAlertMessageViewDelegate, GWAAlertMessageViewDataSource, GWADependencyGraphComponent, GWAForm, GWAFlowSection>
{
    GWAFlowContext *_context;
    id <GWAAlertViewDelegate> _alertViewDelegate;
    GWAMultipleAlertHeaderView *_multipleAlertHeaderView;
    NSMutableArray *_alertMessageViews;
    _Bool _showShadow;
    GWADependencyGraph *_dependencyGraph;
    _Bool _isExpanded;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
    OrchAlert *_proto;
    UIStackView *_mainStackView;
}

@property(retain, nonatomic) UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(readonly, nonatomic) OrchAlert *proto; // @synthesize proto=_proto;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setUpStackView;
- (id)createBorderView;
- (id)alertHeader;
- (id)alertMessages;
- (void)alertViewTapped:(id)arg1 label:(id)arg2;
- (void)alertViewTapped:(id)arg1 link:(id)arg2;
- (void)updatePartialPageDataArray:(id)arg1 component:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *rows;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
- (id)sections;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)value;
- (id)iconTintColorForAlertMessage:(id)arg1;
- (id)buttonTitleColorForAlertMessage:(id)arg1;
- (id)messageTextColorForAlertMessage:(id)arg1;
- (id)backGroundColorForAlertMessage:(id)arg1;
- (_Bool)shouldShowBorder:(id)arg1;
- (void)alertMessageViewTapped:(id)arg1 label:(id)arg2;
- (void)alertMessageViewTapped:(id)arg1 link:(id)arg2;
- (id)expandButtonColorForMultipleAlertHeader:(id)arg1;
- (id)textColorForMultipleAlertHeader:(id)arg1;
- (id)iconTintColorForMultipleAlertHeader:(id)arg1;
- (id)backGroundColorForMultipleAlertHeader:(id)arg1;
- (void)multipleAlertHeaderView:(id)arg1 expanded:(_Bool)arg2;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)updateWithAlert:(id)arg1 partialUpdateData:(id)arg2;
- (id)initWithAlert:(id)arg1 context:(id)arg2 showShadow:(_Bool)arg3 alertViewDelegate:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end

