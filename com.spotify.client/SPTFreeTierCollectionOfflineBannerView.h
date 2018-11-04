//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class GLUELabel, NSString, SPTFreeTierCollectionOfflineBannerStyle, UIProgressView;

@interface SPTFreeTierCollectionOfflineBannerView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_detailLabel;
    UIProgressView *_progressView;
    SPTFreeTierCollectionOfflineBannerStyle *_glueStyle;
    UIView *_backgroundView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SPTFreeTierCollectionOfflineBannerStyle *glueStyle; // @synthesize glueStyle=_glueStyle;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) GLUELabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)topInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)applyStyle;
- (void)setupConstraints;
- (void)animateFinishedWithCompletedTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didMoveToWindow;
- (void)glue_applyStyle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
