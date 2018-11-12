//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, GLUELabel, NSLayoutConstraint, NSString;

@interface SPTHomeUIPromoView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUELabel *_metadataLabel;
    GLUEImageView *_imageView;
    UIView *_contentView;
    NSLayoutConstraint *_contentTopConstraint;
    NSLayoutConstraint *_contentBottomConstraint;
    NSLayoutConstraint *_contentLeadingConstraint;
    NSLayoutConstraint *_contentTrailingConstraint;
    NSLayoutConstraint *_imageToLabelsMarginConstraint;
    NSLayoutConstraint *_subtitleToTitleMarginConstraint;
    NSLayoutConstraint *_metadataToSubtitleMarginConstraint;
    NSLayoutConstraint *_metadataToTitleMarginConstraint;
    NSLayoutConstraint *_metadataToBottomConstraint;
    NSLayoutConstraint *_subtitleToBottomConstraint;
    NSLayoutConstraint *_titleToBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *titleToBottomConstraint; // @synthesize titleToBottomConstraint=_titleToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleToBottomConstraint; // @synthesize subtitleToBottomConstraint=_subtitleToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *metadataToBottomConstraint; // @synthesize metadataToBottomConstraint=_metadataToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *metadataToTitleMarginConstraint; // @synthesize metadataToTitleMarginConstraint=_metadataToTitleMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *metadataToSubtitleMarginConstraint; // @synthesize metadataToSubtitleMarginConstraint=_metadataToSubtitleMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleToTitleMarginConstraint; // @synthesize subtitleToTitleMarginConstraint=_subtitleToTitleMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageToLabelsMarginConstraint; // @synthesize imageToLabelsMarginConstraint=_imageToLabelsMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentTrailingConstraint; // @synthesize contentTrailingConstraint=_contentTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint; // @synthesize contentLeadingConstraint=_contentLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentBottomConstraint; // @synthesize contentBottomConstraint=_contentBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentTopConstraint; // @synthesize contentTopConstraint=_contentTopConstraint;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) GLUELabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)glue_applyStyle:(id)arg1;
- (void)updateConstraints;
- (void)addConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

