//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, GLUELabel, NSLayoutConstraint, NSString;

@interface SPTFreeTierArtistPinnedItemCommentView : UIView <GLUEStyleable>
{
    NSString *_commentText;
    GLUEImageView *_artistImageView;
    NSLayoutConstraint *_artistImageViewWidthConstraint;
    NSLayoutConstraint *_artistImageViewHeightConstraint;
    GLUELabel *_commentLabel;
}

@property(retain, nonatomic) GLUELabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) NSLayoutConstraint *artistImageViewHeightConstraint; // @synthesize artistImageViewHeightConstraint=_artistImageViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *artistImageViewWidthConstraint; // @synthesize artistImageViewWidthConstraint=_artistImageViewWidthConstraint;
@property(retain, nonatomic) GLUEImageView *artistImageView; // @synthesize artistImageView=_artistImageView;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
- (void).cxx_destruct;
- (void)setArtistImage:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)addLayoutConstraints;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

