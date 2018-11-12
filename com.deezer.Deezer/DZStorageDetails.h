//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DZStorageDetails : NSObject
{
    unsigned long long _availableStorage;
    unsigned long long _deezerData;
    double _commercialDiskSpaceSize;
    double _smartCacheLimitSize;
    double _usedSmartCacheSize;
    double _smartCacheMinimumSize;
}

@property(nonatomic) double smartCacheMinimumSize; // @synthesize smartCacheMinimumSize=_smartCacheMinimumSize;
@property(nonatomic) double usedSmartCacheSize; // @synthesize usedSmartCacheSize=_usedSmartCacheSize;
@property(nonatomic) double smartCacheLimitSize; // @synthesize smartCacheLimitSize=_smartCacheLimitSize;
@property(nonatomic) double commercialDiskSpaceSize; // @synthesize commercialDiskSpaceSize=_commercialDiskSpaceSize;
@property(nonatomic) unsigned long long deezerData; // @synthesize deezerData=_deezerData;
@property(nonatomic) unsigned long long availableStorage; // @synthesize availableStorage=_availableStorage;

@end
