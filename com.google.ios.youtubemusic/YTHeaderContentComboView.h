//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTWrapperView.h"

@class YTHeaderView;

@interface YTHeaderContentComboView : YTWrapperView
{
    YTHeaderView *_headerView;
}

+ (id)wrapperViewWithChildView:(id)arg1;
@property(readonly, nonatomic) YTHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bindHeaderViewToNavigationItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithChildView:(id)arg1;

@end

