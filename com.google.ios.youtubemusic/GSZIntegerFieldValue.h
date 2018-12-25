//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSZFieldValue-Protocol.h"

@class NSString;

@interface GSZIntegerFieldValue : NSObject <GSZFieldValue>
{
    int _value;
    unsigned long long _type;
}

@property(readonly, nonatomic) int value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithValue:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

