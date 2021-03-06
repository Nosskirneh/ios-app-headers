//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PlaylistEngagementViewing-Protocol.h"

@class Accessibility, NSLayoutConstraint, TouchInsetButton, UIButton, _TtC10SoundCloud16IncrementalLabel;
@protocol PlaylistEngagementViewDelegate, _TtP8Features36OfflineCollectionButtonReferenceable_;

@interface PlaylistEngagementView : UIView <PlaylistEngagementViewing>
{
    TouchInsetButton *_likeButton;
    NSLayoutConstraint *_likeButtonZeroWidthConstraint;
    UIView *_offlineButtonContainerView;
    NSLayoutConstraint *_offlineButtonContainerViewZeroWidthContstraint;
    TouchInsetButton *_moreButton;
    _TtC10SoundCloud16IncrementalLabel *_titleLabel;
    id <_TtP8Features36OfflineCollectionButtonReferenceable_> _offlineCollectionButtonReference;
    Accessibility *_accessibility;
    UIButton *_offlineCollectionButton;
    id <PlaylistEngagementViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PlaylistEngagementViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton *offlineCollectionButton; // @synthesize offlineCollectionButton=_offlineCollectionButton;
@property(retain, nonatomic) Accessibility *accessibility; // @synthesize accessibility=_accessibility;
@property(readonly, nonatomic) id <_TtP8Features36OfflineCollectionButtonReferenceable_> offlineCollectionButtonReference; // @synthesize offlineCollectionButtonReference=_offlineCollectionButtonReference;
@property(retain, nonatomic) _TtC10SoundCloud16IncrementalLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TouchInsetButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) NSLayoutConstraint *offlineButtonContainerViewZeroWidthContstraint; // @synthesize offlineButtonContainerViewZeroWidthContstraint=_offlineButtonContainerViewZeroWidthContstraint;
@property(retain, nonatomic) UIView *offlineButtonContainerView; // @synthesize offlineButtonContainerView=_offlineButtonContainerView;
@property(retain, nonatomic) NSLayoutConstraint *likeButtonZeroWidthConstraint; // @synthesize likeButtonZeroWidthConstraint=_likeButtonZeroWidthConstraint;
@property(retain, nonatomic) TouchInsetButton *likeButton; // @synthesize likeButton=_likeButton;
- (void).cxx_destruct;
- (id)moreView;
- (void)updateWithUrn:(id)arg1;
- (void)setTitleTextIncrements:(id)arg1;
- (void)configureAccessibility;
- (void)setOfflineButtonLayout;
- (void)didTapSaveOfflineButton:(id)arg1;
- (void)didTapLikeButton:(id)arg1;
- (void)didTapMoreButton:(id)arg1;
- (void)setSaveOfflineHidden:(_Bool)arg1;
- (void)setLikeIsHidden:(_Bool)arg1 text:(id)arg2 isLiked:(_Bool)arg3;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

