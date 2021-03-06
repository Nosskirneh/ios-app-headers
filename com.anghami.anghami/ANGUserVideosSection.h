//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGContentSectionList.h"

@class NSString;

@interface ANGUserVideosSection : ANGContentSectionList
{
    _Bool _facebookButtonAllowed;
    _Bool _showShareInsteadOfProfile;
    _Bool _privateUserVideoButtonAllowed;
    NSString *_overlayLocation;
}

@property(nonatomic) _Bool privateUserVideoButtonAllowed; // @synthesize privateUserVideoButtonAllowed=_privateUserVideoButtonAllowed;
@property _Bool showShareInsteadOfProfile; // @synthesize showShareInsteadOfProfile=_showShareInsteadOfProfile;
@property(retain, nonatomic) NSString *overlayLocation; // @synthesize overlayLocation=_overlayLocation;
@property _Bool facebookButtonAllowed; // @synthesize facebookButtonAllowed=_facebookButtonAllowed;
- (void).cxx_destruct;
- (id)amplitudeEventSectionType;
- (_Bool)allowsEmptySectionObjectsArray;
- (_Bool)hasAnOverlayImage;
- (_Bool)createButtonAllowed;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)objectAtIndex:(id)arg1 collectionView:(id)arg2;
- (long long)numberOfItemsForCarouselAtIndexPath:(id)arg1;
- (double)numberOfItemsInBigImagesSectionRow;
- (_Bool)isPrivateUserVideoButtonAtIndex:(long long)arg1;
- (_Bool)isFacebookButtonAtCollectionViewPath:(id)arg1 collectionView:(id)arg2;
- (_Bool)isCreateButtonCellAtIndex:(long long)arg1;
- (id)cellForObject:(id)arg1 indexPath:(id)arg2 collectionView:(id)arg3;
- (id)cellForObject:(id)arg1 tableView:(id)arg2;
- (struct CGSize)cellSizeForView:(id)arg1;
- (double)heightForContentRow:(id)arg1 tableView:(id)arg2;
- (id)objectFromDictionary:(id)arg1;
- (unsigned long long)type;
- (id)initWithSectionDictionary:(id)arg1;

@end

