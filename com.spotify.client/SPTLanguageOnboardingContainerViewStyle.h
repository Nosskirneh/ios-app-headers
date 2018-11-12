//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEGradientStyle, NSString, SPTLanguageOnboardingGridViewStyle, SPTLanguageOnboardingHeaderViewStyle, SPTLanguageOnboardingOfflineViewStyle;
@protocol GLUEStyle;

@interface SPTLanguageOnboardingContainerViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEGradientStyle *_backgroundOverlayGradientStyle;
    SPTLanguageOnboardingHeaderViewStyle<GLUEStyle> *_headerViewStyle;
    double _headerViewLeadingMargin;
    double _headerViewTrailingMargin;
    SPTLanguageOnboardingGridViewStyle<GLUEStyle> *_gridViewStyle;
    SPTLanguageOnboardingOfflineViewStyle *_offlineViewStyle;
    double _offlineViewWidth;
}

@property(nonatomic) double offlineViewWidth; // @synthesize offlineViewWidth=_offlineViewWidth;
@property(copy, nonatomic) SPTLanguageOnboardingOfflineViewStyle *offlineViewStyle; // @synthesize offlineViewStyle=_offlineViewStyle;
@property(copy, nonatomic) SPTLanguageOnboardingGridViewStyle<GLUEStyle> *gridViewStyle; // @synthesize gridViewStyle=_gridViewStyle;
@property(nonatomic) double headerViewTrailingMargin; // @synthesize headerViewTrailingMargin=_headerViewTrailingMargin;
@property(nonatomic) double headerViewLeadingMargin; // @synthesize headerViewLeadingMargin=_headerViewLeadingMargin;
@property(copy, nonatomic) SPTLanguageOnboardingHeaderViewStyle<GLUEStyle> *headerViewStyle; // @synthesize headerViewStyle=_headerViewStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundOverlayGradientStyle; // @synthesize backgroundOverlayGradientStyle=_backgroundOverlayGradientStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

