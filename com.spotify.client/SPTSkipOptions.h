//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SPTSkipOptions : NSObject <NSCopying>
{
    _Bool _overrideRestrictions;
}

@property(nonatomic) _Bool overrideRestrictions; // @synthesize overrideRestrictions=_overrideRestrictions;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedDictionary;

@end

