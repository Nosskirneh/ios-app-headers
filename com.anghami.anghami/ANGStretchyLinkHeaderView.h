//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSKStretchyHeaderView.h"

#import "ANGAsyncImageViewDelegate-Protocol.h"

@class ANGAsyncImageView, ANGLink, NSLayoutConstraint, NSString, UILabel, UIView;

@interface ANGStretchyLinkHeaderView : GSKStretchyHeaderView <ANGAsyncImageViewDelegate>
{
    ANGLink *_link;
    ANGAsyncImageView *_headerImageView;
    UILabel *_descriptionLabel;
    UILabel *_titleLabel;
    UILabel *_highlightedLabel;
    NSLayoutConstraint *_titlesBottomLC;
    NSLayoutConstraint *_titlesDescriptionVerticalSpacing;
    UIView *_titlesContainerView;
}

@property(nonatomic) __weak UIView *titlesContainerView; // @synthesize titlesContainerView=_titlesContainerView;
@property(retain, nonatomic) NSLayoutConstraint *titlesDescriptionVerticalSpacing; // @synthesize titlesDescriptionVerticalSpacing=_titlesDescriptionVerticalSpacing;
@property(retain, nonatomic) NSLayoutConstraint *titlesBottomLC; // @synthesize titlesBottomLC=_titlesBottomLC;
@property(nonatomic) __weak UILabel *highlightedLabel; // @synthesize highlightedLabel=_highlightedLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak ANGAsyncImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) ANGLink *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (void)setSticked:(_Bool)arg1;
- (void)asyncImageSet:(id)arg1;
- (void)setup;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

