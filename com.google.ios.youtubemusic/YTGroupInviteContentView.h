//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"

@class GIMMe, NSString, UIButton, UIImage, UIImageView, YTFacepileView, YTFormattedStringLabel, YTIFormattedString, YTQTMButton;
@protocol YTGroupInviteContentViewDelegate;

@interface YTGroupInviteContentView : UIView <YTPageStyling>
{
    UIButton *_dismissButton;
    YTFacepileView *_facepileView;
    UIImageView *_errorImageView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_detailLabel;
    YTQTMButton *_confirmationButton;
    UIButton *_notNowButton;
    _Bool _horizontalMode;
    GIMMe *_gimme;
    id <YTGroupInviteContentViewDelegate> _delegate;
    YTIFormattedString *_titleString;
    YTIFormattedString *_detailString;
    NSString *_confirmationButtonLabel;
    NSString *_notNowButtonLabel;
    UIImage *_errorImage;
}

@property(nonatomic) _Bool horizontalMode; // @synthesize horizontalMode=_horizontalMode;
@property(copy, nonatomic) UIImage *errorImage; // @synthesize errorImage=_errorImage;
@property(copy, nonatomic) NSString *notNowButtonLabel; // @synthesize notNowButtonLabel=_notNowButtonLabel;
@property(copy, nonatomic) NSString *confirmationButtonLabel; // @synthesize confirmationButtonLabel=_confirmationButtonLabel;
@property(copy, nonatomic) YTIFormattedString *detailString; // @synthesize detailString=_detailString;
@property(copy, nonatomic) YTIFormattedString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) __weak id <YTGroupInviteContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (struct CGSize)smallConfirmationButtonSize;
- (struct CGSize)confirmationButtonSize;
- (double)shrinkageFactor;
- (void)didTapNotNow;
- (void)didTapConfirm;
- (void)didTapDismiss;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setAvatarURLs:(id)arg1 extraAvatarsText:(id)arg2;
- (void)setAvatarThumbnails:(id)arg1 extraAvatarsText:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

