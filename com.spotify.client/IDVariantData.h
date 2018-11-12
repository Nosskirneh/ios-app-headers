//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IDVariantData : NSObject
{
    id _variant;
    int _variantType;
}

+ (id)variantWithDictionary:(id)arg1;
+ (id)variantWithArray:(id)arg1;
+ (id)variantWithImageData:(id)arg1;
+ (id)variantWithPreInstImageId:(long long)arg1;
+ (id)variantWithImageId:(long long)arg1;
+ (id)variantWithPreInstTextId:(long long)arg1;
+ (id)variantWithTextId:(long long)arg1;
+ (id)variantWithDate:(id)arg1;
+ (id)variantWithString:(id)arg1;
+ (id)variantWithFloat:(float)arg1;
+ (id)variantWithInteger:(long long)arg1;
+ (id)variantWithBoolean:(_Bool)arg1;
+ (id)emptyImageVariant;
+ (id)emptyStringVariant;
+ (id)variantWithEtchObject:(shared_ptr_cdcbacd5)arg1;
+ (id)stringFromVariantType:(int)arg1;
@property(readonly) int type; // @synthesize type=_variantType;
- (void).cxx_destruct;
- (_Bool)isEqualToVariantData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isTypeOf:(int)arg1;
- (id)dictionary;
- (id)array;
- (id)imageData;
- (long long)preinstalledImageId;
- (long long)imageId;
- (long long)preinstalledTextId;
- (long long)textId;
- (id)date;
- (id)string;
- (float)floatValue;
- (long long)integerValue;
- (_Bool)booleanValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 type:(int)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (id)initWithPreInstImageId:(long long)arg1;
- (id)initWithImageId:(long long)arg1;
- (id)initWithPreInstTextId:(long long)arg1;
- (id)initWithTextId:(long long)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithBoolean:(_Bool)arg1;
- (shared_ptr_cdcbacd5)etchObject;
- (id)initWithEtchObject:(shared_ptr_cdcbacd5)arg1;
- (void)validateVariantType:(int)arg1;

@end

