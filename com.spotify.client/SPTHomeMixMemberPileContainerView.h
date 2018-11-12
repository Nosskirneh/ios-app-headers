//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEReusable-Protocol.h"
#import "GLUEStyleable-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SPTHomeMixMemberPileContainerViewStyle, UIStackView;
@protocol GLUEImageLoader;

@interface SPTHomeMixMemberPileContainerView : UIView <GLUEStyleable, GLUEReusable>
{
    NSArray *_entities;
    id <GLUEImageLoader> _glueImageLoader;
    SPTHomeMixMemberPileContainerViewStyle *_currentStyle;
    UIStackView *_facePileContainer;
    NSLayoutConstraint *_maxWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *maxWidthConstraint; // @synthesize maxWidthConstraint=_maxWidthConstraint;
@property(nonatomic) __weak UIStackView *facePileContainer; // @synthesize facePileContainer=_facePileContainer;
@property(copy, nonatomic) SPTHomeMixMemberPileContainerViewStyle *currentStyle; // @synthesize currentStyle=_currentStyle;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)glue_applyStyle:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

