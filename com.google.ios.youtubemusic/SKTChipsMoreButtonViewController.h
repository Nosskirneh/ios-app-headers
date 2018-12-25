//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOOActionSheetControllerDelegate-Protocol.h"
#import "GOOPopoverViewControllerDelegate-Protocol.h"

@class GOOPopoverViewController, MDCAlertController, NSString, SKTAnalyticsProvider, SKTChipsMoreMenuViewController, UIWindow;
@protocol SKTSelectedContactsDisplayOptions;

@interface SKTChipsMoreButtonViewController : UIViewController <GOOPopoverViewControllerDelegate, GOOActionSheetControllerDelegate>
{
    id <SKTSelectedContactsDisplayOptions> _options;
    SKTChipsMoreMenuViewController *_menuViewController;
    GOOPopoverViewController *_activePopover;
    SKTAnalyticsProvider *_analyticsProvider;
    UIWindow *_modalPresentationWindow;
    MDCAlertController *_alertController;
}

@property(retain, nonatomic) MDCAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) UIWindow *modalPresentationWindow; // @synthesize modalPresentationWindow=_modalPresentationWindow;
@property(readonly, nonatomic) SKTAnalyticsProvider *analyticsProvider; // @synthesize analyticsProvider=_analyticsProvider;
@property(retain, nonatomic) GOOPopoverViewController *activePopover; // @synthesize activePopover=_activePopover;
@property(readonly, nonatomic) SKTChipsMoreMenuViewController *menuViewController; // @synthesize menuViewController=_menuViewController;
@property(readonly, nonatomic) id <SKTSelectedContactsDisplayOptions> options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)cleanupAfterModalPresentation;
- (void)prepareForModalPresentation;
- (void)dismissAlertDialog;
- (void)showWhyThisPersonMessage;
- (void)actionSheetDidDisappear:(id)arg1;
- (void)popoverViewControllerDidCancel:(id)arg1;
- (void)moreButtonTapped;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (id)initWithOptions:(id)arg1 analyticsProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

