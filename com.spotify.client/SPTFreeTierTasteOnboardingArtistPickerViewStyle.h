//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUECollectionViewStyle, GLUEGradientStyle, GLUELabelStyle, NSString, SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayoutStyle;
@protocol GLUEStyle;

@interface SPTFreeTierTasteOnboardingArtistPickerViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_navigationItemTitleLabelStyle;
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEGradientStyle *_backgroundOverlayGradientStyle;
    GLUECollectionViewStyle *_collectionViewStyle;
    SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayoutStyle<GLUEStyle> *_collectionViewLayoutStyle;
    GLUEGradientStyle *_overlayGradientStyle;
    GLUEButtonStyle *_actionButtonStyle;
    double _searchBarToCollectionViewMargin;
    double _actionButtonEdgeMargin;
    double _actionButtonAppearanceAnimationDuration;
    double _actionButtonAppearanceAnimationSpringDamping;
    double _actionButtonAppearanceAnimationSpringVelocity;
}

@property(nonatomic) double actionButtonAppearanceAnimationSpringVelocity; // @synthesize actionButtonAppearanceAnimationSpringVelocity=_actionButtonAppearanceAnimationSpringVelocity;
@property(nonatomic) double actionButtonAppearanceAnimationSpringDamping; // @synthesize actionButtonAppearanceAnimationSpringDamping=_actionButtonAppearanceAnimationSpringDamping;
@property(nonatomic) double actionButtonAppearanceAnimationDuration; // @synthesize actionButtonAppearanceAnimationDuration=_actionButtonAppearanceAnimationDuration;
@property(nonatomic) double actionButtonEdgeMargin; // @synthesize actionButtonEdgeMargin=_actionButtonEdgeMargin;
@property(nonatomic) double searchBarToCollectionViewMargin; // @synthesize searchBarToCollectionViewMargin=_searchBarToCollectionViewMargin;
@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(copy, nonatomic) GLUEGradientStyle *overlayGradientStyle; // @synthesize overlayGradientStyle=_overlayGradientStyle;
@property(copy, nonatomic) SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayoutStyle<GLUEStyle> *collectionViewLayoutStyle; // @synthesize collectionViewLayoutStyle=_collectionViewLayoutStyle;
@property(copy, nonatomic) GLUECollectionViewStyle *collectionViewStyle; // @synthesize collectionViewStyle=_collectionViewStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundOverlayGradientStyle; // @synthesize backgroundOverlayGradientStyle=_backgroundOverlayGradientStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(copy, nonatomic) GLUELabelStyle *navigationItemTitleLabelStyle; // @synthesize navigationItemTitleLabelStyle=_navigationItemTitleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

