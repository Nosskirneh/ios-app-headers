//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIColor, UIFont;

@interface GPYStyle : NSObject
{
    long long _application;
    UIColor *_applicationTintColor;
}

+ (id)sharedInstance;
+ (id)fontWithType:(long long)arg1 phoneSize:(double)arg2 padSize:(double)arg3;
+ (id)collectionIndexViewColor;
+ (id)collectionIndexViewFont;
+ (id)emptyTitleColor;
+ (id)emptyTitleFont;
+ (id)entityTitleColor;
+ (id)entityTitleFont;
+ (id)clusterMoreLabelColor;
+ (id)clusterMoreLabelFont;
+ (id)clusterSubtitleColor;
+ (id)clusterSubtitleFont;
+ (id)clusterTitleColor;
+ (id)clusterTitleFont;
+ (id)detailLinkColor;
+ (id)detailLinkFont;
+ (id)detailDescriptionCalloutColor;
+ (id)detailDescriptionCalloutFont;
+ (id)detailDescriptionColor;
+ (id)detailDescriptionFont;
+ (id)detailSubtitleColor;
+ (id)detailSubtitleFont;
+ (id)detailTitleColor;
+ (id)detailTitleFont;
+ (id)eduCardDescriptionColor;
+ (id)eduCardDescriptionFont;
+ (id)eduCardTitleColor;
+ (id)eduCardTitleFont;
+ (id)cardActionFont;
+ (id)cardDiscoveryColor;
+ (id)cardDiscoveryFont;
+ (id)cardLabelFont;
+ (id)cardReasonColor;
+ (id)cardReasonFont;
+ (id)cardDescriptionColor;
+ (id)cardDescriptionFont;
+ (id)cardSubtitleColor;
+ (id)cardSubtitleBoldFont;
+ (id)cardSubtitleFont;
+ (id)cardTitleColor;
+ (id)cardTitleBigFont;
+ (id)cardTitleRegularBoldFont;
+ (id)cardTitleRegularFont;
+ (id)cardTitleMiniMediumFont;
+ (id)cardTitleMiniFont;
+ (id)headerTitleFont;
@property(readonly, nonatomic) UIColor *applicationTintColor; // @synthesize applicationTintColor=_applicationTintColor;
@property(nonatomic) long long application; // @synthesize application=_application;
- (void).cxx_destruct;
- (id)tabbedCollectionStyleImagesWithOptions:(long long)arg1 sizeClass:(long long)arg2;
- (id)tabbedCollectionStyleDefaultWithOptions:(long long)arg1 sizeClass:(long long)arg2;
- (id)tintColorForApplication:(long long)arg1;
- (id)internalTitleTabStopsForSizeClass:(long long)arg1;
- (double)internalHeroIconBottomPadForSizeClass:(long long)arg1;
- (struct CGSize)internalHeroIconSizeForSizeClass:(long long)arg1;
- (double)internalHeroBackgroundHeightImagesForSizeClass:(long long)arg1;
- (double)internalHeroBackgroundHeightDefaultForSizeClass:(long long)arg1;
- (id)internalTabbedCollectionStyleForHeaderType:(long long)arg1 options:(long long)arg2 sizeClass:(long long)arg3;
@property(readonly, nonatomic) NSDictionary *titleTabStops;
@property(readonly, nonatomic) double heroIconBottomPad;
@property(readonly, nonatomic) struct CGSize heroIconSize;
@property(readonly, nonatomic) double heroBackgroundHeightImages;
@property(readonly, nonatomic) double heroBackgroundHeightDefault;
- (id)tabbedCollectionStyleForHeaderType:(long long)arg1 options:(long long)arg2;
- (struct CGAffineTransform)parallaxHeroTransformWithScrollView:(id)arg1 offset:(struct CGPoint)arg2;
- (id)titleTabStopsForSizeClass:(long long)arg1;
- (id)tabbedCollectionStyleForHeaderType:(long long)arg1 options:(long long)arg2 sizeClass:(long long)arg3;
- (long long)titleStyleForHeaderType:(long long)arg1;
- (long long)tabAlignmentForHeaderType:(long long)arg1 headerFloating:(_Bool)arg2;
@property(readonly, nonatomic) double headerFadeDuration;
@property(readonly, nonatomic) double tabHeight;
- (double)heroIconBottomPadForSizeClass:(long long)arg1;
- (struct CGSize)heroIconSizeForSizeClass:(long long)arg1;
- (double)heroBackgroundHeightImagesForSizeClass:(long long)arg1;
- (double)heroBackgroundHeightDefaultForSizeClass:(long long)arg1;
@property(readonly, nonatomic) UIFont *navigationSubtitleFont;
@property(readonly, nonatomic) UIFont *navigationTitleFont;
@property(readonly, nonatomic) UIColor *heroViewOverlayColor;
@property(readonly, nonatomic) UIColor *selectedTabTitleColor;
@property(readonly, nonatomic) UIColor *highlightedTabTitleColor;
@property(readonly, nonatomic) UIColor *tabTitleColor;
@property(readonly, nonatomic) UIColor *navigationSubtitleColor;
@property(readonly, nonatomic) UIColor *navigationTitleColor;
@property(readonly, nonatomic) UIColor *statusBarBackgroundColor;
@property(readonly, nonatomic) UIColor *collectionBackgroundColor;
- (id)gpyt_titleTabStopsForSizeClass:(long long)arg1;
- (id)gpyt_tabbedCollectionStyleForHeaderType:(long long)arg1 options:(long long)arg2 sizeClass:(long long)arg3;
- (double)gpyt_heroIconBottomPadForSizeClass:(long long)arg1;
- (struct CGSize)gpyt_heroIconSizeForSizeClass:(long long)arg1;
- (double)gpyt_heroBackgroundHeightImagesForSizeClass:(long long)arg1;
- (double)gpyt_heroBackgroundHeightDefaultForSizeClass:(long long)arg1;

@end

