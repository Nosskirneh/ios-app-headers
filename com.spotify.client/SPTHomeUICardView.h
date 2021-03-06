//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, NSAttributedString, NSString, SPTHomeUILabel, UIImage, UIStackView;
@protocol GLUETheme;

@interface SPTHomeUICardView : GLUEStatefulView <GLUEStyleable>
{
    UIStackView *_stackView;
    GLUEImageView *_imageView;
    SPTHomeUILabel *_titleLabel;
    SPTHomeUILabel *_subtitleLabel;
    id <GLUETheme> _theme;
    unsigned long long _type;
}

+ (double)imageBottomMarginForTheme:(id)arg1 type:(unsigned long long)arg2;
+ (struct CGSize)sizeForAttributedTitle:(id)arg1 attributedSubtitle:(id)arg2 maxWidth:(double)arg3 style:(id)arg4 theme:(id)arg5 type:(unsigned long long)arg6;
+ (struct CGSize)imageSizeForMaxWidth:(double)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTHomeUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) SPTHomeUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)animateToHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)glue_applyStyle:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle; // @dynamic attributedSubtitle;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @dynamic attributedTitle;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (void)prepareForReuse;
- (id)initWithTheme:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

