//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTFreeTierPlaylistHeaderView, UIView;

@protocol SPTFreeTierPlaylistHeaderConfigurator <NSObject>
@property(readonly, nonatomic) UIView *navigationTitleView;
- (void)headerDidScroll;
- (void)headerDidAppear;
- (UIView *)supplementaryView;
- (void)updateHeaderView:(SPTFreeTierPlaylistHeaderView *)arg1;
- (SPTFreeTierPlaylistHeaderView *)createHeaderView;
@end

