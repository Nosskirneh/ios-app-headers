//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class GPMButton, MDCPageControl, NSMutableArray, NSString, UIImage, UIImageView, UIScrollView;
@protocol GPMWelcomeWizardViewControllerDelegate;

@interface GPMWelcomeWizardViewController : UIViewController <UIScrollViewDelegate>
{
    UIImage *_backgroundImage;
    id <GPMWelcomeWizardViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    GPMButton *_actionButton;
    MDCPageControl *_pageControl;
    UIImageView *_coverImage;
    NSMutableArray *_pages;
}

@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;
- (void).cxx_destruct;
- (void)actionButtonPressed;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBackgroundImage:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
