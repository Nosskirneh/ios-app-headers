//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRGoogleCastMessage.h"

@class NSString;

@interface DZRGoogleCastError : DZRGoogleCastMessage
{
    NSString *_detail;
    unsigned long long _errorCount;
}

+ (id)typeEnumValuesByErrorTypes;
+ (id)errorTypesByTypesEnumValues;
@property(nonatomic) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (id)forwardableError;
- (id)initWithDictionary:(id)arg1;
- (long long)messageTypeFromString:(id)arg1;
- (id)messageTypeString;

@end
