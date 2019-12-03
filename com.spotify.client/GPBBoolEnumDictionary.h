//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage;

@interface GPBBoolEnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    CDUnknownFunctionPointerType _validationFunc;
    int _values[2];
    _Bool _valueSet[2];
}

+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const _Bool *)arg3 count:(unsigned long long)arg4;
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValue:(int)arg2 forKey:(_Bool)arg3;
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
+ (id)dictionary;
@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)removeAll;
- (void)removeEnumForKey:(_Bool)arg1;
- (void)setRawValue:(int)arg1 forKey:(_Bool)arg2;
- (void)setEnum:(int)arg1 forKey:(_Bool)arg2;
- (void)addRawEntriesFromDictionary:(id)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_88782d86 *)arg2 keyDataType:(unsigned char)arg3;
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getRawValue:(int *)arg1 forKey:(_Bool)arg2;
- (_Bool)getEnum:(int *)arg1 forKey:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const _Bool *)arg3 count:(unsigned long long)arg4;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)init;

@end

