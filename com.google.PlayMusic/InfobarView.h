//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DownloadButtonView, GPMSimpleImageView, TouchTargetButton, UILabel;
@protocol InfobarViewDelegate;

@interface InfobarView : UIView
{
    GPMSimpleImageView *_profileImageView;
    UILabel *_titleLabel;
    UILabel *_trackCountLabel;
    UILabel *_releaseYearLabel;
    UILabel *_separatorLabel;
    TouchTargetButton *_menuButton;
    DownloadButtonView *_downloadButton;
    _Bool _isProfileImageClickable;
    id <InfobarViewDelegate> _delegate;
}

@property(nonatomic) _Bool isProfileImageClickable; // @synthesize isProfileImageClickable=_isProfileImageClickable;
@property(nonatomic) __weak id <InfobarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)profileImageClicked;
- (void)downloadClicked;
- (void)menuClicked;
- (id)accessibilityElements;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateAccessibilityTraits;
- (void)setProfileImageHidden:(_Bool)arg1;
- (void)setProfileImageURL:(id)arg1;
- (void)setMenuButtonHidden:(_Bool)arg1;
- (void)setPinButtonHidden:(_Bool)arg1;
- (void)setDownloadProgress:(double)arg1;
@property(nonatomic, getter=isPinned) _Bool pinned;
- (void)setReleaseYearString:(id)arg1;
- (void)setTrackCountString:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
