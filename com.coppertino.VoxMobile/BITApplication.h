//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BITTelemetryObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface BITApplication : BITTelemetryObject <NSCoding>
{
    NSString *_version;
    NSString *_build;
    NSString *_typeId;
}

@property(copy, nonatomic) NSString *typeId; // @synthesize typeId=_typeId;
@property(copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializeToDictionary;

@end

