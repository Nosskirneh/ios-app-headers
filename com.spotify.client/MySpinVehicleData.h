//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary;

@interface MySpinVehicleData : NSObject <NSCoding>
{
    NSDictionary *_value;
    unsigned int _typeKey;
}

@property(readonly, nonatomic) unsigned int typeKey; // @synthesize typeKey=_typeKey;
- (void).cxx_destruct;
- (id)valueJSONRepresentation;
- (id)objectForKey:(id)arg1;
- (id)keys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTypeKey:(unsigned int)arg1 value:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

