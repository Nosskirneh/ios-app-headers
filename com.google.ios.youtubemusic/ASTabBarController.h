//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "ASManagesChildVisibilityDepth-Protocol.h"

@class NSString;

@interface ASTabBarController : UITabBarController <ASManagesChildVisibilityDepth>
{
    _Bool _parentManagesVisibilityDepth;
    long long _visibilityDepth;
}

- (void)setSelectedViewController:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (long long)visibilityDepthOfChildViewController:(id)arg1;
- (void)visibilityDepthDidChange;
- (long long)visibilityDepth;
- (void)setVisibilityDepth:(unsigned long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

