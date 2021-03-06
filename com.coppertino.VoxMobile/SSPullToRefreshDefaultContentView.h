//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SSPullToRefreshContentView-Protocol.h"

@class NSString, UIActivityIndicatorView, UILabel;

@interface SSPullToRefreshDefaultContentView : UIView <SSPullToRefreshContentView>
{
    UILabel *_statusLabel;
    UILabel *_lastUpdatedAtLabel;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) UILabel *lastUpdatedAtLabel; // @synthesize lastUpdatedAtLabel=_lastUpdatedAtLabel;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void).cxx_destruct;
- (void)setLastUpdatedAt:(id)arg1 withPullToRefreshView:(id)arg2;
- (void)setState:(unsigned long long)arg1 withPullToRefreshView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

