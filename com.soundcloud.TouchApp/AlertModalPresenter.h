//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AlertTransitioningDelegate, AlertViewController, _TtC2UI18AlertConfiguration;

@interface AlertModalPresenter : NSObject
{
    _TtC2UI18AlertConfiguration *_configuration;
    AlertTransitioningDelegate *_transitioningDelegate;
    AlertViewController *_alertViewController;
}

+ (id)viewControllerIdentifierForConfiguration:(id)arg1;
+ (id)createAlertViewControllerWithConfiguration:(id)arg1 storyboard:(id)arg2;
@property(readonly, nonatomic) AlertViewController *alertViewController; // @synthesize alertViewController=_alertViewController;
@property(readonly, nonatomic) AlertTransitioningDelegate *transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
@property(readonly, nonatomic) _TtC2UI18AlertConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)configureAlertViewController;
- (void)presentOnTopWindowWithLightStatusBar;
- (void)presentOnTopWindow;
- (void)presentFromViewController:(id)arg1;
- (id)initWithActionSheetConfiguration:(id)arg1 transitioningDelegate:(id)arg2 alertViewController:(id)arg3;
- (id)initWithActionSheetConfiguration:(id)arg1 storyboard:(id)arg2;
- (id)initWithAlertConfiguration:(id)arg1;

@end

