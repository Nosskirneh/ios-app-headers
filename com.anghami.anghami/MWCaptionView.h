//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EX2GlowButton, Photo, ResizableLabel, UILabel;
@protocol MWPhoto;

@interface MWCaptionView : UIView
{
    id <MWPhoto> _photo;
    Photo *_anghamiPhoto;
    ResizableLabel *_captionLabel;
    UIView *_likesAndDateView;
    UILabel *_dateLabel;
    UILabel *_likesLabel;
    EX2GlowButton *_likeButton;
}

- (void).cxx_destruct;
- (void)reportLikeState:(_Bool)arg1;
- (void)updateLikeState;
- (void)layoutSubviews;
- (void)layoutLikesLabel;
- (void)layoutLikeButton;
- (void)layoutDateLabel;
- (id)formattedLikes:(unsigned long long)arg1;
- (id)formattedDate:(id)arg1;
- (void)setupLikesAndDateView;
- (void)setupCaption;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithAnghamiPhoto:(id)arg1;
- (id)initWithPhoto:(id)arg1;

@end
