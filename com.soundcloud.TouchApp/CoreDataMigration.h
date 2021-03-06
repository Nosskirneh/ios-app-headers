//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreDataModel, NSMappingModel;

@interface CoreDataMigration : NSObject
{
    CoreDataModel *_fromDataModel;
    CoreDataModel *_toDataModel;
    long long _type;
    NSMappingModel *_mappingModel;
}

@property(readonly, nonatomic) NSMappingModel *mappingModel; // @synthesize mappingModel=_mappingModel;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CoreDataModel *toDataModel; // @synthesize toDataModel=_toDataModel;
@property(readonly, nonatomic) CoreDataModel *fromDataModel; // @synthesize fromDataModel=_fromDataModel;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFromDataModel:(id)arg1 toDataModel:(id)arg2 mappingModel:(id)arg3 type:(long long)arg4;

@end

