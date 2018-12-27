//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "_TtP8Features25AnalyticsAttributeStoring_-Protocol.h"

@class NSMutableDictionary;

@interface AnalyticsBag : NSObject <NSCoding, NSCopying, _TtP8Features25AnalyticsAttributeStoring_>
{
    NSMutableDictionary *_attributes;
}

@property(readonly, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)description;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)addAttributes:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

