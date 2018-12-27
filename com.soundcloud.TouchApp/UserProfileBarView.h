//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CollectionReusableViewWithDivider.h"

@class NSLayoutConstraint, NSString, TouchInsetButton, UILabel;
@protocol UserProfileBarViewDelegate;

@interface UserProfileBarView : CollectionReusableViewWithDivider
{
    id <UserProfileBarViewDelegate> _delegate;
    UILabel *_followersLabel;
    TouchInsetButton *_stationButton;
    TouchInsetButton *_followButton;
    NSLayoutConstraint *_followButtonLeadingToStationButtonTrailing;
    NSLayoutConstraint *_stationButtonTrailingToSuperview;
    NSLayoutConstraint *_stationButtonWidth;
    NSLayoutConstraint *_stationButtonZeroWidth;
}

@property(nonatomic) __weak NSLayoutConstraint *stationButtonZeroWidth; // @synthesize stationButtonZeroWidth=_stationButtonZeroWidth;
@property(nonatomic) __weak NSLayoutConstraint *stationButtonWidth; // @synthesize stationButtonWidth=_stationButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *stationButtonTrailingToSuperview; // @synthesize stationButtonTrailingToSuperview=_stationButtonTrailingToSuperview;
@property(nonatomic) __weak NSLayoutConstraint *followButtonLeadingToStationButtonTrailing; // @synthesize followButtonLeadingToStationButtonTrailing=_followButtonLeadingToStationButtonTrailing;
@property(nonatomic) __weak TouchInsetButton *followButton; // @synthesize followButton=_followButton;
@property(nonatomic) __weak TouchInsetButton *stationButton; // @synthesize stationButton=_stationButton;
@property(nonatomic) __weak UILabel *followersLabel; // @synthesize followersLabel=_followersLabel;
@property(nonatomic) __weak id <UserProfileBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureAccessibility;
- (void)configureFollowButtonImages;
- (void)configureFollowButtonTitle;
- (void)configureFollowButton;
- (void)stationButtonTapped:(id)arg1;
- (void)followButtonTapped:(id)arg1;
@property(retain, nonatomic) NSString *followButtonAccessibility;
@property(nonatomic) _Bool followButtonHidden;
@property(nonatomic) _Bool followButtonSelected;
@property(retain, nonatomic) NSString *selectedFollowButtonTitle;
@property(nonatomic) _Bool stationButtonHidden;
@property(retain, nonatomic) NSString *stationButtonText;
@property(retain, nonatomic) NSString *followersAccessibility;
@property(retain, nonatomic) NSString *followersText;
- (void)awakeFromNib;

@end

