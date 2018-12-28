//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PHTPhenotypeConfigurationFlag : NSObject
{
    NSString *_name;
    id _value;
    long long _valueType;
    long long _storageType;
}

@property(readonly, nonatomic) long long storageType; // @synthesize storageType=_storageType;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2 valueType:(long long)arg3 storageType:(long long)arg4;

@end

