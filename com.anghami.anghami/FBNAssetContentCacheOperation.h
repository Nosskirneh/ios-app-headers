//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface FBNAssetContentCacheOperation : NSObject
{
    NSMutableSet *_pendingCacheURLs;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSMutableSet *pendingCacheURLs; // @synthesize pendingCacheURLs=_pendingCacheURLs;
- (void).cxx_destruct;
- (id)initWithContentURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

