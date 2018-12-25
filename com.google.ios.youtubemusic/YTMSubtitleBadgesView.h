//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTMDownloadStateBadgeViewDelegate-Protocol.h"

@class NSString;
@protocol YTMSubtitleBadgesViewDelegate;

@interface YTMSubtitleBadgesView : UIView <YTMDownloadStateBadgeViewDelegate>
{
    double _spacing;
    id <YTMSubtitleBadgesViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMSubtitleBadgesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)downloadStateBadgeViewDidChangeVisibility:(id)arg1;
- (void)removeAllBadgeViews;
@property(readonly, nonatomic) long long visibleIconCount;
- (void)setBadgeViewsWithRenderers:(id)arg1;
- (id)initWithBadgeSpacing:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

