//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, _TtC6Deezer16IllustrationView, _TtC6Deezer17FlowTabPlayButton, _TtC6Deezer18FlowTabBeveledView;

@interface _TtC6Deezer20FlowTabSmallCardView : UIView
{
    // Error parsing type: , name: contentView
    // Error parsing type: , name: contentViewProportionalHeight
    // Error parsing type: , name: illustrationView
    // Error parsing type: , name: playButton
    // Error parsing type: , name: playButtonWidthConstraint
    // Error parsing type: , name: cardFlowLabel
    // Error parsing type: , name: cardFlowLabelTopConstraint
    // Error parsing type: , name: cardFlowFontSize
    // Error parsing type: , name: cardFlowLabelKerning
    // Error parsing type: , name: cardTitleLabel
    // Error parsing type: , name: cardTitleLabelTopConstraint
    // Error parsing type: , name: cardTitleFontSize
    // Error parsing type: , name: cardTitleLabelKerning
    // Error parsing type: , name: cardSubtitleLabel
    // Error parsing type: , name: cardSubtitleLabelTopConstraint
    // Error parsing type: , name: cardSubtitleFontSize
    // Error parsing type: , name: cardFlowImageView
    // Error parsing type: , name: cardFlowImageViewHeightConstraint
    // Error parsing type: , name: cardFlowImageViewSubtitleLabel
    // Error parsing type: , name: chevronImageView
    // Error parsing type: , name: chevronHeightConstraint
    // Error parsing type: , name: playButtonToFirstLabelConstraint
    // Error parsing type: , name: labelsLeadingConstraint
    // Error parsing type: , name: playAction
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pause;
- (void)play;
- (void)load;
- (void)playButtonTouchedWithSender:(id)arg1;
- (void)populateWithSmartTracklist:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)setupLayouts;
- (void)awakeFromNib;
@property(nonatomic) struct CGRect frame;
@property(nonatomic, copy) NSArray *labelsLeadingConstraint; // @synthesize labelsLeadingConstraint;
@property(nonatomic, copy) NSArray *playButtonToFirstLabelConstraint; // @synthesize playButtonToFirstLabelConstraint;
@property(nonatomic) __weak NSLayoutConstraint *chevronHeightConstraint; // @synthesize chevronHeightConstraint;
@property(nonatomic) __weak UIImageView *chevronImageView; // @synthesize chevronImageView;
@property(nonatomic) __weak UILabel *cardFlowImageViewSubtitleLabel; // @synthesize cardFlowImageViewSubtitleLabel;
@property(nonatomic) __weak NSLayoutConstraint *cardFlowImageViewHeightConstraint; // @synthesize cardFlowImageViewHeightConstraint;
@property(nonatomic) __weak UIImageView *cardFlowImageView; // @synthesize cardFlowImageView;
@property(nonatomic) __weak NSLayoutConstraint *cardSubtitleLabelTopConstraint; // @synthesize cardSubtitleLabelTopConstraint;
@property(nonatomic) __weak UILabel *cardSubtitleLabel; // @synthesize cardSubtitleLabel;
@property(nonatomic) __weak NSLayoutConstraint *cardTitleLabelTopConstraint; // @synthesize cardTitleLabelTopConstraint;
@property(nonatomic) __weak UILabel *cardTitleLabel; // @synthesize cardTitleLabel;
@property(nonatomic) __weak NSLayoutConstraint *cardFlowLabelTopConstraint; // @synthesize cardFlowLabelTopConstraint;
@property(nonatomic) __weak UILabel *cardFlowLabel; // @synthesize cardFlowLabel;
@property(nonatomic) __weak NSLayoutConstraint *playButtonWidthConstraint; // @synthesize playButtonWidthConstraint;
@property(nonatomic) __weak _TtC6Deezer17FlowTabPlayButton *playButton; // @synthesize playButton;
@property(nonatomic) __weak _TtC6Deezer16IllustrationView *illustrationView; // @synthesize illustrationView;
@property(nonatomic) __weak NSLayoutConstraint *contentViewProportionalHeight; // @synthesize contentViewProportionalHeight;
@property(nonatomic) __weak _TtC6Deezer18FlowTabBeveledView *contentView; // @synthesize contentView;

@end

