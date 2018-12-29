//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RefreshingOverlayView-Protocol.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface AddToPlaylistErrorView : UIView <RefreshingOverlayView>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_retryButton;
    NSLayoutConstraint *_separatorHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *separatorHeightConstraint; // @synthesize separatorHeightConstraint=_separatorHeightConstraint;
@property(nonatomic) __weak UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)refreshButton;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
