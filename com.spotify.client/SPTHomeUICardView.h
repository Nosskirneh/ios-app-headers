//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, NSAttributedString, NSLayoutConstraint, NSString, SPTHomeUILabel, UIImage;

@interface SPTHomeUICardView : GLUEStatefulView <GLUEStyleable>
{
    GLUEImageView *_imageView;
    SPTHomeUILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelTopEdgeConstraint;
    NSLayoutConstraint *_titleLabelBottomEdgeConstraint;
    NSLayoutConstraint *_titleLabelLeftEdgeConstraint;
    NSLayoutConstraint *_titleLabelRightEdgeConstraint;
}

+ (struct CGSize)sizeForAttributedTitle:(id)arg1 maxWidth:(double)arg2 style:(id)arg3;
+ (struct CGSize)imageSizeForMaxWidth:(double)arg1;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelRightEdgeConstraint; // @synthesize titleLabelRightEdgeConstraint=_titleLabelRightEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeftEdgeConstraint; // @synthesize titleLabelLeftEdgeConstraint=_titleLabelLeftEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelBottomEdgeConstraint; // @synthesize titleLabelBottomEdgeConstraint=_titleLabelBottomEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopEdgeConstraint; // @synthesize titleLabelTopEdgeConstraint=_titleLabelTopEdgeConstraint;
@property(readonly, nonatomic) SPTHomeUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)addConstraints;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)applyStateStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @dynamic attributedTitle;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

