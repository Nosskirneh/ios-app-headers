//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GRWIntentDescriptor : NSObject
{
    int _intentType;
    long long _objectType;
    id _inputObject;
}

+ (id)intentDescriptorForText:(id)arg1;
+ (id)intentDescriptorForSourceLocation:(id)arg1 destinationLocation:(id)arg2;
+ (id)intentDescriptorForLocation:(id)arg1;
+ (id)intentDescriptorForURL:(id)arg1;
@property(nonatomic) int intentType; // @synthesize intentType=_intentType;
@property(retain, nonatomic) id inputObject; // @synthesize inputObject=_inputObject;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
- (void).cxx_destruct;
- (id)inputObjectTypeAsString;
- (_Bool)isValidGoogleMapsURL:(id)arg1;
- (_Bool)isValidEmail:(id)arg1;
- (id)stringAsValidURL:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToIntentDescriptor:(id)arg1;
- (void)determineIntentFromString:(id)arg1;
- (void)determineIntentTypeFromURL:(id)arg1;
- (void)determineIntent;
- (void)verifyInputObjectType;
@property(readonly, nonatomic) _Bool supportsGoogleMapURLRewrite;
@property(readonly, nonatomic) int metricsLinkType;
- (id)initWithObject:(id)arg1 objectType:(long long)arg2;

@end

