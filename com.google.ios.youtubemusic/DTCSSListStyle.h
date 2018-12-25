//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface DTCSSListStyle : NSObject <NSCoding>
{
    _Bool _inherit;
    unsigned long long _type;
    unsigned long long _position;
    NSString *_imageName;
    long long _startingItemNumber;
}

+ (unsigned long long)listStylePositionFromString:(id)arg1;
+ (unsigned long long)listStyleTypeFromString:(id)arg1;
@property(nonatomic) long long startingItemNumber; // @synthesize startingItemNumber=_startingItemNumber;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool inherit; // @synthesize inherit=_inherit;
- (void).cxx_destruct;
- (_Bool)isOrdered;
- (id)prefixWithCounter:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToListStyle:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)updateFromStyleDictionary:(id)arg1;
- (_Bool)setPositionWithString:(id)arg1;
- (_Bool)setTypeWithString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyles:(id)arg1;

@end

