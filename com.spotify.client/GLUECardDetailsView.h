//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEReusable-Protocol.h"
#import "GLUEStyleable-Protocol.h"

@class GLUECardDetailsStyle, GLUELabel, NSLayoutConstraint, NSString, SPTLayoutConstraintBuilder;

@interface GLUECardDetailsView : UIView <GLUEStyleable, GLUEReusable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUECardDetailsStyle *_style;
    SPTLayoutConstraintBuilder *_layout;
    NSLayoutConstraint *_subtitleHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *subtitleHeightConstraint; // @synthesize subtitleHeightConstraint=_subtitleHeightConstraint;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(copy, nonatomic) GLUECardDetailsStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGSize)labelSizeForText:(id)arg1 label:(id)arg2;
- (void)glue_applyStyle:(id)arg1;
- (void)prepareForReuse;
- (void)setupLabelsDoubleLinePriorities;
- (struct GLUESideMargins)labelSideMargins;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)addViewConstraints;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupLabels;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

