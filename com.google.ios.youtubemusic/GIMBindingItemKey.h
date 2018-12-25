//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GIMKey;
@protocol NSCopying;

@interface GIMBindingItemKey : NSObject <NSCopying>
{
    GIMKey *_key;
    id <NSCopying> _collectionKey;
}

+ (id)itemKeyWithKey:(id)arg1 collectionKey:(id)arg2;
@property(readonly, nonatomic) id <NSCopying> collectionKey; // @synthesize collectionKey=_collectionKey;
@property(readonly, nonatomic) GIMKey *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

