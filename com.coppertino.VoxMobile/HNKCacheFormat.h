//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HNKCache, HNKDiskCache, NSString;

@interface HNKCacheFormat : NSObject
{
    _Bool _allowUpscaling;
    double _compressionQuality;
    NSString *_name;
    long long _scaleMode;
    unsigned long long _diskCapacity;
    long long _preloadPolicy;
    CDUnknownBlockType _preResizeBlock;
    CDUnknownBlockType _postResizeBlock;
    HNKCache *_cache;
    unsigned long long _requestCount;
    HNKDiskCache *_diskCache;
    struct CGSize _size;
}

@property(retain, nonatomic) HNKDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) __weak HNKCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) CDUnknownBlockType postResizeBlock; // @synthesize postResizeBlock=_postResizeBlock;
@property(copy, nonatomic) CDUnknownBlockType preResizeBlock; // @synthesize preResizeBlock=_preResizeBlock;
@property(nonatomic) long long preloadPolicy; // @synthesize preloadPolicy=_preloadPolicy;
@property(nonatomic) unsigned long long diskCapacity; // @synthesize diskCapacity=_diskCapacity;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double compressionQuality; // @synthesize compressionQuality=_compressionQuality;
@property(nonatomic) _Bool allowUpscaling; // @synthesize allowUpscaling=_allowUpscaling;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *directory;
@property(readonly, nonatomic) unsigned long long diskSize;
- (id)resizedImageFromImage:(id)arg1;
- (id)initWithName:(id)arg1;

@end

