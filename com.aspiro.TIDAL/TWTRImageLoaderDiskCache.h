//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TWTRImageLoaderCache-Protocol.h"

@class NSString, TWTRPersistentStore;

@interface TWTRImageLoaderDiskCache : NSObject <TWTRImageLoaderCache>
{
    TWTRPersistentStore *_persistentStore;
}

@property(readonly, nonatomic) TWTRPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
- (void).cxx_destruct;
- (void)removeAllImages;
- (id)removeImageForKey:(id)arg1;
- (id)fetchImageForKey:(id)arg1;
- (void)setImageData:(id)arg1 forKey:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)initWithPath:(id)arg1 maxSize:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
