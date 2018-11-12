//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBNativeAdCollectionViewAdProvider.h"

@class FBNativeAdViewAttributes, FBNativeAdsManager, NSMutableDictionary, NSString;

@interface FBNativeAdCollectionViewCellProvider : FBNativeAdCollectionViewAdProvider
{
    long long _type;
    FBNativeAdViewAttributes *_attributes;
    NSString *_uniqueCollectionCellIdentifier;
    FBNativeAdsManager *_manager;
    NSMutableDictionary *_currentIndexPathToAdMap;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *currentIndexPathToAdMap; // @synthesize currentIndexPathToAdMap=_currentIndexPathToAdMap;
@property(retain, nonatomic) FBNativeAdsManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSString *uniqueCollectionCellIdentifier; // @synthesize uniqueCollectionCellIdentifier=_uniqueCollectionCellIdentifier;
@property(retain, nonatomic) FBNativeAdViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)collectionCellIdentifier;
- (double)collectionView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithManager:(id)arg1 forType:(long long)arg2 forAttributes:(id)arg3;
- (id)initWithManager:(id)arg1 forType:(long long)arg2;
- (id)initWithManager:(id)arg1;

@end
