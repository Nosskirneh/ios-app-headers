//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface HUBIdentifier : NSObject <NSCopying>
{
    NSString *_namespacePart;
    NSString *_namePart;
}

@property(readonly, copy, nonatomic) NSString *namePart; // @synthesize namePart=_namePart;
@property(readonly, copy, nonatomic) NSString *namespacePart; // @synthesize namespacePart=_namespacePart;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *identifierString;
- (id)initWithString:(id)arg1;
- (id)initWithNamespace:(id)arg1 name:(id)arg2;

@end

