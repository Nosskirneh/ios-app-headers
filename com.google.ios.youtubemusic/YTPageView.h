//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "YTPageStyling-Protocol.h"

@class NSString;
@protocol YTPageViewDelegate;

@interface YTPageView : UIScrollView <YTPageStyling>
{
    id <YTPageViewDelegate> _pageViewDelegate;
}

@property(nonatomic) __weak id <YTPageViewDelegate> pageViewDelegate; // @synthesize pageViewDelegate=_pageViewDelegate;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

