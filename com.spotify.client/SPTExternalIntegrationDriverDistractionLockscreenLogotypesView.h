//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIImageView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTExternalIntegrationDriverDistractionLockscreenLogotypesView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImageView *_partnerLogotypeImageView;
    UIImageView *_spotifyLogotypeImageView;
    UIImageView *_dotsImageView;
    NSMutableArray *_commonLayout;
    NSMutableArray *_dualLogotypeLayout;
    NSMutableArray *_singleLogotypeLayout;
    NSLayoutConstraint *_partnerImageAspectConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *partnerImageAspectConstraint; // @synthesize partnerImageAspectConstraint=_partnerImageAspectConstraint;
@property(retain, nonatomic) NSMutableArray *singleLogotypeLayout; // @synthesize singleLogotypeLayout=_singleLogotypeLayout;
@property(retain, nonatomic) NSMutableArray *dualLogotypeLayout; // @synthesize dualLogotypeLayout=_dualLogotypeLayout;
@property(retain, nonatomic) NSMutableArray *commonLayout; // @synthesize commonLayout=_commonLayout;
@property(readonly, nonatomic) UIImageView *dotsImageView; // @synthesize dotsImageView=_dotsImageView;
@property(readonly, nonatomic) UIImageView *spotifyLogotypeImageView; // @synthesize spotifyLogotypeImageView=_spotifyLogotypeImageView;
@property(readonly, nonatomic) UIImageView *partnerLogotypeImageView; // @synthesize partnerLogotypeImageView=_partnerLogotypeImageView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (id)createCommonLayout;
- (id)createDualLogotypeLayout;
- (id)createPartnerImageAspectConstraint;
- (id)createSingleLogotypeLayout;
- (void)removeViewConstraints;
- (void)addViewConstraints;
- (void)updateConstraints;
- (void)setNeedsLayout;
- (_Bool)hasPartnerImage;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

