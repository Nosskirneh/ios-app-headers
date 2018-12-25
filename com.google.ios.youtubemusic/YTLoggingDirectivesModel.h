//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSData, YTILoggingDirectives, YTVisibilityLoggingDirectivesModel;
@protocol YTEntityStore;

@interface YTLoggingDirectivesModel : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _parseAndExtractFieldsFromProtoData;
    _Bool _generateData;
    YTVisibilityLoggingDirectivesModel *_visibility;
    NSData *_data;
    id <YTEntityStore> _entityStore;
    YTILoggingDirectives *_protoBuf;
}

@property(copy, nonatomic) YTILoggingDirectives *protoBuf; // @synthesize protoBuf=_protoBuf;
@property(nonatomic) _Bool generateData; // @synthesize generateData=_generateData;
@property(nonatomic) _Bool parseAndExtractFieldsFromProtoData; // @synthesize parseAndExtractFieldsFromProtoData=_parseAndExtractFieldsFromProtoData;
@property(readonly, nonatomic) id <YTEntityStore> entityStore; // @synthesize entityStore=_entityStore;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) YTVisibilityLoggingDirectivesModel *visibility; // @synthesize visibility=_visibility;
- (void).cxx_destruct;
- (_Bool)isEqualEntityValue:(id)arg1;
- (void)generateDataIfNecessary;
- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *trackingParams;
- (id)init;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBuf:(id)arg3 protoBufData:(id)arg4;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2 protoBufData:(id)arg3;
- (id)initWithEntityStore:(id)arg1 protoBuf:(id)arg2;

@end

