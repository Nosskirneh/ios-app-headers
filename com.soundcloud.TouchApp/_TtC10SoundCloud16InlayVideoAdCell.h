//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCell.h"

@class UIButton, UILabel, _TtC10SoundCloud16InlayVideoAdView;

@interface _TtC10SoundCloud16InlayVideoAdCell : BaseCell
{
    // Error parsing type: , name: adTypeTitleLabel
    // Error parsing type: , name: ctaButton
    // Error parsing type: , name: whyAdsButton
    // Error parsing type: , name: inlayVideoView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: ctaAction
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTapCta:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, retain) UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) _TtC10SoundCloud16InlayVideoAdView *inlayVideoView; // @synthesize inlayVideoView;
@property(nonatomic, retain) UIButton *whyAdsButton; // @synthesize whyAdsButton;
@property(nonatomic, retain) UIButton *ctaButton; // @synthesize ctaButton;
@property(nonatomic, retain) UILabel *adTypeTitleLabel; // @synthesize adTypeTitleLabel;

@end

