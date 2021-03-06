//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DERPCachingPagingView, UIGestureRecognizer, UIView, UIViewController;
@protocol DERPCachingPagingViewPage;

@protocol DERPCachingPagingViewDelegate <NSObject>
- (unsigned long long)totalNumberOfPages;
- (UIViewController<DERPCachingPagingViewPage> *)viewControllerForPageAtIndex:(unsigned long long)arg1;

@optional
- (void)pagingViewDidScrollToIndex:(long long)arg1;
- (void)pagingViewWillBeginDraggingManually:(DERPCachingPagingView *)arg1;
- (void)pagingViewDidScrollManually:(DERPCachingPagingView *)arg1;
- (void)didReloadAllPagesInPageView:(DERPCachingPagingView *)arg1;
- (void)willReloadAllPagesInPageView:(DERPCachingPagingView *)arg1;
- (float)scaleFactorForZoomedOutPage:(UIViewController *)arg1;
- (float)scaleFactorForZoomedInPage:(UIViewController *)arg1;
- (void)pagingViewPreventedBackwardsGesture:(DERPCachingPagingView *)arg1;
- (void)pagingView:(DERPCachingPagingView *)arg1 pageDidReceiveTap:(UIView *)arg2 gestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)pagingView:(DERPCachingPagingView *)arg1 didChangePages:(long long)arg2;
@end

