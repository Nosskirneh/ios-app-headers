//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAdSafariViewControllerDelegate-Protocol.h"

@class FBAdChoicesViewController, FBAdHiddenViewController, FBAdImage, FBAdReportingConfig, FBAdReportingOptionsViewController, NSArray, NSMutableArray, NSString, NSURL, UIView, UIViewController;
@protocol FBAdReportingCoordinatorDelegate;

@interface FBAdReportingCoordinator : NSObject <FBAdSafariViewControllerDelegate>
{
    id <FBAdReportingCoordinatorDelegate> _delegate;
    NSString *_inlineClientToken;
    UIViewController *_viewController;
    UIView *_coverView;
    FBAdReportingConfig *_adReportingConfig;
    FBAdImage *_logoImage;
    NSArray *_previousItems;
    NSString *_previousHeading;
    long long _flowType;
    NSURL *_adChoicesURL;
    NSMutableArray *_userJourney;
    NSMutableArray *_selectedOptions;
    long long _currentStep;
    FBAdChoicesViewController *_adChoicesViewController;
    FBAdReportingOptionsViewController *_reportingOptionsViewController;
    FBAdHiddenViewController *_adHiddenViewController;
    NSMutableArray *_flowViews;
    long long _layoutType;
}

+ (_Bool)canPresentInView:(id)arg1 layoutType:(long long)arg2;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(retain, nonatomic) NSMutableArray *flowViews; // @synthesize flowViews=_flowViews;
@property(retain, nonatomic) FBAdHiddenViewController *adHiddenViewController; // @synthesize adHiddenViewController=_adHiddenViewController;
@property(retain, nonatomic) FBAdReportingOptionsViewController *reportingOptionsViewController; // @synthesize reportingOptionsViewController=_reportingOptionsViewController;
@property(retain, nonatomic) FBAdChoicesViewController *adChoicesViewController; // @synthesize adChoicesViewController=_adChoicesViewController;
@property(nonatomic) long long currentStep; // @synthesize currentStep=_currentStep;
@property(retain, nonatomic) NSMutableArray *selectedOptions; // @synthesize selectedOptions=_selectedOptions;
@property(retain, nonatomic) NSMutableArray *userJourney; // @synthesize userJourney=_userJourney;
@property(retain, nonatomic) NSURL *adChoicesURL; // @synthesize adChoicesURL=_adChoicesURL;
@property(nonatomic) long long flowType; // @synthesize flowType=_flowType;
@property(copy, nonatomic) NSString *previousHeading; // @synthesize previousHeading=_previousHeading;
@property(copy, nonatomic) NSArray *previousItems; // @synthesize previousItems=_previousItems;
@property(retain, nonatomic) FBAdImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) FBAdReportingConfig *adReportingConfig; // @synthesize adReportingConfig=_adReportingConfig;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, copy, nonatomic) NSString *inlineClientToken; // @synthesize inlineClientToken=_inlineClientToken;
@property(nonatomic) __weak id <FBAdReportingCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewControllerDismissed:(id)arg1;
- (void)registerOptionsStepForFlowType:(long long)arg1;
- (void)presentWhyAmISeeingThisViewController;
- (void)presentManageAdPreferencesViewController;
- (void)presentReportingOptionsViewControllerWithTitle:(id)arg1 heading:(id)arg2 items:(id)arg3 inView:(id)arg4;
- (void)presentReportingOptionsViewControllerWithTitle:(id)arg1 heading:(id)arg2 items:(id)arg3;
- (void)presentAdHiddenViewControllerWithReason:(id)arg1 inView:(id)arg2;
- (id)adReportingExtraData;
- (void)logReport;
- (void)notifyDelegateAboutFlowCancelation;
- (void)clearReport;
- (void)stopAdReportingFlow;
- (void)startAdReportingFlow;
- (void)startAdReportingFlowInView:(id)arg1 layoutType:(long long)arg2;
- (id)initWithData:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

