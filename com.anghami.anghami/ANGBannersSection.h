//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGContentSectionList.h"

@interface ANGBannersSection : ANGContentSectionList
{
    _Bool _shouldAutorotate;
}

+ (double)bannerHeightForWidth:(double)arg1 andOrientation:(long long)arg2;
@property _Bool shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)amplitudeEventSectionType;
- (_Bool)forceHeaderShow;
- (double)spacingBeforeSection;
- (_Bool)disableExtraSpacing;
- (long long)numberOfContentRows;
- (id)cellForObject:(id)arg1 indexPath:(id)arg2 collectionView:(id)arg3;
- (id)cellForObject:(id)arg1 tableView:(id)arg2;
- (double)offsetForBanner;
- (double)heightForContentRow:(id)arg1 tableView:(id)arg2;
- (id)objectFromDictionary:(id)arg1;
- (unsigned long long)type;
- (id)initWithSectionDictionary:(id)arg1;

@end

