//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UDCConsentViewController.h"

@class MDCFlexibleHeaderViewController, UDCMaterialConsentHeader;

@interface UDCMaterialConsentViewController : UDCConsentViewController
{
    _Bool _rotating;
    _Bool _scrolledTillEnd;
    MDCFlexibleHeaderViewController *_headerViewController;
    UDCMaterialConsentHeader *_header;
}

- (void).cxx_destruct;
- (void)layoutContentView;
- (void)prepareConsentViews:(id)arg1;
- (void)updateScrollViewState;
- (void)updateHeaderMaxHeight;
- (void)refreshSubviewFrames;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didTapInactionablePositiveButton;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUDCService:(id)arg1 params:(id)arg2 newValue:(long long)arg3;

@end

