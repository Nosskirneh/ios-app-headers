//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PDLContactMethodField, PDLPersonInAppNotificationTargetOriginatingField;

@interface SKTContactMethod : NSObject
{
    NSString *_normalizedValue;
    unsigned long long _type;
    NSString *_value;
    id <PDLContactMethodField> _field;
    id <PDLPersonInAppNotificationTargetOriginatingField> _originatingField;
    NSString *_encodedProfileId;
}

@property(retain, nonatomic) NSString *encodedProfileId; // @synthesize encodedProfileId=_encodedProfileId;
@property(retain, nonatomic) id <PDLPersonInAppNotificationTargetOriginatingField> originatingField; // @synthesize originatingField=_originatingField;
@property(retain, nonatomic) id <PDLContactMethodField> field; // @synthesize field=_field;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (long long)provenanceFromContactSource:(long long)arg1;
- (id)normalizeValue:(id)arg1 forType:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool isInAppType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)typeForField:(id)arg1;
@property(readonly, nonatomic) NSString *normalizedValue;
- (id)fieldWithFactory:(id)arg1 contactSource:(long long)arg2;
- (id)initWithField:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;

@end

