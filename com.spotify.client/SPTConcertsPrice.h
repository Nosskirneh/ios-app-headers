//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SPTConcertsPrice : NSObject <NSCopying>
{
    NSString *_maxPrice;
    NSString *_minPrice;
}

@property(readonly, copy, nonatomic) NSString *minPrice; // @synthesize minPrice=_minPrice;
@property(readonly, copy, nonatomic) NSString *maxPrice; // @synthesize maxPrice=_maxPrice;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMinPrice:(id)arg1 maxPrice:(id)arg2;

@end

