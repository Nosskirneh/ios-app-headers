//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface YTCacheKeyWrapper : NSObject <NSCopying>
{
    id _key;
}

+ (id)wrapperWithKey:(id)arg1;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1;

@end

